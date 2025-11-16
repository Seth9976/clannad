// 函数: sub_455361
// 地址: 0x455361
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
*(*(arg1 + 0xc4) + 4) = 4
**(arg1 + 0xc4) = 4
*(*(arg1 + 0xc4) + 0x10) = 0
int32_t eax_2 = sub_4538a9(arg1, arg2, 1, 1)

if (eax_2 != 0)
    int32_t* eax_3 = *(eax_2 + 4)
    
    if ((eax_3[4] == 0 || *(eax_2 + 8) != 0xffffffff) && eax_3[1] == 4 && *eax_3 == 4)
        if (*(arg1 + 0x3c) == 3)
            return sub_44e5c0(arg1, not.d(eax_2), arg3)
        
        int32_t result =
            sub_444948(arg1, arg3, **eax_2, *(*(*(arg1 + 0xb0) + (*(eax_2 + 0x14) << 2)) + 0x40))
        
        if (result s< 0)
            return result
        
        return sub_448129(arg1, eax_2)

return 0x8876086c
