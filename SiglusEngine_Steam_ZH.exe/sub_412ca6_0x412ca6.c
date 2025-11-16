// 函数: sub_412ca6
// 地址: 0x412ca6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_120 = edi
float* var_8 = nullptr
float* var_1c = nullptr
void var_114
sub_4090b4(&var_114, arg3)
int32_t i_4 = arg5
uint32_t temp0 = divu.dp.d(0:i_4, 3)
int16_t* var_20 = nullptr
int32_t var_24 = 0
int32_t var_48 = 0
int32_t var_10 = 0
int32_t* var_14 = nullptr
int32_t var_28 = 0
int32_t var_34 = 0
int32_t* var_2c = nullptr
void* var_8c

if (arg10 != 0 && (arg4 & 0x440) == 0 && var_8c != 0)
    uint32_t edi_3 = temp0 << 2
    var_20 = sub_745f3f(edi_3)
    int32_t eax_5 = sub_745f3f(i_4 * 0x14)
    
    if (eax_5 == 0)
        var_24 = 0
    else
        sub_61cdd0(eax_5, 0x14, i_4, sub_52e900)
        var_24 = eax_5
    
    int32_t ebx_3 = i_4 << 2
    var_10 = sub_745f3f(ebx_3)
    var_14 = sub_745f3f(arg6 * 0xc)
    float* eax_11 = sub_745f3f(ebx_3)
    var_8 = eax_11
    
    if (var_20 != 0 && var_24 != 0 && var_10 != 0 && var_14 != 0 && eax_11 != 0)
        __builtin_memset(__builtin_memset(var_20, 0, edi_3 u>> 2 << 2), 0, edi_3 & 3)
        __builtin_memset(__builtin_memset(var_10, 0xffffffff, ebx_3 u>> 2 << 2), 0xff, ebx_3 & 3)
        
        if ((*(*arg2 + 0x2c))(arg2, 0, 0, &var_28, 0x10) s>= 0)
            if (arg6 u> 0)
                int32_t* ecx_11 = var_14
                int32_t var_c_1 = 0
                arg3 = nullptr
                int32_t* i_3 = arg6
                int32_t* i
                
                do
                    void* edx_5 = arg3 + var_28
                    
                    for (int32_t j = 0; j u< 3; )
                        *ecx_11 = *(var_10 + (zx.d(*(edx_5 + (j << 1))) << 2))
                        uint32_t ebx_4 = zx.d(*(edx_5 + (j << 1)))
                        int32_t edi_11 = var_c_1 + j
                        j += 1
                        ecx_11 = &ecx_11[1]
                        *(var_10 + (ebx_4 << 2)) = edi_11
                    
                    arg3 = &arg3[3]
                    var_c_1 += 3
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                i_4 = arg5
            
            int32_t eax_17
            float* ecx_13
            eax_17, ecx_13 = (*(*arg1 + 0x2c))(arg1, 0, 0, &var_1c, 0x10)
            
            if (eax_17 s>= 0)
                long double x87_r7_1 = fconvert.t(0f)
                long double x87_r6_1 = fconvert.t(arg9)
                x87_r6_1 - x87_r7_1
                eax_17.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x44}
                int32_t var_54
                
                if (p_1)
                    int32_t ebx_7 = i_4 << 2
                    int32_t eax_24 = sub_745f3f(ebx_7)
                    var_34 = eax_24
                    int32_t* ebx_8 = sub_745f3f(ebx_7)
                    var_2c = ebx_8
                    
                    if (eax_24 != 0 && ebx_8 != 0)
                        float* eax_26 = var_1c
                        int32_t ecx_15 = 0
                        
                        if (i_4 u> 0)
                            do
                                *(eax_24 + (ecx_15 << 2)) = fconvert.s(fconvert.t(*eax_26))
                                eax_26 += var_54
                                ecx_15 += 1
                            while (ecx_15 u< i_4)
                        
                        sub_41310d(ebx_8, eax_24, i_4)
                        long double x87_r7_4 = fconvert.t(arg9) * fconvert.t(arg9)
                        arg3 = nullptr
                        int32_t ecx_17 = i_4 << 2
                        ecx_13 = __builtin_memset(
                            __builtin_memset(var_8, 0xffffffff, ecx_17 u>> 2 << 2), 0xff, 
                            ecx_17 & 3)
                        
                        if (i_4 u> 0)
                            int32_t j_2 = 1
                            int32_t i_2 = i_4
                            int32_t i_1
                            
                            do
                                for (; arg3 u< i_4; arg3 += 1)
                                    long double x87_r6_3 = fconvert.t(*(var_34 + (*ebx_8 << 2)))
                                        - fconvert.t(*(var_34 + (var_2c[arg3] << 2)))
                                    long double temp5_1 = fconvert.t(arg9)
                                    x87_r6_3 - temp5_1
                                    int32_t eax_29
                                    eax_29.w = (x87_r6_3 < temp5_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_3, temp5_1) ? 1 : 0) << 0xa
                                        | (x87_r6_3 == temp5_1 ? 1 : 0) << 0xe | 0x3800
                                    bool p_2 = unimplemented  {test ah, 0x41}
                                    
                                    if (p_2)
                                        break
                                
                                int32_t eax_30 = *ebx_8
                                ecx_13 = var_8
                                
                                if (ecx_13[eax_30] == 0xffffffff)
                                    ecx_13[eax_30] = eax_30
                                    ecx_13 = zx.d(*(var_8c + 2)) + *ebx_8 * var_54 + var_1c
                                    int32_t j_1 = j_2
                                    int32_t j_3 = j_1
                                    
                                    for (; j_1 u< arg3; j_1 = j_3)
                                        int32_t eax_35 = var_2c[j_3]
                                        void* edx_10 = &var_8[eax_35]
                                        
                                        if (*edx_10 == 0xffffffff)
                                            float* esi_3 =
                                                zx.d(*(var_8c + 2)) + eax_35 * var_54 + var_1c
                                            float var_44_1 = *esi_3
                                            float var_40
                                            int32_t* edi_17 = &var_40
                                            void* esi_4 = &esi_3[1]
                                            *edi_17 = *esi_4
                                            edi_17[1] = *(esi_4 + 4)
                                            long double x87_r6_5 =
                                                fconvert.t(var_44_1) - fconvert.t(*ecx_13)
                                            float var_44_2 = fconvert.s(x87_r6_5)
                                            long double x87_r5_2 =
                                                fconvert.t(var_40) - fconvert.t(ecx_13[1])
                                            var_40 = fconvert.s(x87_r5_2)
                                            float var_3c
                                            long double x87_r4_2 =
                                                fconvert.t(var_3c) - fconvert.t(ecx_13[2])
                                            var_3c = fconvert.s(x87_r4_2)
                                            long double x87_r3_4 = x87_r4_2 * x87_r4_2
                                                + x87_r5_2 * x87_r5_2 + x87_r6_5 * x87_r6_5
                                            x87_r3_4 - x87_r7_4
                                            void* eax_37
                                            eax_37.w = (x87_r3_4 < x87_r7_4 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r3_4, x87_r7_4) ? 1 : 0)
                                                << 0xa | (x87_r3_4 == x87_r7_4 ? 1 : 0) << 0xe | 0x2800
                                            bool p_3 = unimplemented  {test ah, 0x5}
                                            x87_r7_4 = x87_r4_2
                                            
                                            if (not(p_3))
                                                for (int32_t k = *(var_10 + (*ebx_8 << 2)); 
                                                        k != 0xffffffff; k = var_14[k])
                                                    int16_t* eax_42 = var_28 + divu.dp.d(0:k, 3) * 6
                                                    
                                                    if (zx.d(*eax_42) == eax_35)
                                                        goto label_41305e
                                                    
                                                    if (zx.d(eax_42[1]) == eax_35)
                                                        goto label_41305e
                                                    
                                                    if (zx.d(eax_42[2]) == eax_35)
                                                        goto label_41305e
                                                
                                                *edx_10 = *ebx_8
                                            
                                        label_41305e:
                                            i_4 = arg5
                                        
                                        j_3 += 1
                                
                                j_2 += 1
                                ebx_8 = &ebx_8[1]
                                i_1 = i_2
                                i_2 -= 1
                            while (i_1 != 1)
                        
                        sub_412bc2(ecx_13, arg1, arg2, arg4.b, i_4, arg6, arg7, arg8, var_8, arg10, 
                            var_54)
                else
                    float* ebx_5 = var_1c
                    int32_t* edi_12 = nullptr
                    
                    if (i_4 u> 0)
                        do
                            int32_t var_4c
                            int32_t eax_21
                            eax_21, ecx_13 = sub_41323c(zx.d(*(var_8c + 2)) + ebx_5, edi_12, 
                                var_20, var_24, temp0, var_10, var_14, var_28, &var_48, &var_4c)
                            
                            if (eax_21 == 0)
                                var_8[edi_12] = edi_12
                            else
                                ecx_13 = var_8
                                ecx_13[edi_12] = var_4c
                            
                            ebx_5 += var_54
                            edi_12 += 1
                        while (edi_12 u< i_4)
                    
                    sub_412bc2(ecx_13, arg1, arg2, arg4.b, i_4, arg6, arg7, arg8, var_8, arg10, 
                        var_54)

j__free(var_20)
j__free(var_24)
j__free(var_10)
j__free(var_14)
j__free(var_34)
j__free(var_2c)
j__free(var_8)

if (var_1c != 0)
    (*(*arg1 + 0x30))(arg1)

if (var_28 != 0)
    (*(*arg2 + 0x30))(arg2)
