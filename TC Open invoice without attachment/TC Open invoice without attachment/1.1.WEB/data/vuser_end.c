vuser_end()
{

	web_add_auto_header("Origin", 
		"https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com");

	web_url("72-Bold.woff2", 
		"URL=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/core/themes/sap_fiori_3/fonts/72-Bold.woff2", 
		"Resource=1", 
		"Referer=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/core/themes/sap_fiori_3/library.css?version=1.71.3&sap-ui-dist-version=1.71.4", 
		"Snapshot=t12.inf", 
		LAST);

	web_url("SAP-icons.woff2", 
		"URL=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ui/core/themes/base/fonts/SAP-icons.woff2", 
		"Resource=1", 
		"Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", 
		"Snapshot=t13.inf", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("flp-controls.js", 
		"URL=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/fiori/flp-controls.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("Component-preload.js", 
		"URL=https://sapui5.hana.ondemand.com/1.71.4/resources/sap/ushell/components/homepage/Component-preload.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://procurepartestc1-sapcim-test-performance.internal.cfapps.sap.hana.ondemand.com/cp.portal/site", 
		"Snapshot=t15.inf", 
		LAST);

	return 0;
}