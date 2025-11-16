// 函数: sub_45560a
// 地址: 0x45560a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_14 = edi
*(*(arg1 + 0xc4) + 4) = 4
**(arg1 + 0xc4) = 0xf
*(*(arg1 + 0xc4) + 0x10) = 0
int32_t eax_2 = sub_4538a9(arg1, arg2, 1, 1)

if (eax_2 != 0)
    int32_t* eax_3 = *(eax_2 + 4)
    
    if ((eax_3[4] == 0 || *(eax_2 + 8) != 0xffffffff) && eax_3[1] == 4 && *eax_3 == 0xf)
        if (*(arg1 + 0x3c) == 3)
            return sub_44e78b(arg1, not.d(eax_2), arg3)
        
        char* eax_6 = *(*(arg1 + 0xb0) + (*(eax_2 + 0x14) << 2))
        void* ecx_6 = *(eax_6 + 0x40)
        int32_t eax_9
        int32_t ecx_7
        
        if (ecx_6 != 0)
            void* eax_12 = *(*(arg1 + 0xb0) + (*(eax_2 + 0x14) << 2))
            ecx_7 = *(eax_2 + 0x1c)
            eax_9 = *(*(*(eax_12 + 0x40) + 8)
                + (*(*(eax_12 + 0x30) + ecx_7 + *(*(arg1 + 0x38) + 0x10)) << 2))
        else
            ecx_7 = *(eax_2 + 0x1c)
            eax_9 = *(*(eax_6 + 0x30) + ecx_7 + *(arg1 + 0x20))
        
        if (arg3 == *(*(arg1 + 0x18) + eax_9 * 0x18 + 4))
            int32_t eax_17
            
            if (ecx_6 != 0)
                void* eax_20 = *(*(arg1 + 0xb0) + (*(eax_2 + 0x14) << 2))
                eax_17 = *(*(*(eax_20 + 0x40) + 8)
                    + (*(*(eax_20 + 0x30) + ecx_7 + *(*(arg1 + 0x38) + 0x10)) << 2))
            else
                eax_17 = *(*(eax_6 + 0x30) + ecx_7 + *(arg1 + 0x20))
            
            if ((*(*(arg1 + 0x18) + eax_17 * 0x18 + 0x14) & 2) != 0)
                return 0
        
        sub_4447ec(arg1, arg3, **eax_2, ecx_6)
        return sub_448129(arg1, eax_2)

return 0x8876086c
