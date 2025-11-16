// 函数: __wfopen_s
// 地址: 0x749987
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16

int32_t* eax_2 = __wfsopen(arg2, arg3, 0x80)
*arg1 = eax_2

if (eax_2 == 0)
    return *__errno()

return 0
