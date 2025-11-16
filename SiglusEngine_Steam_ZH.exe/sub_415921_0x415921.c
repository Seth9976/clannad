// 函数: sub_415921
// 地址: 0x415921
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_1 = arg10 * 0xc
int32_t edi
int32_t var_348 = edi
int32_t ecx
ecx.b = esi_1 != arg6
int32_t var_30 = esi_1
int32_t var_2c = ecx

if (arg2 == 0)
    arg2 = arg1

float var_18
float var_14
float var_10
int16_t x87control

if (arg10 != 2)
label_415b13:
    int32_t var_c_2 = 0
    
    if (arg5 u> 0)
        while (true)
            float* esi_6 = arg11
            void var_33c
            __builtin_memset(__builtin_memset(&var_33c, 0, esi_1 u>> 2 << 2), 0, esi_1 & 3)
            
            while (true)
                long double x87_r7_40 = fconvert.t(*esi_6)
                long double temp1_1 = fconvert.t(0f)
                x87_r7_40 - temp1_1
                int32_t eax_17
                eax_17.w = (x87_r7_40 < temp1_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_40, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_40 == temp1_1 ? 1 : 0) << 0xe
                
                if ((eax_17:1.b & 1) != 0)
                    break
                
                int32_t eax_18
                eax_18, x87control = __ftol(x87control, fconvert.t(*esi_6))
                uint32_t ebx_3 = eax_18 u>> 1
                eax_17 = ebx_3 * 2
                long double x87_r7_26 = float.t(eax_17)
                
                if (eax_17 s< 0)
                    x87_r7_26 = x87_r7_26 + fconvert.t(4.2949673e+09f)
                
                char* esi_7 = nullptr
                float var_8_3 = fconvert.s(fconvert.t(*esi_6) - x87_r7_26)
                
                if (arg10 u> 0)
                    void var_334
                    float* edi_6 = &var_334
                    
                    do
                        char* eax_19
                        eax_19.b = *(esi_7 + arg9)
                        
                        if (eax_19.b == 0)
                            j_sub_4018cf(&var_18, arg7[esi_7], (ebx_3 << 6) + arg1)
                        else
                            int32_t eax_22
                            
                            if (eax_19.b == 3)
                                eax_22 = (ebx_3 << 6) + arg2
                            else
                                if (eax_19.b u<= 5)
                                    return 
                                
                                if (eax_19.b u> 7)
                                    return 
                                
                                eax_22 = (ebx_3 << 6) + arg1
                            
                            j_sub_4019e2(&var_18, arg7[esi_7], eax_22)
                        
                        esi_7 = &esi_7[1]
                        var_18 = fconvert.s(fconvert.t(var_18) * fconvert.t(var_8_3))
                        var_14 = fconvert.s(fconvert.t(var_14) * fconvert.t(var_8_3))
                        var_10 = fconvert.s(fconvert.t(var_10) * fconvert.t(var_8_3))
                        edi_6[-2] = fconvert.s(fconvert.t(var_18) + fconvert.t(edi_6[-2]))
                        edi_6[-1] = fconvert.s(fconvert.t(var_14) + fconvert.t(edi_6[-1]))
                        *edi_6 = fconvert.s(fconvert.t(var_10) + fconvert.t(*edi_6))
                        edi_6 = &edi_6[3]
                    while (esi_7 u< arg10)
                
                esi_6 = arg11 + 4
                arg11 = esi_6
            
            if (var_2c != 0)
                void* edi_7 = arg4
                arg4 += arg6
                int32_t esi_10
                int32_t edi_8
                edi_8, esi_10 = __builtin_memcpy(edi_7, arg3, arg6 u>> 2 << 2)
                arg3 += arg6
                __builtin_memcpy(edi_8, esi_10, arg6 & 3)
            
            if (arg10 u> 0)
                int32_t* eax_31 = arg8
                void* ebx_4 = &var_33c
                int32_t* edx_4 = arg7 - eax_31
                int32_t i_2 = arg10
                int32_t i
                
                do
                    int32_t* edi_9 = *eax_31
                    *edi_9 = *ebx_4
                    void* edi_10 = &edi_9[1]
                    void* esi_12 = ebx_4 + 4
                    *edi_10 = *esi_12
                    *(edi_10 + 4) = *(esi_12 + 4)
                    *eax_31 += arg6
                    *(edx_4 + eax_31) += arg6
                    ebx_4 += 0xc
                    eax_31 = &eax_31[1]
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            arg11 += 4
            var_c_2 += 1
            
            if (var_c_2 u>= arg5)
                break
            
            esi_1 = var_30
