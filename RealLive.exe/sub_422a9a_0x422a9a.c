// 函数: sub_422a9a
// 地址: 0x422a9a
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t eflags
int32_t result
result.b = __in_al_dx(arg2.w, eflags)
int32_t ebx
int32_t var_4 = ebx
int32_t temp0 = *arg4
bool p = unimplemented  {scasd dword [edi]}
bool a = unimplemented  {scasd dword [edi]}
result:1.b = (result - temp0 s< 0 ? 1 : 0) << 7 | (result == temp0 ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2 | (result u< temp0 ? 1 : 0)
*(arg1 - 0x54) -= arg2
int32_t* var_8 = &var_4
*arg3
arg1:1.b = 0x9b
return result
