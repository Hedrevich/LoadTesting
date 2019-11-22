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
		truclient_step("2.5", "Click on Log On button", "snapshot=Action_2.5.inf");
	}
	truclient_step("3", "Click on link (1) link", "snapshot=Action_3.inf");
	truclient_step("5", "Click on Search searchbox", "snapshot=Action_5.inf");
	truclient_step("6", "Type 0000100371 in Search searchbox", "snapshot=Action_6.inf");
	truclient_step("8", "Click on Search", "snapshot=Action_8.inf");
	lr_start_transaction("Transaction 1");
	truclient_step("12", "Click on Invoice Number / 2019", "snapshot=Action_12.inf");
	lr_end_transaction("Transaction 1",0);

	return 0;
}
