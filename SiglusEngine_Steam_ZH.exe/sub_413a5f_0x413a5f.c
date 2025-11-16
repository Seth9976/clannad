// 函数: sub_413a5f
// 地址: 0x413a5f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_124 = edi
float* var_8 = nullptr
float* var_1c = nullptr
void var_118
sub_4090b4(&var_118, arg3)
int32_t i_4 = arg5
uint32_t temp0 = divu.dp.d(0:i_4, 3)
int32_t* var_28 = nullptr
int32_t var_2c = 0
int32_t var_54 = 0
int32_t var_c = 0
int32_t var_18 = 0
int32_t var_24 = 0
int32_t var_38 = 0
int32_t* var_10 = nullptr
void* var_90

if (arg10 != 0 && (arg4 & 0x440) == 0 && var_90 != 0)
    uint32_t edi_3 = temp0 << 2
    var_28 = sub_745f3f(edi_3)
    int32_t eax_5 = sub_745f3f(i_4 * 0x14)
    
    if (eax_5 == 0)
        var_2c = 0
    else
        sub_61cdd0(eax_5, 0x14, i_4, sub_52e900)
        var_2c = eax_5
    
    int32_t ebx_3 = i_4 << 2
    var_c = sub_745f3f(ebx_3)
    var_18 = sub_745f3f(arg6 * 0xc)
    float* eax_11 = sub_745f3f(ebx_3)
    var_8 = eax_11
    
    if (var_28 != 0 && var_2c != 0 && var_c != 0 && var_18 != 0 && eax_11 != 0)
        __builtin_memset(__builtin_memset(var_28, 0, edi_3 u>> 2 << 2), 0, edi_3 & 3)
        __builtin_memset(__builtin_memset(var_c, 0xffffffff, ebx_3 u>> 2 << 2), 0xff, ebx_3 & 3)
        
        if ((*(*arg2 + 0x2c))(arg2, 0, 0, &var_24, 0x10) s>= 0)
            if (arg6 u> 0)
                void* ecx_11 = nullptr
                arg3 = nullptr
                void* var_20_1 = nullptr
                int32_t* i_3 = arg6
                int32_t* i
                
                do
                    void* edx_4 = ecx_11 + var_24
                    int32_t j = 0
                    int32_t* ecx_12 = ecx_11 + var_18
                    
                    do
                        *ecx_12 = *(var_c + (*(edx_4 + (j << 2)) << 2))
                        int32_t ebx_4 = *(edx_4 + (j << 2))
                        void* edi_11 = arg3 + j
                        j += 1
                        ecx_12 = &ecx_12[1]
                        *(var_c + (ebx_4 << 2)) = edi_11
                    while (j u< 3)
                    
                    arg3 += 3
                    ecx_11 = var_20_1 + 0xc
                    i = i_3
                    i_3 -= 1
                    var_20_1 = ecx_11
                while (i != 1)
                i_4 = arg5
            
            int32_t eax_17
            float* ecx_15
            eax_17, ecx_15 = (*(*arg1 + 0x2c))(arg1, 0, 0, &var_1c, 0x10)
            
            if (eax_17 s>= 0)
                long double x87_r7_1 = fconvert.t(0f)
                long double x87_r6_1 = fconvert.t(arg9)
                x87_r6_1 - x87_r7_1
                eax_17.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x44}
                int32_t var_58
                
                if (p_1)
                    int32_t edi_14 = i_4 << 2
                    int32_t ebx_6 = sub_745f3f(edi_14)
                    var_38 = ebx_6
                    int32_t* eax_25 = sub_745f3f(edi_14)
                    int32_t ecx_16 = 0
                    var_10 = eax_25
                    
                    if (ebx_6 != 0 && eax_25 != 0)
                        float* eax_26 = var_1c
                        
                        if (i_4 u> 0)
                            do
                                *(ebx_6 + (ecx_16 << 2)) = fconvert.s(fconvert.t(*eax_26))
                                eax_26 += var_58
                                ecx_16 += 1
                            while (ecx_16 u< i_4)
                        
                        sub_41310d(var_10, ebx_6, i_4)
                        long double x87_r7_4 = fconvert.t(arg9) * fconvert.t(arg9)
                        arg3 = nullptr
                        int32_t ecx_18 = i_4 << 2
                        ecx_15 = __builtin_memset(
                            __builtin_memset(var_8, 0xffffffff, ecx_18 u>> 2 << 2), 0xff, 
                            ecx_18 & 3)
                        
                        if (i_4 u> 0)
                            int32_t* edx_6 = var_10
                            int32_t var_14_1 = 1
                            int32_t* var_20_2 = edx_6
                            int32_t i_2 = i_4
                            int32_t i_1
                            
                            do
                                for (; arg3 u< i_4; arg3 += 1)
                                    long double x87_r6_3 = fconvert.t(*(ebx_6 + (*edx_6 << 2)))
                                        - fconvert.t(*(ebx_6 + (var_10[arg3] << 2)))
                                    long double temp5_1 = fconvert.t(arg9)
                                    x87_r6_3 - temp5_1
                                    int32_t eax_29
                                    eax_29.w = (x87_r6_3 < temp5_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_3, temp5_1) ? 1 : 0) << 0xa
                                        | (x87_r6_3 == temp5_1 ? 1 : 0) << 0xe | 0x3800
                                    bool p_2 = unimplemented  {test ah, 0x41}
                                    
                                    if (p_2)
                                        break
                                
                                int32_t eax_30 = *edx_6
                                ecx_15 = var_8
                                
                                if (ecx_15[eax_30] == 0xffffffff)
                                    ecx_15[eax_30] = eax_30
                                    ecx_15 = zx.d(*(var_90 + 2)) + *edx_6 * var_58 + var_1c
                                    int32_t var_30_1 = var_14_1
                                    
                                    if (var_14_1 u< arg3)
                                        do
                                            int32_t ebx_7 = var_10[var_30_1]
                                            void* edx_8 = &var_8[ebx_7]
                                            bool cond:10_1 = *edx_8 != 0xffffffff
                                            void* var_48 = edx_8
                                            
                                            if (not(cond:10_1))
                                                int32_t* esi_4 =
                                                    zx.d(*(var_90 + 2)) + ebx_7 * var_58 + var_1c
                                                float var_44_1 = *esi_4
                                                void* var_40
                                                void** edi_18 = &var_40
                                                void** esi_5 = &esi_4[1]
                                                *edi_18 = *esi_5
                                                edi_18[1] = esi_5[1]
                                                long double x87_r6_5 =
                                                    fconvert.t(var_44_1) - fconvert.t(*ecx_15)
                                                float var_44_2 = fconvert.s(x87_r6_5)
                                                long double x87_r5_2 =
                                                    fconvert.t(var_40) - fconvert.t(ecx_15[1])
                                                var_40 = fconvert.s(x87_r5_2)
                                                float var_3c
                                                long double x87_r4_2 =
                                                    fconvert.t(var_3c) - fconvert.t(ecx_15[2])
                                                var_3c = fconvert.s(x87_r4_2)
                                                long double x87_r3_4 = x87_r4_2 * x87_r4_2
                                                    + x87_r5_2 * x87_r5_2 + x87_r6_5 * x87_r6_5
                                                x87_r3_4 - x87_r7_4
                                                void* eax_39
                                                eax_39.w = (x87_r3_4 < x87_r7_4 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r3_4, x87_r7_4) ? 1 : 0)
                                                    << 0xa | (x87_r3_4 == x87_r7_4 ? 1 : 0) << 0xe
                                                    | 0x2800
                                                bool p_3 = unimplemented  {test ah, 0x5}
                                                x87_r7_4 = x87_r4_2
                                                
                                                if (not(p_3))
                                                    int32_t eax_41 = *var_20_2
                                                    int32_t j_1 = *(var_c + (eax_41 << 2))
                                                    
                                                    if (j_1 != 0xffffffff)
                                                        do
                                                            int32_t* eax_45 =
                                                                var_24 + divu.dp.d(0:j_1, 3) * 0xc
                                                            
                                                            if (*eax_45 == ebx_7)
                                                                goto label_413e1d
                                                            
                                                            if (eax_45[1] == ebx_7)
                                                                goto label_413e1d
                                                            
                                                            if (eax_45[2] == ebx_7)
                                                                goto label_413e1d
                                                            
                                                            j_1 = *(var_18 + (j_1 << 2))
                                                        while (j_1 != 0xffffffff)
                                                        
                                                        edx_8 = var_48
                                                    
                                                    *edx_8 = eax_41
                                                
                                            label_413e1d:
                                                i_4 = arg5
                                            
                                            var_30_1 += 1
                                        while (var_30_1 u< arg3)
                                        
                                        ebx_6 = var_38
                                        edx_6 = var_20_2
                                
                                var_14_1 += 1
                                edx_6 = &edx_6[1]
                                i_1 = i_2
                                i_2 -= 1
                                var_20_2 = edx_6
                            while (i_1 != 1)
                        
                        sub_41397e(ecx_15, arg1, arg2, arg4.b, i_4, arg6, arg7, arg8, var_8, arg10, 
                            var_58)
                else
                    float* ebx_5 = var_1c
                    int32_t* edi_12 = nullptr
                    
                    if (i_4 u> 0)
                        do
                            int32_t var_50
                            int32_t eax_21
                            eax_21, ecx_15 = sub_413ed5(zx.d(*(var_90 + 2)) + ebx_5, edi_12, 
                                var_28, var_2c, temp0, var_c, var_18, var_24, &var_54, &var_50)
                            
                            if (eax_21 == 0)
                                var_8[edi_12] = edi_12
                            else
                                ecx_15 = var_8
                                ecx_15[edi_12] = var_50
                            
                            ebx_5 += var_58
                            edi_12 += 1
                        while (edi_12 u< i_4)
                    
                    sub_41397e(ecx_15, arg1, arg2, arg4.b, i_4, arg6, arg7, arg8, var_8, arg10, 
                        var_58)

j__free(var_28)
j__free(var_2c)
j__free(var_c)
j__free(var_18)
j__free(var_38)
j__free(var_10)
j__free(var_8)

if (var_1c != 0)
    (*(*arg1 + 0x30))(arg1)

if (var_24 != 0)
    (*(*arg2 + 0x30))(arg2)
