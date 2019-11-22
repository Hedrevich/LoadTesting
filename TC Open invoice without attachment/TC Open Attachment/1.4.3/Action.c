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
		truclient_step("2.4", "Press key Enter on Password passwordbox", "snapshot=Action_2.4.inf");
	}
	truclient_step("4", "Click on link (1) link", "snapshot=Action_4.inf");
	truclient_step("6", "Click on Invoice Document No. textbox", "snapshot=Action_6.inf");
	truclient_step("7", "Type 5105600147 in Invoice Document No. textbox", "snapshot=Action_7.inf");
	truclient_step("9", "Click on Company Code in Connected... gridcell", "snapshot=Action_9.inf");
	truclient_step("11", "Click on Invoice Document No.Fiscal...", "snapshot=Action_11.inf");
	truclient_step("12", "Click on Go", "snapshot=Action_12.inf");
	truclient_step("14", "Click on Company Code / 0001 gridcell", "snapshot=Action_14.inf");
	truclient_step("16", "Click on Attachments", "snapshot=Action_16.inf");
	lr_start_transaction("Transaction 1");
	truclient_step("18", "Click on test.pdf", "snapshot=Action_18.inf");
	lr_end_transaction("Transaction 1",0);
	lr_start_transaction("Transaction 2");
	truclient_step("20", "Click on Last Updated on Apr 11,...", "snapshot=Action_20.inf");
	lr_end_transaction("Transaction 2",0);
	lr_start_transaction("Transaction 3");
	truclient_step("21", "Click on Last Updated on Apr 11,...", "snapshot=Action_21.inf");
	lr_end_transaction("Transaction 3",0);

	return 0;
}
