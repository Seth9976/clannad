// 函数: sub_5f07c0
// 地址: 0x5f07c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x394) s>= 0 && *(arg1 + 0x1a8) != 0)
    if (*(arg1 + 0x12c) != 0xfffffffb)
        void* eax_7 = sub_54b180(0)
        
        if (eax_7 != 0 && eax_7 != 4)
            int32_t esi_2 = *(arg1 + 0x394)
            int32_t eax_8
            int32_t edx_3
            edx_3:eax_8 = muls.dp.d(0x6bca1af3, *(eax_7 + 0xa4) - *(eax_7 + 0xa0))
            int32_t edx_4 = edx_3 s>> 8
            
            if (esi_2 s< (edx_4 u>> 0x1f) + edx_4)
                return esi_2 * 0x260 + *(eax_7 + 0xa0)
    else
        void* eax_2 = arg1 + 0x12c + (*(arg1 + 0x1a8) << 2)
        int128_t var_20
        __builtin_memset(&var_20, 0, 0x19)
        void* var_c
        
        if (sub_554130(eax_2, arg1 + 0x12c, arg1, arg1 + 0x12c, eax_2, &var_20) != 0 && var_c != 0
                && var_c != 4)
            int32_t esi_1 = *(arg1 + 0x394)
            
            if (esi_1 s< sub_56a710(var_c))
                return esi_1 * 0x260 + *(var_c + 0xa0)

return 0
