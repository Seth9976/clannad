// 函数: sub_74c590
// 地址: 0x74c590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
var_8 = 0
int32_t result = __calloc_impl(arg4, arg5, &var_8)

if (result == 0 && var_8 != result && __errno() != 0)
    void* eax_1 = __errno()
    *eax_1 = var_8

return result
