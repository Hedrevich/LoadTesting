//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'https://procurepartestc...site#Shell-home'", "snapshot=Action_1.inf");
	truclient_step("2", "Log On", "snapshot=Action_2.inf");
	{
		truclient_step("2.1", "Type yauhen.hedrevich@sap.com in Welcome to Procurement... textbox", "snapshot=Action_2.1.inf");
		truclient_step("2.4", "Type ************** in Password passwordbox", "snapshot=Action_2.4.inf");
		truclient_step("2.5", "Click on Log On button", "snapshot=Action_2.5.inf");
	}
	truclient_step("4", "Click on link (1) link", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Invoice Document No. textbox", "snapshot=Action_5.inf");
	truclient_step("6", "Type 5105600147 in Invoice Document No. textbox", "snapshot=Action_6.inf");
	truclient_step("8", "Click on Invoicing Party / AN...", "snapshot=Action_8.inf");
	truclient_step("10", "Click on Go", "snapshot=Action_10.inf");
	truclient_step("12", "Click on Invoicing Party / AN... gridcell", "snapshot=Action_12.inf");
	truclient_step("14", "Click on More button", "snapshot=Action_14.inf");
	truclient_step("16", "Click on Attachments option", "snapshot=Action_16.inf");
	lr_start_transaction("Transaction 1");
	truclient_step("18", "Click on STATUSInvoice.png", "snapshot=Action_18.inf");
	lr_end_transaction("Transaction 1",0);

	return 0;
}
