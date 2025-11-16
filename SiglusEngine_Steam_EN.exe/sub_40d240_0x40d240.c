// 函数: sub_40d240
// 地址: 0x40d240
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = *arg2
int32_t ebx = arg4
int32_t var_24 = esi
int32_t ecx = esi[3]
int32_t i_2 = esi[2]
int32_t i_3 = i_2
int32_t temp0 = divs.dp.d(sx.q(esi[1] - *esi), i_2)
int32_t* result = sub_4038a0(arg1, ebx << 2)
int32_t* result_2 = result

if (ebx s> 0)
    int32_t* result_1 = result
    int32_t var_2c_1 = ebx
    bool cond:2_1
    
    do
        int32_t eax_7 = sub_4038a0(arg1, temp0 << 2)
        int32_t ecx_4 = temp0 << 2
        *result_1 = eax_7
        __builtin_memset(__builtin_memset(eax_7, 0, ecx_4 u>> 2 << 2), 0, ecx_4 & 3)
        cond:2_1 = var_2c_1 != 1
        result_1 = &result_1[1]
        var_2c_1 -= 1
    while (cond:2_1)
    result = result_2
    i_2 = i_3

int32_t var_30 = 0

if (temp0 s> 0)
    int32_t var_2c_2 = 0
    bool cond:3_1
    
    do
        int32_t edx_6 = *esi + var_2c_2
        int32_t var_1c_1 = edx_6
        
        if (ebx s> 0)
            int32_t var_28_1 = ebx
            int32_t* var_34_1 = arg3
            
            while (true)
                float var_38_1 = 0f
                float var_44_1 = 0f
                int16_t x87control
                
                if (i_2 s> 0)
                    int32_t esi_1 = edx_6 << 2
                    int32_t i
                    
                    do
                        float* ecx_13 = *var_34_1 + esi_1
                        long double x87_r7_3 = fabs(fconvert.t(*ecx_13))
                        long double x87_r6_1 = fconvert.t(var_38_1)
                        x87_r6_1 - x87_r7_3
                        int32_t* eax_12
                        eax_12.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
                            | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
                        
                        if ((eax_12:1.b & 1) != 0)
                            var_38_1 = fconvert.s(fabs(fconvert.t(*ecx_13)))
                        
                        void* var_58
                        var_58.q = fconvert.d(fconvert.t(*ecx_13) + fconvert.t(0.5f))
                        int32_t mxcsr
                        long double st0_1
                        st0_1, x87control = sub_5f2080(mxcsr, x87control, var_58)
                        esi_1 += 4
                        i = i_2
                        i_2 -= 1
                        var_44_1 = fconvert.s(fabs(st0_1) + fconvert.t(var_44_1))
                    while (i != 1)
                
                int32_t i_1 = 0
                
                if (ecx - 1 s> 0)
                    float* edi_2 = var_24 + 0x614
                    
                    do
                        long double x87_r7_13 = fconvert.t(var_38_1)
                        long double temp4_1 = fconvert.t(edi_2[-0x40])
                        x87_r7_13 - temp4_1
                        int32_t eax_13
                        eax_13.w = (x87_r7_13 < temp4_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_13, temp4_1) ? 1 : 0) << 0xa
                            | (x87_r7_13 == temp4_1 ? 1 : 0) << 0xe
                        
                        if ((eax_13:1.b & 0x41) != 0)
                            long double x87_r7_14 = fconvert.t(*edi_2)
                            long double temp6_1 = fconvert.t(0f)
                            x87_r7_14 - temp6_1
                            eax_13.w = (x87_r7_14 < temp6_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_14, temp6_1) ? 1 : 0) << 0xa
                                | (x87_r7_14 == temp6_1 ? 1 : 0) << 0xe
                            
                            if ((eax_13:1.b & 1) != 0)
                                break
                            
                            eax_13, x87control = __ftol(x87control, 
                                fconvert.t(fconvert.s(fconvert.t(var_44_1)
                                    * fconvert.t(fconvert.s(fconvert.t(100.0) / float.t(i_3))))))
                            long double x87_r7_16 = float.t(eax_13)
                            long double temp7_1 = fconvert.t(*edi_2)
                            x87_r7_16 - temp7_1
                            eax_13.w = (x87_r7_16 < temp7_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_16, temp7_1) ? 1 : 0) << 0xa
                                | (x87_r7_16 == temp7_1 ? 1 : 0) << 0xe
                            
                            if ((eax_13:1.b & 1) != 0)
                                break
                        
                        i_1 += 1
                        edi_2 = &edi_2[1]
                    while (i_1 s< ecx - 1)
                
                int32_t edx_8 = *(result - arg3 + var_34_1)
                var_34_1 = &var_34_1[1]
                bool cond:7_1 = var_28_1 != 1
                *(edx_8 + (var_30 << 2)) = i_1
                var_28_1 -= 1
                
                if (not(cond:7_1))
                    break
                
                i_2 = i_3
                edx_6 = var_1c_1
            
            esi = var_24
            ebx = arg4
            result = result_2
            i_2 = i_3
        
        var_2c_2 += i_2
        cond:3_1 = var_30 + 1 s< temp0
        var_30 += 1
    while (cond:3_1)

arg2[0xa] += 1
return result
