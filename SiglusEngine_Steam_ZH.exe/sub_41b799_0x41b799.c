// 函数: sub_41b799
// 地址: 0x41b799
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* var_c = nullptr
int32_t var_14 = 0
int32_t eax = arg1[2]

if (eax.b != 3)
    return 

void* esi_1 = arg1[1]
int32_t edi
int32_t var_d0_1 = edi

if (*(esi_1 + 0x70) != 1)
    return 

void* edx_1 = *arg1

if (*(edx_1 + 0x70) != 1)
    return 

void* eax_5
int16_t x87control
int16_t x87control_1
int80_t st0_1
st0_1, eax_5, x87control_1 =
    sub_41b6ad(*(edx_1 + 0x68), *(esi_1 + 0x68), x87control, not.d(eax u>> 0x10) & 1)
void* eax_7
long double st0_2
st0_2, eax_7 = sub_41b6ad(*(*arg1 + 0x6c), *(arg1[1] + 0x6c), x87control_1, not.d(eax u>> 0x11) & 1)

if (eax_5 != 0 && eax_7 != 0)
    int32_t edi_3 = *(arg1[1] + 0x68)
    float* eax_11 = sub_745f3f(edi_3 << 4)
    
    if (eax_11 == 0)
        var_c = nullptr
    else
        sub_61cdd0(eax_11, 0x10, edi_3, sub_52e900)
        var_c = eax_11
    
    if (var_c != 0)
        int32_t edi_5 = *(*arg1 + 0x68) << 1
        int32_t eax_16 = sub_745f3f(edi_5 << 4)
        
        if (eax_16 == 0)
            var_14 = 0
        else
            sub_61cdd0(eax_16, 0x10, edi_5, sub_52e900)
            var_14 = eax_16
        
        if (var_14 != 0)
            int32_t i = 0
            int32_t var_30_1 = 0xffffffff
            int32_t var_1c_1 = 0xffffffff
            int32_t edi_8 = (*(*arg1 + 0x68) << 4) + var_14
            int32_t var_24_1 = var_14
            int32_t var_10_1 = edi_8
            
            if (*(arg1[1] + 0x6c) u> 0)
                int32_t* esi_5 = eax_7 + 8
                int32_t* var_8_3 = esi_5
                
                do
                    int32_t eax_20 = esi_5[-2]
                    int32_t j = 0
                    
                    if (eax_20 != var_30_1)
                        int32_t ecx_8 = var_1c_1
                        
                        if (eax_20 == ecx_8)
                            int32_t eax_21 = var_24_1
                            var_1c_1 = 0xffffffff
                            var_24_1 = edi_8
                            var_30_1 = ecx_8
                            var_10_1 = eax_21
                            edi_8 = eax_21
                        else
                            var_30_1 = eax_20
                            (*(**arg1 + 4))(eax_20, 0, var_24_1)
                    
                    int32_t eax_22 = *esi_5
                    
                    if (eax_22 != var_1c_1)
                        var_1c_1 = eax_22
                        (*(**arg1 + 4))(eax_22, 0, edi_8)
                    
                    if (*(arg1[1] + 0x68) u> 0)
                        int32_t* eax_25 = eax_5 + 8
                        float* var_2c_1 = var_c
                        
                        do
                            long double x87_r7_1 = fconvert.t(eax_25[1])
                            int32_t ecx_13 = *eax_25 << 4
                            float* esi_6 = ecx_13 + edi_8
                            esi_6[3]
                            long double x87_r6_7 = fconvert.t(eax_25[-1])
                            int32_t esi_8 = eax_25[-2] << 4
                            float* edx_4 = esi_8 + edi_8
                            float* ecx_14 = ecx_13 + var_24_1
                            void* esi_9 = esi_8 + var_24_1
                            long double x87_r6_12 = fconvert.t(var_8_3[1])
                            float var_9c_1 = fconvert.s(fconvert.t(fconvert.s(
                                fconvert.t(fconvert.s(x87_r6_7 * fconvert.t(edx_4[2])))
                                + fconvert.t(fconvert.s(x87_r7_1 * fconvert.t(esi_6[2])))))
                                * x87_r6_12)
                            edx_4[3]
                            long double x87_r6_13 = fconvert.t(eax_25[1])
                            ecx_14[3]
                            long double x87_r5_18 = fconvert.t(eax_25[-1])
                            float* edi_10 = var_2c_1
                            var_2c_1 = &var_2c_1[4]
                            eax_25 = &eax_25[4]
                            j += 1
                            long double x87_r5_23 = fconvert.t(var_8_3[-1])
                            float var_7c_1 = fconvert.s(fconvert.t(fconvert.s(
                                fconvert.t(fconvert.s(x87_r5_18 * fconvert.t(*(esi_9 + 8))))
                                + fconvert.t(fconvert.s(x87_r6_13 * fconvert.t(ecx_14[2])))))
                                * x87_r5_23)
                            long double x87_r4_17 = (x87_r5_18
                                + fconvert.t(fconvert.s(x87_r5_18 * fconvert.t(*(esi_9 + 0xc)))))
                                * x87_r5_23
                            long double x87_r5_25 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                                x87_r5_18 * fconvert.t(*esi_9)
                                + fconvert.t(fconvert.s(x87_r6_13 * fconvert.t(*ecx_14)))))
                                * x87_r5_23)) + fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                                x87_r6_7 * fconvert.t(*edx_4)
                                + fconvert.t(fconvert.s(x87_r7_1 * fconvert.t(*esi_6))))) * x87_r6_12))
                            long double x87_r5_27 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                                fconvert.t(fconvert.s(x87_r5_18 * fconvert.t(*(esi_9 + 4))))
                                + fconvert.t(fconvert.s(x87_r6_13 * fconvert.t(ecx_14[1])))))
                                * x87_r5_23)) + fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                                fconvert.t(fconvert.s(x87_r6_7 * fconvert.t(edx_4[1])))
                                + fconvert.t(fconvert.s(x87_r7_1 * fconvert.t(esi_6[1])))))
                                * x87_r6_12))
                            float var_c0 = fconvert.s(x87_r5_27)
                            float var_bc_1 = fconvert.s(fconvert.t(var_7c_1) + fconvert.t(var_9c_1))
                            float var_b8_1 = fconvert.s(x87_r5_23 + x87_r4_17)
                            *edi_10 = fconvert.s(x87_r5_25)
                            void* edi_11 = &edi_10[1]
                            float* esi_10 = &var_c0
                            *edi_11 = *esi_10
                            void* edi_12 = edi_11 + 4
                            void* esi_11 = &esi_10[1]
                            *edi_12 = *esi_11
                            *(edi_12 + 4) = *(esi_11 + 4)
                            edi_8 = var_10_1
                        while (j u< *(arg1[1] + 0x68))
                        
                        esi_5 = var_8_3
                    
                    (*(*arg1[1] + 8))(i, 0, var_c)
                    esi_5 = &esi_5[4]
                    i += 1
                    var_8_3 = esi_5
                while (i u< *(arg1[1] + 0x6c))

j__free(eax_5)
j__free(eax_7)
j__free(var_c)
j__free(var_14)
