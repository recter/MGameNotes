/*  
 * ITest.h
 *
 * Created by Rect on 2014-5-9 10:16.
 * Copyright (c) 2014Äê shadowkong.com. All rights reserved.
*/
#ifndef _ITEST_H_
#define _ITEST_H_
#include <iostream>
struct ITest
{
	virtual void printSomething(std::string str) = 0;
};

#endif
