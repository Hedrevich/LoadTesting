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
	truclient_step("3", "Click on link (1) link", "snapshot=Action_3.inf");
	truclient_step("5", "Click on Invoice Document No. textbox", "snapshot=Action_5.inf");
	truclient_step("6", "Type 5105600147 in Invoice Document No. textbox", "snapshot=Action_6.inf");
	truclient_step("8", "Click on Company Code in Connected... gridcell", "snapshot=Action_8.inf");
	truclient_step("9", "Click on Go", "snapshot=Action_9.inf");
	truclient_step("11", "Click on Invoicing Party / AN... gridcell", "snapshot=Action_11.inf");
	truclient_step("13", "Click on More button", "snapshot=Action_13.inf");
	truclient_step("15", "Click on Attachments option", "snapshot=Action_15.inf");
	lr_start_transaction("Transaction 1");
	truclient_step("17", "Click on Last Updated on Apr 11,...", "snapshot=Action_17.inf");
	lr_end_transaction("Transaction 1",0);

	return 0;
}
