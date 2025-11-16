// 函数: sub_5f1ac0
// 地址: 0x5f1ac0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
var_8 = 0
int32_t result = __calloc_impl(arg4, arg5, &var_8)

if (result == 0 && var_8 != result && __errno() != 0)
    void* eax_1 = __errno()
    *eax_1 = var_8

return result
