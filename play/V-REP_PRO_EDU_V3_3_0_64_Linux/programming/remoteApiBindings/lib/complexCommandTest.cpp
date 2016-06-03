// Copyright 2006-2016 Coppelia Robotics GmbH. All rights reserved. 
// marc@coppeliarobotics.com
// www.coppeliarobotics.com
// 
// -------------------------------------------------------------------
// THIS FILE IS DISTRIBUTED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
// WARRANTY. THE USER WILL USE IT AT HIS/HER OWN RISK. THE ORIGINAL
// AUTHORS AND COPPELIA ROBOTICS GMBH WILL NOT BE LIABLE FOR DATA LOSS,
// DAMAGES, LOSS OF PROFITS OR ANY OTHER KIND OF LOSS WHILE USING OR
// MISUSING THIS SOFTWARE.
// 
// You are free to use/modify/distribute this file for whatever purpose!
// -------------------------------------------------------------------
//
// This file was automatically created for V-REP release V3.3.0 on February 19th 2016

// This example illustrates how to execute complex commands from
// a remote API client. You can also use a similar construct for
// commands that are not directly supported by the remote API.
//
// Load the demo scene 'remoteApiCommandServerExample.ttt' in V-REP, then 
// start the simulation and run this program.
//
// IMPORTANT: for each successful call to simxStart, there
// should be a corresponding call to simxFinish at the end!

#include <stdio.h>
#include <stdlib.h>
#include <string>

extern "C" {
    #include "extApi.h"
}

int main(int argc,char* argv[])
{
	int clientID=simxStart((simxChar*)"127.0.0.1",19999,true,true,2000,5);
	if (clientID!=-1)
	{
		printf("Connected to remote API server\n");

		// 1. First send a command to display a specific message in a dialog box:
		int retStringCnt;
		char* retStrings;
		int result=simxCallScriptFunction(clientID,"remoteApiCommandServer",sim_scripttype_childscript,"displayText_function",0,NULL,0,NULL,1,"Hello world!",0,NULL,NULL,NULL,NULL,NULL,&retStringCnt,&retStrings,NULL,NULL,simx_opmode_blocking);
		if (result==simx_return_ok)
			printf("Returned message: %s\n",retStrings); // display the reply from V-REP (in this case, just a string)
		else
			printf("Remote function call failed\n");

		// 2. Now create a dummy object at coordinate 0.1,0.2,0.3 with name 'MyDummyName':
		float coords[3]={0.1f,0.2f,0.3f};
		int retIntCnt;
		int* retInts;
		result=simxCallScriptFunction(clientID,"remoteApiCommandServer",sim_scripttype_childscript,"createDummy_function",0,NULL,3,coords,1,"MyDummyName",0,NULL,&retIntCnt,&retInts,NULL,NULL,NULL,NULL,NULL,NULL,simx_opmode_blocking);
		if (result==simx_return_ok)
			printf("Dummy handle: %i\n",retInts[0]); // display the reply from V-REP (in this case, the handle of the created dummy)
		else
			printf("Remote function call failed\n");

		extApi_sleepMs(2000);

		// Now close the connection to V-REP:	
		simxFinish(clientID);
	}
	return(0);
}
