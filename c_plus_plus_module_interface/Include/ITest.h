/*  
 * ITest.h
 *
 * Created by Rect on 2014-7-1 16:47.
 * Copyright (c) 2014Äê shadowkong.com. All rights reserved.
*/
#ifndef _ITEST_H_
#define _ITEST_H_
#include <stdlib.h>

struct ITestClient
{
	virtual void doAction() = 0;
};

extern ITestClient* createTestClient();
#endif