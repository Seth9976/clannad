// 函数: sub_409e80
// 地址: 0x409e80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = arg1
void* esi = nullptr
int32_t edi = 0
void** ebx = &data_632fd4

while (true)
    ebx = &ebx[1]
    
    if (ebx s>= &data_632fe8)
        esi += 2
    else
        esi = *ebx
    
    int32_t i_1 = divs.dp.d(sx.q(i), esi)
    
    if (i == i_1 * esi)
        void* ebx_1 = arg3 + (edi << 2)
        
        do
            ebx_1 += 4
            edi += 1
            i = i_1
            *(ebx_1 + 4) = esi
            
            if (esi == 2 && edi != 1)
                if (edi s> 1)
                    void* ecx_1 = ebx_1
                    int32_t j_2 = edi - 1
                    int32_t j
                    
                    do
                        *(ecx_1 + 4) = *ecx_1
                        ecx_1 -= 4
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                
                *(arg3 + 8) = 2
            
            if (i_1 == 1)
                void* eax_4 = arg3
                *eax_4 = arg1
                *(eax_4 + 4) = edi
                arg3 = nullptr
                int32_t ebx_2 = 1
                float var_4 = fconvert.s(fconvert.t(data_632fe8) / float.t(arg1))
                
                if (edi != 1 && edi - 1 s> 0)
                    int32_t var_c_2 = edi - 1
                    void* var_14_1 = eax_4 + 8
                    bool cond:5_1
                    
                    do
                        int32_t ebp_6 = 0
                        int32_t ecx_3 = *var_14_1
                        int32_t esi_2 = ecx_3 * ebx_2
                        int32_t temp0_3 = divs.dp.d(sx.q(arg1), esi_2)
                        
                        if (ecx_3 - 1 s> 0)
                            int32_t var_10_2 = ecx_3 - 1
                            void* edi_3 = arg2 + (arg3 << 2)
                            arg3 += (ecx_3 - 1) * temp0_3
                            bool cond:6_1
                            
                            do
                                ebp_6 += ebx_2
                                long double x87_r7_4 = fconvert.t(0f)
                                
                                if (temp0_3 s> 2)
                                    void* ecx_6 = edi_3
                                    uint32_t j_3 = (temp0_3 - 1) u>> 1
                                    uint32_t j_1
                                    
                                    do
                                        x87_r7_4 = x87_r7_4 + fconvert.t(1f)
                                        ecx_6 += 8
                                        j_1 = j_3
                                        j_3 -= 1
                                        long double x87_r6_2 = x87_r7_4 * fconvert.t(fconvert.s(
                                            float.t(ebp_6) * fconvert.t(var_4)))
                                        long double st0_1
                                        bool c2_1
                                        st0_1, c2_1 = __fcos(x87_r6_2)
                                        *(ecx_6 - 8) = fconvert.s(st0_1)
                                        long double st0_2
                                        bool c2_2
                                        st0_2, c2_2 = __fsin(x87_r6_2)
                                        *(ecx_6 - 4) = fconvert.s(st0_2)
                                    while (j_1 != 1)
                                
                                edi_3 += temp0_3 << 2
                                cond:6_1 = var_10_2 != 1
                                var_10_2 -= 1
                            while (cond:6_1)
                        
                        cond:5_1 = var_c_2 != 1
                        ebx_2 = esi_2
                        var_14_1 += 4
                        var_c_2 -= 1
                    while (cond:5_1)
                
                return 
            
            i_1 = divs.dp.d(sx.q(i_1), esi)
        while (i == i_1 * esi)
