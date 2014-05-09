#include "CCTestMan.h"
#include "ITest.h"

CCTestMan::CCTestMan(void)
{
}


CCTestMan::~CCTestMan(void)
{
}

void CCTestMan::printTest(ITest * pTest)
{
	pTest->printSomething("hello cplusplus");
}
