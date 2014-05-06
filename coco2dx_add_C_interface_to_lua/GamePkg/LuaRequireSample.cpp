/*
** Lua binding: LuaMainAPI
** Generated automatically by tolua++-1.0.92 on Tue May  6 23:45:31 2014.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_LuaMainAPI_open (lua_State* tolua_S);

#include "../GameLuaAPI/GameLuaAPI.h"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
}

/* function: API_LoadLuaFile */
#ifndef TOLUA_DISABLE_tolua_LuaMainAPI_API_LoadLuaFile00
static int tolua_LuaMainAPI_API_LoadLuaFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* szLUAFileName = ((char*)  tolua_tostring(tolua_S,1,0));
  {
   API_LoadLuaFile(szLUAFileName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'API_LoadLuaFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: API_LuaSample */
#ifndef TOLUA_DISABLE_tolua_LuaMainAPI_API_LuaSample00
static int tolua_LuaMainAPI_API_LuaSample00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   API_LuaSample();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'API_LuaSample'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_LuaMainAPI_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_function(tolua_S,"API_LoadLuaFile",tolua_LuaMainAPI_API_LoadLuaFile00);
  tolua_function(tolua_S,"API_LuaSample",tolua_LuaMainAPI_API_LuaSample00);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_LuaMainAPI (lua_State* tolua_S) {
 return tolua_LuaMainAPI_open(tolua_S);
};
#endif

