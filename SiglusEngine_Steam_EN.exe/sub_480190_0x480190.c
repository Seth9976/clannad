// 函数: sub_480190
// 地址: 0x480190
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return sub_476410(arg1, arg2, arg3, arg4)

enum MESSAGEBOX_RESULT eax_1 = arg4

if (*((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180) == 0 || eax_1 s< 0
        || eax_1 s>= *((arg2 + (arg3 << 1)) * 0x7a0 + &data_98c178))
    return sub_476410(eax_1, arg2, arg3, eax_1)

void* ecx_1 = eax_1 * 0x7d8 + *((arg2 + (arg3 << 1)) * 0x7a0 + 0x98c180)

if (arg5 u<= 0xff)
    eax_1 = arg6 + 1
    
    if (eax_1 u<= 0x100)
        eax_1 = arg7
        
        if (eax_1 u<= IDHELP)
            *(ecx_1 + 0x7c4) = eax_1
            *(ecx_1 + 0x7bc) = arg5
            *(ecx_1 + 0x7c0) = arg6
            *(ecx_1 + 0x7c8) = arg8
            return arg8

return eax_1
