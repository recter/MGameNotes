/*  
 * TestClient.h
 *
 * Created by Rect on 2014-7-1 16:53.
 * Copyright (c) 2014Äê shadowkong.com. All rights reserved.
*/
#ifndef _TESTCLIENT_H_
#define _TESTCLIENT_H_

#include "ITest.h"
class CTestClient :
	public ITestClient
{
public:
	CTestClient(void);
	~CTestClient(void);

	virtual void doAction();
};

#endif


