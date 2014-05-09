#pragma once
#include "Itest.h"
class RTest :
	public ITest
{
public:
	RTest(void);
	~RTest(void);
	void virtual printSomething(std::string str);
};

