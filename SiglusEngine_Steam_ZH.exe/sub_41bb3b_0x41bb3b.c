// 函数: sub_41bb3b
// 地址: 0x41bb3b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* var_10 = nullptr
void* var_28 = nullptr
int32_t eax = arg1[2]

if (eax.b != 3)
    return 

int32_t edi
int32_t var_1a4_1 = edi
void* eax_6
int16_t x87control
int16_t x87control_1
int80_t st0_1
st0_1, eax_6, x87control_1 =
    sub_41b6ad(*(*arg1 + 0x68), *(arg1[1] + 0x68), x87control, not.d(eax u>> 0x10) & 1)
void* eax_8
int16_t x87control_2
int80_t st0_2
st0_2, eax_8, x87control_2 =
    sub_41b6ad(*(*arg1 + 0x6c), *(arg1[1] + 0x6c), x87control_1, not.d(eax u>> 0x11) & 1)
void* eax_10
long double st0_3
st0_3, eax_10 =
    sub_41b6ad(*(*arg1 + 0x70), *(arg1[1] + 0x70), x87control_2, not.d(eax u>> 0x12) & 1)

if (eax_6 != 0 && eax_8 != 0 && eax_10 != 0)
    int32_t esi_4 = *(arg1[1] + 0x68)
    float* eax_14 = sub_745f3f(esi_4 << 4)
    
    if (eax_14 == 0)
        var_10 = nullptr
    else
        sub_61cdd0(eax_14, 0x10, esi_4, sub_52e900)
        var_10 = eax_14
    
    if (var_10 != 0)
        int32_t esi_6 = *(*arg1 + 0x68) << 2
        void* eax_19 = sub_745f3f(esi_6 << 4)
        
        if (eax_19 == 0)
            var_28 = nullptr
        else
            sub_61cdd0(eax_19, 0x10, esi_6, sub_52e900)
            var_28 = eax_19
        
        if (var_28 != 0)
            int32_t eax_22 = *(*arg1 + 0x68)
            int32_t i = 0
            void* var_18_1 = (eax_22 << 4) + var_28
            void* eax_23 = arg1[1]
            void* esi_9 = eax_22 * 0x30 + var_28
            void* var_38_1 = var_28
            void* var_2c_1 = (eax_22 << 5) + var_28
            void* var_30_1 = esi_9
            
            if (*(eax_23 + 0x70) u> 0)
                int32_t* var_c_1 = eax_10 + 8
                
                do
                    int32_t j = 0
                    int32_t var_1c_1 = 0xffffffff
                    int32_t var_14_1 = 0xffffffff
                    
                    if (*(eax_23 + 0x6c) u> 0)
                        int32_t* edi_5 = eax_8 + 8
                        int32_t* var_8_4 = edi_5
                        
                        do
                            int32_t eax_24 = edi_5[-2]
                            int32_t k = 0
                            
                            if (eax_24 != var_1c_1)
                                int32_t ecx_17 = var_14_1
                                
                                if (eax_24 == ecx_17)
                                    var_14_1 = 0xffffffff
                                    var_1c_1 = ecx_17
                                    void* ecx_20 = var_18_1
                                    var_18_1 = var_38_1
                                    void* eax_28 = var_2c_1
                                    var_2c_1 = esi_9
                                    var_38_1 = ecx_20
                                    var_30_1 = eax_28
                                    esi_9 = eax_28
                                else
                                    var_1c_1 = eax_24
                                    (*(**arg1 + 4))(var_1c_1, var_c_1[-2], var_38_1)
                                    (*(**arg1 + 4))(var_1c_1, *var_c_1, var_2c_1)
                            
                            int32_t eax_29 = *edi_5
                            
                            if (eax_29 != var_14_1)
                                var_14_1 = eax_29
                                (*(**arg1 + 4))(var_14_1, var_c_1[-2], var_18_1)
                                (*(**arg1 + 4))(var_14_1, *var_c_1, esi_9)
                            
                            if (*(arg1[1] + 0x68) u> 0)
                                int32_t* eax_34 = eax_6 + 8
                                float* var_3c_1 = var_10
                                
                                do
                                    long double x87_r7_1 = fconvert.t(eax_34[1])
                                    int32_t esi_11 = *eax_34 << 4
                                    float* ecx_24 = esi_11 + var_30_1
                                    ecx_24[3]
                                    long double x87_r6_7 = fconvert.t(eax_34[-1])
                                    int32_t ecx_26 = eax_34[-2] << 4
                                    float* edx_11 = var_30_1 + ecx_26
                                    void* esi_12 = esi_11 + var_2c_1
                                    void* edx_13 = var_2c_1 + ecx_26
                                    long double x87_r6_12 = fconvert.t(edi_5[1])
                                    edx_11[3]
                                    long double x87_r6_13 = fconvert.t(eax_34[1])
                                    *(esi_12 + 0xc)
                                    long double x87_r5_18 = fconvert.t(eax_34[-1])
                                    long double x87_r5_23 = fconvert.t(edi_5[-1])
                                    long double x87_r5_25 = fconvert.t(fconvert.s(fconvert.t(
                                        fconvert.s(x87_r5_18 * fconvert.t(*edx_13)
                                        + fconvert.t(fconvert.s(x87_r6_13 * fconvert.t(*esi_12)))))
                                        * x87_r5_23)) + fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                                        x87_r6_7 * fconvert.t(*edx_11)
                                        + fconvert.t(fconvert.s(x87_r7_1 * fconvert.t(*ecx_24)))))
                                        * x87_r6_12))
                                    long double x87_r5_27 = fconvert.t(fconvert.s(fconvert.t(
                                        fconvert.s(fconvert.t(fconvert.s(x87_r5_18
                                        * fconvert.t(*(edx_13 + 4)))) + fconvert.t(fconvert.s(
                                        x87_r6_13 * fconvert.t(*(esi_12 + 4)))))) * x87_r5_23)) +
                                        fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                                        fconvert.t(fconvert.s(x87_r6_7 * fconvert.t(edx_11[1]))) +
                                        fconvert.t(fconvert.s(x87_r7_1 * fconvert.t(ecx_24[1])))))
                                        * x87_r6_12))
                                    long double x87_r5_29 = fconvert.t(fconvert.s(fconvert.t(
                                        fconvert.s(fconvert.t(fconvert.s(x87_r5_18
                                        * fconvert.t(*(edx_13 + 8)))) + fconvert.t(fconvert.s(
                                        x87_r6_13 * fconvert.t(*(esi_12 + 8)))))) * x87_r5_23)) +
                                        fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                                        fconvert.t(fconvert.s(x87_r6_7 * fconvert.t(edx_11[2]))) +
                                        fconvert.t(fconvert.s(x87_r7_1 * fconvert.t(ecx_24[2])))))
                                        * x87_r6_12))
                                    long double x87_r6_18 = fconvert.t(var_c_1[1])
                                    int32_t edx_16 = *eax_34 << 4
                                    void* esi_14 = var_18_1 + edx_16
                                    float var_170_1 =
                                        fconvert.s(fconvert.t(fconvert.s(x87_r5_29)) * x87_r6_18)
                                    *(edx_13 + 0xc)
                                    long double x87_r6_19 = fconvert.t(eax_34[1])
                                    *(esi_14 + 0xc)
                                    long double x87_r5_44 = fconvert.t(eax_34[-1])
                                    void* esi_16 = var_18_1 + ecx_26
                                    void* edx_17 = edx_16 + var_38_1
                                    void* ecx_27 = ecx_26 + var_38_1
                                    long double x87_r5_49 = fconvert.t(edi_5[1])
                                    *(esi_16 + 0xc)
                                    long double x87_r5_50 = fconvert.t(eax_34[1])
                                    *(edx_17 + 0xc)
                                    long double x87_r4_35 = fconvert.t(eax_34[-1])
                                    long double x87_r4_40 = fconvert.t(edi_5[-1])
                                    long double x87_r4_42 = fconvert.t(fconvert.s(fconvert.t(
                                        fconvert.s(x87_r4_35 * fconvert.t(*ecx_27)
                                        + fconvert.t(fconvert.s(x87_r5_50 * fconvert.t(*edx_17)))))
                                        * x87_r4_40)) + fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                                        x87_r5_44 * fconvert.t(*esi_16)
                                        + fconvert.t(fconvert.s(x87_r6_19 * fconvert.t(*esi_14)))))
                                        * x87_r5_49))
                                    long double x87_r4_44 = fconvert.t(fconvert.s(fconvert.t(
                                        fconvert.s(fconvert.t(fconvert.s(x87_r4_35
                                        * fconvert.t(*(ecx_27 + 4)))) + fconvert.t(fconvert.s(
                                        x87_r5_50 * fconvert.t(*(edx_17 + 4)))))) * x87_r4_40)) +
                                        fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(
                                        fconvert.s(x87_r5_44 * fconvert.t(*(esi_16 + 4)))) +
                                        fconvert.t(fconvert.s(x87_r6_19
                                        * fconvert.t(*(esi_14 + 4)))))) * x87_r5_49))
                                    long double x87_r4_46 = fconvert.t(fconvert.s(fconvert.t(
                                        fconvert.s(fconvert.t(fconvert.s(x87_r4_35
                                        * fconvert.t(*(ecx_27 + 8)))) + fconvert.t(fconvert.s(
                                        x87_r5_50 * fconvert.t(*(edx_17 + 8)))))) * x87_r4_40)) +
                                        fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(
                                        fconvert.s(x87_r5_44 * fconvert.t(*(esi_16 + 8)))) +
                                        fconvert.t(fconvert.s(x87_r6_19
                                        * fconvert.t(*(esi_14 + 8)))))) * x87_r5_49))
                                    long double x87_r5_55 = fconvert.t(var_c_1[-1])
                                    float* edi_6 = var_3c_1
                                    var_3c_1 = &var_3c_1[4]
                                    eax_34 = &eax_34[4]
                                    k += 1
                                    float var_150_1 =
                                        fconvert.s(fconvert.t(fconvert.s(x87_r4_46)) * x87_r5_55)
                                    long double x87_r4_54 = ((x87_r4_35 + fconvert.t(fconvert.s(
                                        x87_r4_35 * fconvert.t(*(ecx_27 + 0xc))))) * x87_r4_40
                                        + x87_r4_40) * x87_r5_55
                                    float var_194 = fconvert.s(fconvert.t(fconvert.s(
                                        fconvert.t(fconvert.s(x87_r4_44)) * x87_r5_55)) + fconvert.t(
                                        fconvert.s(fconvert.t(fconvert.s(x87_r5_27)) * x87_r6_18)))
                                    float var_190_1 =
                                        fconvert.s(fconvert.t(var_150_1) + fconvert.t(var_170_1))
                                    float var_18c_1 = fconvert.s(x87_r5_55 + x87_r4_54)
                                    *edi_6 = fconvert.s(fconvert.t(fconvert.s(
                                        fconvert.t(fconvert.s(x87_r4_42)) * x87_r5_55)) + fconvert.t(
                                        fconvert.s(fconvert.t(fconvert.s(x87_r5_25)) * x87_r6_18)))
                                    void* edi_7 = &edi_6[1]
                                    float* esi_18 = &var_194
                                    *edi_7 = *esi_18
                                    void* edi_8 = edi_7 + 4
                                    void* esi_19 = &esi_18[1]
                                    *edi_8 = *esi_19
                                    *(edi_8 + 4) = *(esi_19 + 4)
                                    edi_5 = var_8_4
                                while (k u< *(arg1[1] + 0x68))
                                
                                esi_9 = var_30_1
                            
                            (*(*arg1[1] + 8))(j, i, var_10)
                            edi_5 = &edi_5[4]
                            j += 1
                            var_8_4 = edi_5
                        while (j u< *(arg1[1] + 0x6c))
                    
                    var_c_1 = &var_c_1[4]
                    i += 1
                    eax_23 = arg1[1]
                while (i u< *(eax_23 + 0x70))

j__free(eax_6)
j__free(eax_8)
j__free(eax_10)
j__free(var_10)
j__free(var_28)
