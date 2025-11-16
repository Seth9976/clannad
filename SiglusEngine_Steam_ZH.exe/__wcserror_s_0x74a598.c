// 函数: __wcserror_s
// 地址: 0x74a598
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0 || arg2 u<= 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16

int32_t eax_3 = _mbstowcs_s(nullptr, arg1, arg2, __get_sys_err_msg(arg3), 0xffffffff)

if (eax_3 == 0 || (eax_3 != 0x16 && eax_3 != 0x22))
    int32_t eax_5 = neg.d(eax_3 - 0x50)
    return sbb.d(eax_5, eax_5, eax_3 != 0x50) & eax_3

int32_t var_1c
__builtin_memset(&var_1c, 0, 0x14)
__invoke_watson()
noreturn
