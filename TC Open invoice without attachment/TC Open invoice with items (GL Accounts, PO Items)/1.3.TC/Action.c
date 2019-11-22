//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'https://procurepartestc...site#Shell-home'", "snapshot=Action_1.inf");
	truclient_step("3", "Type yauhen.hedrevich@sap.com in Welcome to Procurement... textbox", "snapshot=Action_3.inf");
	truclient_step("5", "Type ************** in Password passwordbox", "snapshot=Action_5.inf");
	truclient_step("7", "Click on Log On button", "snapshot=Action_7.inf");
	truclient_step("8", "Mouse Over", "snapshot=Action_8.inf");
	{
		truclient_step("8.1", "Move mouse over ViewPortContainer", "snapshot=Action_8.1.inf");
	}
	truclient_step("9", "Click on link (1) link", "snapshot=Action_9.inf");
	truclient_step("11", "Click on Invoice Document No. textbox", "snapshot=Action_11.inf");
	truclient_step("12", "Type 5105600179 in Invoice Document No. textbox", "snapshot=Action_12.inf");
	truclient_step("14", "Click on Fiscal Year / 2019 gridcell", "snapshot=Action_14.inf");
	truclient_step("16", "Click on Go", "snapshot=Action_16.inf");
	lr_start_transaction("Transaction 1");
	truclient_step("18", "Click on Invoicing Party / JK TEST gridcell", "snapshot=Action_18.inf");
	lr_end_transaction("Transaction 1",0);

	return 0;
}
