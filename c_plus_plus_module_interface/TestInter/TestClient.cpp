/*  
 * TestClient.cpp
 *
 * Created by Rect on 2014-7-1 16:53.
 * Copyright (c) 2014Äê shadowkong.com. All rights reserved.
*/
#include "TestClient.h"
#include <iostream>
//-------------------------------------------------------------------------
CTestClient::CTestClient(void)
{
}

//-------------------------------------------------------------------------
CTestClient::~CTestClient(void)
{
}
//-------------------------------------------------------------------------
void CTestClient::doAction() 
{
	std::cout<<"i am the func doAction"<<std::endl;
	return;
}
//-------------------------------------------------------------------------
ITestClient* createTestClient()
{
	CTestClient * pTest = new CTestClient();
	if (pTest == NULL)
	{
		return NULL;
	}

	return pTest;
}
//-------------------------------------------------------------------------
