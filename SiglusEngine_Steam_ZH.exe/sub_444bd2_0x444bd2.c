// 函数: sub_444bd2
// 地址: 0x444bd2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t eax_1 = *arg1
int32_t edi
int32_t var_18 = edi

if (eax_1 == 1)
    if (arg4 u> 0)
        arg1 = arg4
        int32_t* i
        
        do
            int32_t* edi_2 = arg3
            int32_t* ebx_6 = arg2
            arg4 = 4
            int32_t* j
            
            do
                int32_t** ecx_2 = ebx_6
                int32_t k_2 = 4
                int32_t k
                
                do
                    long double x87_r7_2 = fconvert.t(*edi_2)
                    long double x87_r6_1 = fconvert.t(0f)
                    x87_r6_1 - x87_r7_2
                    int32_t* eax_13
                    eax_13.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
                    bool p_1 = unimplemented  {test ah, 0x44}
                    
                    eax_13 = not(p_1) ? nullptr : 1
                    
                    *ecx_2 = eax_13
                    edi_2 = &edi_2[1]
                    ecx_2 = &ecx_2[4]
                    k = k_2
                    k_2 -= 1
                while (k != 1)
                ebx_6 = &ebx_6[1]
                j = arg4
                arg4 -= 1
            while (j != 1)
            arg3 = &arg3[0x10]
            arg2 = &arg2[0x10]
            i = arg1
            arg1 -= 1
        while (i != 1)
else if (eax_1 == 2)
    if (arg4 u> 0)
        int32_t* i_3 = arg4
        int32_t* i_1
        
        do
            int32_t* ebx_5 = arg3
            arg4 = arg2
            int32_t j_3 = 4
            int32_t j_1
            
            do
                int32_t* edi_1 = arg4
                arg1 = 4
                int32_t* k_1
                
                do
                    int32_t eax_12
                    int16_t x87control
                    eax_12, x87control = __ftol(x87control, fconvert.t(*ebx_5))
                    *edi_1 = eax_12
                    ebx_5 = &ebx_5[1]
                    edi_1 = &edi_1[4]
                    k_1 = arg1
                    arg1 -= 1
                while (k_1 != 1)
                arg4 = &arg4[1]
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            arg3 = &arg3[0x10]
            arg2 = &arg2[0x10]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
else if (eax_1 == 3 && arg4 u> 0)
    void* edx_2 = &arg3[8]
    arg3 = arg4
    int32_t* i_2
    
    do
        int32_t* eax_6 = arg2
        void* ecx_1 = edx_2
        int32_t j_4 = 4
        int32_t j_2
        
        do
            *eax_6 = *(ecx_1 - 0x20)
            eax_6[1] = *(ecx_1 - 0x10)
            eax_6[2] = *ecx_1
            eax_6[3] = *(ecx_1 + 0x10)
            eax_6 = &eax_6[4]
            ecx_1 += 4
            j_2 = j_4
            j_4 -= 1
        while (j_2 != 1)
        arg2 = &arg2[0x10]
        edx_2 += 0x40
        i_2 = arg3
        arg3 -= 1
    while (i_2 != 1)

return 0
