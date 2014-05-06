
#ifndef __GAMELUAAPI_H_
#define __GAMELUAAPI_H_

#include "cocos2d.h"

// 以下两行注释非常重要.
//tolua++根据这两行注释来取 C++接口

// tolua_begin
void API_LoadLuaFile(  char *szLUAFileName);
void API_LuaSample();
// tolua_end

#endif //_GAMELUAAPI_H_

