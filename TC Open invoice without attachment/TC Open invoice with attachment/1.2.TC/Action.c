//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'https://procurepartestc...site#Shell-home'", "snapshot=Action_1.inf");
	truclient_step("2", "Log On", "snapshot=Action_2.inf");
	{
		truclient_step("2.2", "Type yauhen.hedrevich@sap.com in Welcome to Procurement... textbox", "snapshot=Action_2.2.inf");
		truclient_step("2.4", "Type ************** in Password passwordbox", "snapshot=Action_2.4.inf");
		truclient_step("2.6", "Click on Log On button", "snapshot=Action_2.6.inf");
	}
	truclient_step("3", "Mouse Over", "snapshot=Action_3.inf");
	{
		truclient_step("3.1", "Move mouse over ViewPortContainer", "snapshot=Action_3.1.inf");
		truclient_step("3.2", "Move mouse over Central Invoice Managemen... main", "snapshot=Action_3.2.inf");
	}
	truclient_step("4", "Click on Manage Supplier Invoices... link", "snapshot=Action_4.inf");
	truclient_step("6", "Click on Search searchbox", "snapshot=Action_6.inf");
	truclient_step("7", "Type an_bp_0002 in Search searchbox", "snapshot=Action_7.inf");
	truclient_step("8", "Press key Enter on Search searchbox", "snapshot=Action_8.inf");
	lr_start_transaction("Transaction 1");
	truclient_step("10", "Click on Invoicing Party / AN...", "snapshot=Action_10.inf");
	lr_end_transaction("Transaction 1",0);

	return 0;
}
