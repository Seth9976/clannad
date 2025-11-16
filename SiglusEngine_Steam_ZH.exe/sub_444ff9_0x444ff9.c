// 函数: sub_444ff9
// 地址: 0x444ff9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t eax_1 = *arg1
int32_t edi
int32_t var_14 = edi

if (eax_1 == 1)
    int32_t* i_3 = arg4
    
    if (i_3 != 0)
        int32_t* edi_2 = arg3
        int32_t edx_2 = arg2
        int32_t* i
        
        do
            float* j = nullptr
            
            if (*edi_2 != 0)
                do
                    int32_t k_4 = 4
                    int32_t k
                    
                    do
                        long double x87_r7_3 = fconvert.t(*(j + *edi_2))
                        long double x87_r6_1 = fconvert.t(0f)
                        x87_r6_1 - x87_r7_3
                        int32_t eax_8
                        eax_8.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
                            | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
                        bool p_1 = unimplemented  {test ah, 0x44}
                        int32_t eax_9
                        
                        eax_9 = not(p_1) ? 0 : 1
                        
                        *(j + edx_2) = eax_9
                        j = &j[1]
                        k = k_4
                        k_4 -= 1
                    while (k != 1)
                while (j u< 0x40)
            
            edx_2 += 0x40
            edi_2 = &edi_2[1]
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (eax_1 != 2)
    if (eax_1 != 3)
        return 0x8876086c
    
    int32_t* i_4 = arg4
    
    if (i_4 != 0)
        int32_t* ecx_1 = arg3
        int32_t edx_1 = arg2
        int32_t* i_1
        
        do
            float* j_1 = nullptr
            
            if (*ecx_1 != 0)
                do
                    int32_t k_3 = 4
                    int32_t k_1
                    
                    do
                        *(j_1 + edx_1) = fconvert.s(fconvert.t(*(j_1 + *ecx_1)))
                        j_1 = &j_1[1]
                        k_1 = k_3
                        k_3 -= 1
                    while (k_1 != 1)
                while (j_1 u< 0x40)
            
            edx_1 += 0x40
            ecx_1 = &ecx_1[1]
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
else if (arg4 != 0)
    int32_t* edi_1 = arg3
    int32_t ebx_2 = arg2
    arg1 = arg4
    int32_t* i_2
    
    do
        float* j_2 = nullptr
        
        if (*edi_1 != 0)
            do
                arg4 = 4
                int32_t* k_2
                
                do
                    int32_t eax_7
                    int16_t x87control
                    eax_7, x87control = __ftol(x87control, fconvert.t(*(j_2 + *edi_1)))
                    *(j_2 + ebx_2) = eax_7
                    j_2 = &j_2[1]
                    k_2 = arg4
                    arg4 -= 1
                while (k_2 != 1)
            while (j_2 u< 0x40)
        
        ebx_2 += 0x40
        edi_1 = &edi_1[1]
        i_2 = arg1
        arg1 -= 1
    while (i_2 != 1)

return 0
