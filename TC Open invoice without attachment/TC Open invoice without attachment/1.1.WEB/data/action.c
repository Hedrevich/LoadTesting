Action()
{

	/*1: Navigate to "https://procurepartestc...site#Shell-home"*/

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("site", 
		"URL=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_cookie("JSESSIONID=7B6487D47C0FEB92778DF456AC2AA4EB; DOMAIN=procurepartestc1.authentication.sap.hana.ondemand.com");

	web_add_cookie("__VCAP_ID__=84a9db4c-8651-4285-5f47-2ff0; DOMAIN=procurepartestc1.authentication.sap.hana.ondemand.com");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_url("authorize", 
		"URL=https://procurepartestc1.authentication.sap.hana.ondemand.com/oauth/authorize?response_type=code&client_id=sb-cim-uaa-performance!t6670&redirect_uri=https%3A%2F%2Fprocurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com%2Flogin%2Fcallback", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("JSESSIONID=s%3AHqALjPw5wSmEU83vluJlO13XFS5h_05i.m6iFmKoR68LMvbTnDkmY9%2F2SQLuYObWtPS6miocGytg; DOMAIN=procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com");

	web_add_cookie("__VCAP_ID__=66f42222-c391-4195-4209-3867; DOMAIN=procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com");

	/*2.2: Type yauhen.hedrevich@sap.com in Welcome to Procurement... textbox*/

	/*2.4: Type ************** in Password passwordbox*/

	/*2.5: Click on Log On button*/

	web_add_auto_header("Origin", 
		"https://procurepartestc1.authentication.sap.hana.ondemand.com");

	web_revert_auto_header("Origin");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_form("login.do", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		"Name=username", "Value=yauhen.hedrevich@sap.com", ENDITEM, 
		"Name=password", "Value=Xxxsxxx4914455", ENDITEM, 
		EXTRARES, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ushell/bootstrap/core-min-1.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ushell/bootstrap/core-min-2.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ushell/bootstrap/core-min-3.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ushell/bootstrap/core-min-0.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/core/themes/sap_fiori_3/fonts/72-Regular.woff2", "Referer=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/core/themes/sap_fiori_3/library.css?version=1.71.4&sap-ui-dist-version=1.71.4", ENDITEM, 
		"Url=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/~5ab20ed50c8bb3bb9a11d85ec1935cb604081365~/sap/cf/adapters/library-preload.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/~5ab20ed50c8bb3bb9a11d85ec1935cb604081365~/sap/cf/adapters/CommonDataModelAdapter.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/fl/library-preload.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.freestyle/~5ab20ed50c8bb3bb9a11d85ec1935cb604081365~/sap/ushell/cpv2/services/library-preload.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/fl/messagebundle_en.properties", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/layout/library-preload.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/core/themes/sap_fiori_3/library.css?version=1.71.3&sap-ui-dist-version=1.71.4", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/layout/messagebundle_en.properties", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/layout/themes/sap_fiori_3/library.css?version=1.71.3&sap-ui-dist-version=1.71.4", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/themes/sap_fiori_3/library.css?version=1.71.3&sap-ui-dist-version=1.71.4", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/base/security/encodeURLParameters.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ushell/themes/sap_fiori_3/library.css?version=1.71.3&sap-ui-dist-version=1.71.4", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/base/util/includes.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/core/messagebundle_en.properties", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/InputListItem.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/InputListItemRenderer.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/ComboBox.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/InputBase.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/delegate/ValueStateMessage.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/core/message/MessageMixin.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/InputBaseRenderer.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/dom/jquery/getSelectedText.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/dom/jquery/selectText.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/ComboBoxTextField.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/ComboBoxTextFieldRenderer.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/messagebundle_en.properties", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/ComboBoxBase.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/Input.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/ColumnListItem.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/ColumnListItemRenderer.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/DisplayListItem.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/DisplayListItemRenderer.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/core/SeparatorItem.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/Table.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/TableRenderer.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/core/util/PasteHelper.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/SuggestionsPopover.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/InputRenderer.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/ComboBoxBaseRenderer.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/ComboBoxRenderer.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/core/BusyIndicator.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/core/util/reflection/JsControlTreeModifier.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/core/util/reflection/XmlTreeModifier.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/base/util/restricted/_uniqWith.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/base/util/restricted/_/lodash.custom.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/flexibility/Bar.flexibility.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/fl/themes/sap_fiori_3/library.css?version=1.71.3&sap-ui-dist-version=1.71.4", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/changeHandler/CombineButtons.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/changeHandler/SplitMenuButton.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/flexibility/Button.flexibility.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/flexibility/CheckBox.flexibility.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/flexibility/Dialog.flexibility.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/flexibility/IconTabFilter.flexibility.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/flexibility/InputListItem.flexibility.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/flexibility/Label.flexibility.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/flexibility/Link.flexibility.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/changeHandler/ChangeLinkTarget.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/flexibility/MenuButton.flexibility.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/flexibility/OverflowToolbar.flexibility.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/flexibility/Page.flexibility.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/flexibility/Panel.flexibility.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/flexibility/Popover.flexibility.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/flexibility/RadioButton.flexibility.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/flexibility/StandardListItem.flexibility.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/flexibility/Table.flexibility.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/changeHandler/MoveTableColumns.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/changeHandler/AddTableColumn.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/flexibility/Text.flexibility.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/flexibility/Title.flexibility.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/m/flexibility/Toolbar.flexibility.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ushell/renderers/fiori2/resources/resources_en.properties", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		"Url=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ushell/services/Menu.js", "Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", ENDITEM, 
		LAST);

	web_url("sap-ui-version.json", 
		"URL=https://sapui5.hana.ondemand.com/1.71.4/resources/sap-ui-version.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("X-XHR-Logon", 
		"accept=\"iframe,strict-window,window\"");

	web_add_header("x-csrf-token", 
		"Fetch");

	web_url("site_2", 
		"URL=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/portal/rest/v1/site?siteId=default&sap-language=en&enablePersonalization=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cachebusterTokens.json", 
		"URL=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.fdcCache_c1fb7092_be9b_4d33_8c8d_38be55272dc4/cachebusterTokens.json?ts=1573827715473", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	/*4: Click on link (1) link*/

	web_revert_auto_header("X-Requested-With");

	web_revert_auto_header("X-XHR-Logon");

	web_url("manifest.json", 
		"URL=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ushell/components/tiles/cdm/applauncher/manifest.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("manifest.json_2", 
		"URL=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ushell/components/tiles/cdm/applauncherdynamic/manifest.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cardManifest.json", 
		"URL=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ushell/services/_CommonDataModel/vizTypeDefaults/cardManifest.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("SAP-icons-TNT.json", 
		"URL=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/tnt/themes/base/fonts/SAP-icons-TNT.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("BusinessSuiteInAppSymbols.json", 
		"URL=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ushell/themes/base/fonts/BusinessSuiteInAppSymbols.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
