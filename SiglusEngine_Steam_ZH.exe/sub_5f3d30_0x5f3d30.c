// 函数: sub_5f3d30
// 地址: 0x5f3d30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0xa1) != 0 && *(arg1 + 0x334) != 0)
    if (*(arg1 + 0x2b8) != 0xfffffffb)
        int32_t eax_5 = sub_54b180(0)
        
        if (eax_5 != 0)
            return eax_5
    else
        void* eax_2 = arg1 + 0x2b8 + (*(arg1 + 0x334) << 2)
        int128_t var_20
        __builtin_memset(&var_20, 0, 0x19)
        int32_t var_c
        
        if (sub_554130(eax_2, arg1 + 0x2b8, arg1, arg1 + 0x2b8, eax_2, &var_20) != 0 && var_c != 0)
            return var_c

return 0
