// 函数: sub_454d86
// 地址: 0x454d86
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg4 == 0)
    return 0

if (arg3 != 0)
    int32_t eax_2 = sub_4538a9(arg1, arg2, 1, 0)
    
    if (eax_2 != 0)
        int32_t* ecx_2 = *(eax_2 + 4)
        int32_t edx_1 = ecx_2[4]
        
        if (edx_1 != 0 && *(eax_2 + 8) == 0xffffffff && arg4 u<= edx_1 && ecx_2[1] == 2)
            return sub_445228(ecx_2, *eax_2, arg3, arg4)

return 0x8876086c
