// 函数: sub_497140
// 地址: 0x497140
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
void* edi_1 = arg1[0x6a]

if (*(edi_1 + 8) == 0)
    if (arg1[0x15] != 0 && arg1[0x22] == 0)
        if (arg1[0x17] != 0 && arg1[0x1b] != 0)
            arg1[0x74] = *(edi_1 + 0x18)
            *(edi_1 + 8) = 1
        else if (arg1[0x19] == 0)
            void* eax_8 = *arg1
            *(eax_8 + 0x14) = 0x2e
            (*eax_8)(arg1)
        else
            arg1[0x74] = *(edi_1 + 0x14)
    
    (*arg1[0x71])(arg1)
    (*(arg1[0x6c] + 8))(arg1)
    
    if (arg1[0x11] == 0)
        if (*(edi_1 + 0x10) == 0)
            (*arg1[0x73])(arg1)
        
        (*arg1[0x72])(arg1)
        
        if (arg1[0x15] != 0)
            (*arg1[0x74])(arg1, *(edi_1 + 8))
        
        int32_t eax_14 = *(edi_1 + 8)
        int32_t eax_15 = neg.d(eax_14)
        (*arg1[0x6d])(arg1, sbb.d(eax_15, eax_15, eax_14 != 0) & 3)
        (*arg1[0x6b])(arg1, 0)
else
    void* eax_1 = *arg1
    *(eax_1 + 0x14) = 0x30
    (*eax_1)(arg1)

void* result = arg1[2]

if (result != 0)
    *(result + 0xc) = *(edi_1 + 0xc)
    int32_t ecx_5
    ecx_5.b = *(edi_1 + 8) != 0
    int32_t ecx_7 = ecx_5 + 1 + *(edi_1 + 0xc)
    bool cond:1_1 = arg1[0x10] == 0
    *(result + 0x10) = ecx_7
    
    if (not(cond:1_1) && *(arg1[0x6e] + 0x14) == 0)
        int32_t edx_9
        edx_9.b = arg1[0x1b] != 0
        *(result + 0x10) = edx_9 + 1 + ecx_7

return result
