// 函数: sub_4553fc
// 地址: 0x4553fc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_10 = edi

if (arg3 == 0)
    return 0x8876086c

int32_t eax_1 = sub_4538a9(arg1, arg2, 1, 0)

if (eax_1 != 0)
    int32_t* ecx_2 = *(eax_1 + 4)
    
    if ((ecx_2[4] == 0 || *(eax_1 + 8) != 0xffffffff) && ecx_2[1] == 4 && *ecx_2 == 4)
        void* ecx_5 = *(*(*(arg1 + 0xb0) + (*(eax_1 + 0x14) << 2)) + 0x40)
        int32_t eax_3 = **eax_1
        
        if (ecx_5 != 0)
            eax_3 = *(*(ecx_5 + 8) + (eax_3 << 2))
        
        void* eax_5 = *(arg1 + 0x18) + eax_3 * 0x18
        
        if (*(eax_5 + 4) != 0)
            int32_t* eax_6 = *(eax_5 + 4)
            *arg3 = (*(*eax_6 + 0xc))(eax_6)
        else
            *arg3 = 0
        
        return 0

return 0x8876086c
