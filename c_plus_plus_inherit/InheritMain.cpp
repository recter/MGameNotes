/*  
 * InheritMain.cpp
 *
 * Created by Rect on 2014-5-30 16:12.
 * Copyright (c) 2014Äê shadowkong.com. All rights reserved.
*/
#include "InheritMain.h"
#include <iostream>
//-------------------------------------------------------------------------
CInheritMain::CInheritMain(void)
{
}

//-------------------------------------------------------------------------
CInheritMain::~CInheritMain(void)
{
}
//-------------------------------------------------------------------------
void CInheritMain::onFirstCall()
{
	printf("call 1\n");
}
//-------------------------------------------------------------------------
void CInheritMain::onSecondCall()
{
	printf("call 2\n");
}
//-------------------------------------------------------------------------
void CInheritMain::onThirdCall()
{
	printf("call 3\n");
}
//-------------------------------------------------------------------------