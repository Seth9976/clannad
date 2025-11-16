// 函数: sub_49ae1d
// 地址: 0x49ae1d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0x8876086c

int32_t eax_1 = *(arg1 + 0xc)

if (eax_1 u>= 0x1c)
    int32_t* ecx_1 = *(arg1 + 8)
    
    if (*ecx_1 u>= 0x1c && ecx_1[1] u< eax_1)
        int32_t edi
        int32_t var_c_1 = edi
        *arg2 = 0
        void* edi_2 = &arg2[1]
        *edi_2 = 0
        *(edi_2 + 4) = 0
        int32_t edi_5 = ecx_1[1]
        int32_t eax_3
        
        if (edi_5 == 0)
            eax_3 = 0
        else
            eax_3 = *(arg1 + 8) + edi_5
        
        *arg2 = eax_3
        arg2[1] = ecx_1[2]
        arg2[2] = ecx_1[3]
        return 0

return 0x88760b59
