// 函数: sub_7245e0
// 地址: 0x7245e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_1c = edi
void* var_10 = arg2

while (true)
    if (arg1[0x1d] == 0)
        sub_723770(arg1)
        
        if (arg1[0x1d] == 0)
            if (var_10 != 0)
                arg1[0x5ad] = 0
                
                if (var_10 == 4)
                    int32_t ecx_10 = arg1[0x17]
                    void* edx_4
                    
                    if (ecx_10 s< 0)
                        edx_4 = nullptr
                    else
                        edx_4 = arg1[0xe] + ecx_10
                    
                    int32_t eax_15 = arg1[0x1b] - ecx_10
                    sub_7276b0(eax_15, edx_4, arg1, eax_15, 1)
                    void* ecx_12 = *arg1
                    arg1[0x17] = arg1[0x1b]
                    sub_722b30(ecx_12)
                    int32_t eax_17
                    eax_17.b = *(*arg1 + 0x10) != 0
                    return eax_17 + 2
                
                if (arg1[0x5a8] != 0)
                    int32_t ecx_14 = arg1[0x17]
                    void* edx_6
                    
                    if (ecx_14 s< 0)
                        edx_6 = nullptr
                    else
                        edx_6 = arg1[0xe] + ecx_14
                    
                    int32_t eax_20 = arg1[0x1b] - ecx_14
                    sub_7276b0(eax_20, edx_6, arg1, eax_20, 0)
                    void* ecx_16 = *arg1
                    arg1[0x17] = arg1[0x1b]
                    sub_722b30(ecx_16)
                
                if (arg1[0x5a8] == 0 || *(*arg1 + 0x10) != 0)
                    return 1
            
            break
    
    char* ecx_1 = arg1[0x1b]
    int32_t eax_1 = arg1[0xe]
    arg1[0x18] = 0
    arg2.b = ecx_1[eax_1]
    *(arg1[0x5a9] + (arg1[0x5a8] << 1)) = 0
    arg1[0x5a6][arg1[0x5a8]] = arg2.b
    arg1[0x5a8] += 1
    uint32_t eax_4 = zx.d(arg2.b)
    arg1[eax_4 + 0x25].w += 1
    int32_t eax_5 = arg1[0x5a7]
    arg1[0x1b] += 1
    arg1[0x1d] -= 1
    
    if (arg1[0x5a8] == eax_5 - 1)
        int32_t eax_7 = arg1[0x17]
        void* edx_1
        
        if (eax_7 s< 0)
            edx_1 = nullptr
        else
            edx_1 = arg1[0xe] + eax_7
        
        sub_7276b0(eax_7, edx_1, arg1, arg1[0x1b] - eax_7, 0)
        void* ebx_1 = *arg1
        arg1[0x17] = arg1[0x1b]
        void* edi_2 = *(ebx_1 + 0x1c)
        sub_727d20(edi_2)
        int32_t i_2 = *(edi_2 + 0x14)
        
        if (i_2 u> *(ebx_1 + 0x10))
            i_2 = *(ebx_1 + 0x10)
        
        if (i_2 != 0)
            int32_t i_1 = i_2
            char* ecx_8 = *(edi_2 + 0x10)
            arg2 = *(ebx_1 + 0xc)
            int32_t i
            
            do
                arg2 += 1
                *(arg2 - 1) = *ecx_8
                ecx_8 = &ecx_8[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
            *(ebx_1 + 0xc) += i_2
            *(edi_2 + 0x10) += i_2
            *(ebx_1 + 0x14) += i_2
            *(ebx_1 + 0x10) -= i_2
            int32_t temp1_1 = *(edi_2 + 0x14)
            *(edi_2 + 0x14) -= i_2
            
            if (temp1_1 == i_2)
                *(edi_2 + 0x10) = *(edi_2 + 8)
        
        if (*(*arg1 + 0x10) == 0)
            break

return 0
