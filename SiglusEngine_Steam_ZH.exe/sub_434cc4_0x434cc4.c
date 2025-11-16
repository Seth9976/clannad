// 函数: sub_434cc4
// 地址: 0x434cc4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi

if (arg4 != 0 && arg3 == 0)
    return 0x8876086c

int32_t eax_1 = sub_433f9c(arg1, arg2, 1)

if (eax_1 != 0)
    void* ecx_5 = *(*(eax_1 + 4) + 0x40) + *(arg1 + 0x344) + *(eax_1 + 0x18)
    int32_t edx_1 = *(ecx_5 + 0x10)
    
    if (arg4 u<= edx_1 && edx_1 != 0 && *(eax_1 + 0x10) == 0xffffffff)
        int32_t edx_3 = *(ecx_5 + 4) - 1
        
        if (edx_3 == 1)
            return sub_432773(ecx_5, *(eax_1 + 0x1c), arg3, arg4)
        
        if (edx_3 == 2)
            return sub_4325c2(ecx_5, *(eax_1 + 0x1c), arg3, arg4)

return 0x8876086c
