//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'https://procurepartestc...site#Shell-home'", "snapshot=Action_1.inf");
	truclient_step("2", "Log On", "snapshot=Action_2.inf");
	{
		truclient_step("2.1", "Type yauhen.hedrevich@sap.com in Welcome to Procurement... textbox", "snapshot=Action_2.1.inf");
		truclient_step("2.3", "Type ************** in Password passwordbox", "snapshot=Action_2.3.inf");
		truclient_step("2.4", "Click on Log On button", "snapshot=Action_2.4.inf");
	}
	truclient_step("4", "Click on link (1) link", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Invoice Document No. textbox", "snapshot=Action_5.inf");
	truclient_step("6", "Type 5105600167 in Invoice Document No. textbox", "snapshot=Action_6.inf");
	truclient_step("8", "Click on Invoice Number / 51056001... gridcell", "snapshot=Action_8.inf");
	truclient_step("10", "Click on Go button", "snapshot=Action_10.inf");
	lr_start_transaction("Transaction 1");
	truclient_step("12", "Click on Invoicing Party / 0000000... gridcell", "snapshot=Action_12.inf");
	lr_end_transaction("Transaction 1",0);

	return 0;
}
