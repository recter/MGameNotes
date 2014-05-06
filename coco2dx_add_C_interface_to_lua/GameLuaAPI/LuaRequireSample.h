//
//  LuaRequireSample.h
//  HelloLua
//
//  Created by rect on 14-5-6.
//
//

#ifndef HelloLua_LuaRequireSample_h
#define HelloLua_LuaRequireSample_h


#ifdef __cplusplus
extern "C" {
#endif
#include "tolua++.h"
#ifdef __cplusplus
}
#endif

TOLUA_API int tolua_LuaMainAPI_open (lua_State* tolua_S);

#endif
