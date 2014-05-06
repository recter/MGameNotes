#include "cocos2d.h"
#include "cocos-ext.h"
#include "../cocos2dx_support/CCLuaEngine.h"


USING_NS_CC;


// 加载LUA脚本
void API_LoadLuaFile( char *szLUAFileName)
{
	CCLOG("API_LoadLuaFile = %s",szLUAFileName);

	CCLuaEngine* pEngine = CCLuaEngine::defaultEngine(); 
	std::string path = CCFileUtils::sharedFileUtils()->fullPathForFilename(szLUAFileName);
	pEngine->executeScriptFile(path.c_str());

}

void API_LuaSample()
{
    printf("API_LuaSample test c++");
}

