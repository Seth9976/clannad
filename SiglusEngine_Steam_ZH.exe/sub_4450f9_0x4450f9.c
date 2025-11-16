// 函数: sub_4450f9
// 地址: 0x4450f9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t eax_1 = *arg1
int32_t edi
int32_t var_18 = edi

if (eax_1 == 1)
    if (arg4 != 0)
        int32_t* i
        
        do
            float* j = nullptr
            
            if (*arg3 != 0)
                int32_t* ebx_3 = arg2
                
                do
                    int32_t* ecx_3 = ebx_3
                    int32_t k_4 = 4
                    int32_t k
                    
                    do
                        long double x87_r7_3 = fconvert.t(*(j i+ *arg3))
                        long double x87_r6_1 = fconvert.t(0f)
                        x87_r6_1 - x87_r7_3
                        float eax_15
                        eax_15.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
                            | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
                        bool p_1 = unimplemented  {test ah, 0x44}
                        int32_t eax_16
                        
                        eax_16 = not(p_1) ? 0 : 1
                        
                        *ecx_3 = eax_16
                        ecx_3 = &ecx_3[4]
                        j = &j[1]
                        k = k_4
                        k_4 -= 1
                    while (k != 1)
                    ebx_3 = &ebx_3[1]
                while (j u< 0x40)
            
            arg2 = &arg2[0x10]
            arg3 = &arg3[1]
            i = arg4
            arg4 -= 1
        while (i != 1)
else if (eax_1 != 2)
    if (eax_1 != 3)
        return 0x8876086c
    
    if (arg4 != 0)
        int32_t* edx_1 = arg3
        int32_t* i_1
        
        do
            float* j_1 = nullptr
            
            if (*edx_1 != 0)
                arg3 = arg2
                
                do
                    float* ecx_2 = arg3
                    int32_t k_3 = 4
                    int32_t k_1
                    
                    do
                        long double x87_r7_1 = fconvert.t(*(j_1 + *edx_1))
                        j_1 = &j_1[1]
                        *ecx_2 = fconvert.s(x87_r7_1)
                        ecx_2 = &ecx_2[4]
                        k_1 = k_3
                        k_3 -= 1
                    while (k_1 != 1)
                    arg3 = &arg3[1]
                while (j_1 u< 0x40)
            
            arg2 = &arg2[0x10]
            edx_1 = &edx_1[1]
            i_1 = arg4
            arg4 -= 1
        while (i_1 != 1)
else if (arg4 != 0)
    int32_t* i_3 = arg4
    int32_t* i_2
    
    do
        float* j_2 = nullptr
        
        if (*arg3 != 0)
            arg4 = arg2
            
            do
                int32_t* ebx_2 = arg4
                arg1 = 4
                int32_t* k_2
                
                do
                    int32_t eax_11
                    int16_t x87control
                    eax_11, x87control = __ftol(x87control, fconvert.t(*(j_2 i+ *arg3)))
                    *ebx_2 = eax_11
                    ebx_2 = &ebx_2[4]
                    j_2 = &j_2[1]
                    k_2 = arg1
                    arg1 -= 1
                while (k_2 != 1)
                arg4 = &arg4[1]
            while (j_2 u< 0x40)
        
        arg2 = &arg2[0x10]
        arg3 = &arg3[1]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

return 0
