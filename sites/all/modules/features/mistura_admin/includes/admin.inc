<?php

/**
 * @file
 * Admin settings.
 */

/**
 * Form callback.
 * Admin settings form.
 *
 * @see mistura_admin_menu().
 */
function mistura_admin_settings() {

	if (module_exists('locale')) {
		$languages = locale_language_list();
	}

	drupal_set_title('Configurações');
	$form = array();

	// Configurações do website
	$form['wrapper_website'] = array(
		'#type'        => 'fieldset',
		'#title'       => t('Configurações do website'),
		'#collapsible' => TRUE,
		'#collapsed'   => FALSE
	);

	$form['wrapper_website']['basico'] = array(
		'#type'        => 'fieldset',
		'#title'       => t('Básico'),
		'#collapsible' => TRUE,
		'#collapsed'   => TRUE,
	);

	$form['wrapper_website']['basico']['site_name'] = array(
		'#type'          => 'textfield',
		'#title'         => t('Título do website'),
		'#default_value' => variable_get('site_name', ''),
		'#required'      => TRUE
	);

	$form['wrapper_website']['basico']['site_slogan'] = array(
		'#type'          => 'textfield',
		'#title'         => t('Slogan do website'),
		'#default_value' => variable_get('site_slogan', '')
	);

	$form['wrapper_website']['basico']['site_mail'] = array(
		'#type'          => 'textfield',
		'#title'         => t('E-mail principal'),
		'#default_value' => variable_get('site_mail', ''),
		'#required'      => TRUE
	);

	$form['wrapper_website']['redes_sociais'] = array(
		'#type'        => 'fieldset',
		'#title'       => t('Redes sociais'),
		'#collapsible' => TRUE,
		'#collapsed'   => TRUE,
	);

	$redes_sociais = mistura_admin_retorna_redes_sociais();

	foreach ($redes_sociais as $social_index_name => $rede_social) {
		$form['wrapper_website']['redes_sociais'][$social_index_name] = array(
			'#type'          => 'textfield',
			'#title'         => $rede_social['titulo'],
			'#default_value' => variable_get($social_index_name, '')
		);
	}

	$form['wrapper_website']['blocos'] = array(
		'#type'        => 'fieldset',
		'#title'       => t('Blocos do site'),
		'#collapsible' => TRUE,
		'#collapsed'   => FALSE,
	);

	$blocos = mistura_admin_retorna_blocos_info();
	if (sizeof($blocos > 1)) {
		foreach ($blocos as $bloco_index => $bloco_info) {
			$form['wrapper_website']['blocos'][$bloco_index] = array(
				'#type'          => $bloco_info['type_field'],
				'#title'         => $bloco_info['title'],
				'#default_value' => variable_get($bloco_index, ''),
				'#required'      => TRUE
			);

			if ($bloco_info['type_field'] === 'text_format') {
				$form['wrapper_website']['blocos'][$bloco_index]['#format'] = $bloco_info['format'];
			}
		}
	}

	$form['submit'] = array(
		'#type'  => 'submit',
		'#value' => 'Salvar configurações'
	);

	return $form;
}

/**
 * Validate callback
 *
 * @see mistura_admin_admin_settings().
 */
function mistura_admin_settings_validate($form, &$form_state) {
	$email = $form_state['values']['site_mail'];
	if (!valid_email_address($email)) {
		form_set_error('site_mail', t('E-mail inválido.'));
	}
}

/**
 * Submit callback
 *
 * @see mistura_admin_admin_settings().
 */
function mistura_admin_settings_submit($form, &$form_state) {
	foreach ($form_state['values'] as $field_name => $field_value) {
		if (strpos($field_name, 'site_') !== FALSE) {
			variable_set($field_name, $field_value);
		}
		elseif (strpos($field_name, 'mistura_') !== FALSE) {
			if (is_array($field_value)) {
				variable_set($field_name, $field_value['value']);
			}
			else {
				variable_set($field_name, $field_value);
			}
		}
	}
}

/**
 * Retorna a lista de redes sociais
 */
function mistura_admin_retorna_redes_sociais() {
	return array(
		'mistura_social_facebook' => array(
			'titulo' => t('Facebook')
		),
		'mistura_social_linkedin' => array(
			'titulo' => t('Linkedin')
		),
		'mistura_social_twitter'  => array(
			'titulo' => t('Twitter')
		)
	);
}

/**
 * Retorna os blocos que estarão disponíveis em múltiplos idiomas
 * @return array
 */
function mistura_admin_retorna_blocos_info() {
	return array(//    'mistura_block_1' => array(
//      'title' => t('Features Block 1'),
//      'type_field' => 'textfield'
//    ),
//    'mistura_block_2' => array(
//      'title' => t('Features Block 2'),
//      'type_field' => 'text_format',
//      'format' => 'simple'
//    )
	);
}

/**
 * Redirect user to account edit
 */
function mistura_admin_redirect_user_edit() {
	$user = user_uid_optional_load();
	drupal_goto('user/' . $user->uid . '/edit');
}