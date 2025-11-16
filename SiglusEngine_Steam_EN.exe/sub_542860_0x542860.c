// 函数: sub_542860
// 地址: 0x542860
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f)
    return 

void* eax = (&data_f8c790)[arg1 * 0xe48]

if (eax == 0xffffffff)
    return sub_542980(arg1) __tailcall

void* edx_1 = eax * 0x98 + &data_12c92b4

if (arg2 == 1)
    eax = *(edx_1 + 0x8c)
    
    if (eax != 0)
        if (eax == arg2)
            sub_57d6a0(eax, *(edx_1 + 0x90), arg1, *(edx_1 + 0x94))
            return 
        
        if (eax == 2)
            *(arg1 * 0x2d0 + &data_8fcb08) = 0xffffffff
            *(arg1 * 0x2d0 + 0x8fcb04) = 0xffffffff
        else if (eax == 3)
            sub_57d6a0(eax, *(edx_1 + 0x90), arg1, *(edx_1 + 0x94))
else if (arg2 == 2)
    eax = *(edx_1 + 0x8c)
    
    if (eax != 0)
        if (eax == 1 || eax == arg2)
            sub_57d6a0(eax, *(edx_1 + 0x90), arg1, *(edx_1 + 0x94))
            return 
        
        if (eax == 3)
            *(arg1 * 0x2d0 + &data_8fcb08) = 0xffffffff
            *(arg1 * 0x2d0 + 0x8fcb04) = 0xffffffff
