/*  
 * MainProject.cpp
 *
 * Created by Rect on 2014-7-1 16:44.
 * Copyright (c) 2014Äê shadowkong.com. All rights reserved.
*/
#include <iostream>
#include <stdlib.h>
#include "ITest.h"

void main()
{
	ITestClient* pTest = createTestClient();
	pTest->doAction();
	getchar();
	return;
}