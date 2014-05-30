/*  
 * InIeritTest.cpp
 *
 * Created by Rect on 2014-5-30 16:27.
 * Copyright (c) 2014Äê shadowkong.com. All rights reserved.
*/
#include "InIeritTest.h"
#include "InheritMain.h"
#include <iostream>
CInIeritTest::CInIeritTest(void)
{
}
CInIeritTest::~CInIeritTest(void)
{
}

void CInIeritTest::test(void* pCSecind)
{
	CInheritSecond* pTest = (CInheritSecond*)pCSecind;
	printf("CInIeritTest::test begin\n");
	pTest->onThirdCall();
	printf("CInIeritTest::test end\n");
}
