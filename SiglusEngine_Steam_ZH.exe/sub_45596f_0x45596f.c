// 函数: sub_45596f
// 地址: 0x45596f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_c = edi

if (arg3 == 0)
    return 0x8876086c

int32_t eax_1 = sub_4538a9(arg1, arg2, 1, 0)

if (eax_1 != 0)
    int32_t* ecx_2 = *(eax_1 + 4)
    
    if ((ecx_2[4] == 0 || *(eax_1 + 8) != 0xffffffff) && ecx_2[1] == 4 && *ecx_2 == 0x10)
        void* ecx_4 = *(*(arg1 + 0xb0) + (*(eax_1 + 0x14) << 2))
        int32_t eax_2
        
        if (*(ecx_4 + 0x40) != 0)
            void* ecx_9 = *(*(arg1 + 0xb0) + (*(eax_1 + 0x14) << 2))
            eax_2 = *(*(*(ecx_9 + 0x40) + 8)
                + (*(*(ecx_9 + 0x30) + *(eax_1 + 0x1c) + *(*(arg1 + 0x38) + 0x10)) << 2))
        else
            eax_2 = *(*(ecx_4 + 0x30) + *(eax_1 + 0x1c) + *(arg1 + 0x20))
        
        int32_t* eax_5 = *(*(arg1 + 0x18) + eax_2 * 0x18 + 4)
        *arg3 = eax_5
        
        if (eax_5 != 0)
            (*(*eax_5 + 4))(eax_5)
        
        return 0

return 0x8876086c
