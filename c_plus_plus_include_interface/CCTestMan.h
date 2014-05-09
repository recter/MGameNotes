#pragma once

struct ITest;

class CCTestMan
{
public:
	CCTestMan(void);
	~CCTestMan(void);
	void printTest(ITest * pTest);
};

