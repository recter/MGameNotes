#include "RTest.h"
#include <iostream>

RTest::RTest(void)
{
}


RTest::~RTest(void)
{
}

void RTest::printSomething(std::string str)
{
	printf("printSomething: %s",str.c_str());
}