else
    ecx.b = *arg9
    float* var_c_1
    void* var_8_1
    void* ecx_1
    float* edx_1
    void* ebx_1
    
    if (ecx.b != 0 || arg9[1] != 3)
        if (arg9[1] != 0 || ecx.b != 3)
            goto label_415b13
        
        void** eax_5 = arg7
        ecx_1 = eax_5[1]
        var_8_1 = *eax_5
        float** eax_7 = arg8
        ebx_1 = eax_7[1]
        float* eax_8 = *eax_7
        var_c_1 = eax_8
        edx_1 = eax_8
        goto label_4159b0
    
    ecx_1 = *arg7
    var_8_1 = arg7[1]
    edx_1 = arg8[1]
    ebx_1 = *arg8
    var_c_1 = edx_1
label_4159b0:
    void* var_1c_1 = ecx_1
    
    if (ecx_1 == 0)
        goto label_415b13
    
    if (arg5 u> 0)
        arg7 = arg5
        int32_t* i_1
        
        do
            if (var_2c != 0)
                void* edi_1 = arg4
                arg4 += arg6
                int32_t esi_3
                int32_t edi_2
                edi_2, esi_3 = __builtin_memcpy(edi_1, arg3, arg6 u>> 2 << 2)
                arg3 += arg6
                __builtin_memcpy(edi_2, esi_3, arg6 & 3)
            
            float* esi_4 = arg11
            *ebx_1 = fconvert.s(float.t(0))
            *(ebx_1 + 4) = fconvert.s(float.t(0))
            *(ebx_1 + 8) = fconvert.s(float.t(0))
            *edx_1 = fconvert.s(float.t(0))
            edx_1[1] = fconvert.s(float.t(0))
            edx_1[2] = fconvert.s(float.t(0))
            long double x87_r7_7 = fconvert.t(*esi_4)
            long double temp2_1 = fconvert.t(0f)
            x87_r7_7 - temp2_1
            int32_t* eax_9
            eax_9.w = (x87_r7_7 < temp2_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_7, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == temp2_1 ? 1 : 0) << 0xe
            
            if ((eax_9:1.b & 1) == 0)
                float* eax_16
                
                do
                    int32_t eax_10
                    eax_10, x87control = __ftol(x87control, fconvert.t(*esi_4))
                    uint32_t eax_11 = eax_10 u>> 1
                    uint32_t ecx_6 = eax_11 * 2
                    long double x87_r7_9 = float.t(ecx_6)
                    
                    if (ecx_6 s< 0)
                        x87_r7_9 = x87_r7_9 + fconvert.t(4.2949673e+09f)
                    
                    uint32_t eax_12 = eax_11 << 6
                    arg11 = fconvert.s(fconvert.t(*esi_4) - x87_r7_9)
                    j_sub_4018cf(&var_18, var_1c_1, arg1 + eax_12)
                    float var_28
                    j_sub_4019e2(&var_28, var_8_1, eax_12 + arg2)
                    long double x87_r7_11 = fconvert.t(arg11)
                    esi_4 = &esi_4[1]
                    var_18 = fconvert.s(fconvert.t(var_18) * x87_r7_11)
                    var_14 = fconvert.s(fconvert.t(var_14) * x87_r7_11)
                    var_10 = fconvert.s(fconvert.t(var_10) * x87_r7_11)
                    var_28 = fconvert.s(fconvert.t(var_28) * x87_r7_11)
                    float var_24 = fconvert.s(fconvert.t(var_24) * x87_r7_11)
                    float var_20 = fconvert.s(fconvert.t(var_20) * x87_r7_11)
                    *ebx_1 = fconvert.s(fconvert.t(var_18) + fconvert.t(*ebx_1))
                    *(ebx_1 + 4) = fconvert.s(fconvert.t(var_14) + fconvert.t(*(ebx_1 + 4)))
                    *(ebx_1 + 8) = fconvert.s(fconvert.t(var_10) + fconvert.t(*(ebx_1 + 8)))
                    *var_c_1 = fconvert.s(fconvert.t(var_28) + fconvert.t(*var_c_1))
                    var_c_1[1] = fconvert.s(fconvert.t(var_24) + fconvert.t(var_c_1[1]))
                    var_c_1[2] = fconvert.s(fconvert.t(var_20) + fconvert.t(var_c_1[2]))
                    long double x87_r7_24 = fconvert.t(*esi_4)
                    long double temp4_1 = fconvert.t(0f)
                    x87_r7_24 - temp4_1
                    eax_16.w = (x87_r7_24 < temp4_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_24, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_24 == temp4_1 ? 1 : 0) << 0xe
                while ((eax_16:1.b & 1) == 0)
                edx_1 = var_c_1
            
            var_1c_1 += arg6
            var_8_1 += arg6
            edx_1 += arg6
            ebx_1 += arg6
            i_1 = arg7
            arg7 -= 1
            var_c_1 = edx_1
            arg11 = &esi_4[1]
        while (i_1 != 1)
