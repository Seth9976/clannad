// 函数: sub_406d40
// 地址: 0x406d40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *arg3
int32_t var_4c = esi
int32_t var_2c = 0

if (*(arg4 + 0x484) s<= 0)
    return 

void* eax_2 = arg4 + 0x888
int32_t** var_64_1 = arg7
void* var_68_1 = eax_2
bool cond:0_1

do
    int32_t ecx_3 = *(eax_2 - 0x400) << 2
    
    if (*(ecx_3 + arg9) != 0 || *(arg9 + (*eax_2 << 2)) != 0)
        int32_t eax_4 = *eax_2 << 2
        int32_t ebx_1 = *(ecx_3 + arg5)
        int32_t edi_2 = *(eax_4 + arg5)
        int32_t var_3c_1 = edi_2
        int32_t ebx_2 = ebx_1 + (var_4c << 2)
        int32_t edx_6 = edi_2 + (var_4c << 2)
        int32_t ebx_3 = *(ecx_3 + arg8)
        int32_t eax_5 = *(eax_4 + arg8)
        float var_48_1 =
            fconvert.s(fconvert.t(*((*(arg2 + (arg1 << 2) + 0xfc) << 3) + &data_632ab0)))
        float var_60_1 =
            fconvert.s(fconvert.t(*((*(arg2 + (arg1 << 2) + 0x138) << 3) + &data_632ab0)))
        int32_t* eax_9 = arg3[1]
        
        if (eax_9[0x7e] != 0)
            esi = eax_9[0x80]
        
        int32_t var_70_1 = esi
        int32_t eax_13 = *(arg2 + ((*eax_9 * 0xf + arg1) << 2) + 0x84)
        *(ecx_3 + arg9) = 1
        *(arg9 + (*var_68_1 << 2)) = 1
        
        if (var_4c s> 0x3e8)
            var_60_1 =
                fconvert.s(fconvert.t(*((*(arg2 + (arg1 << 2) + 0x138) << 3) + &data_632af8)))
        
        int32_t ebx_5 = 0
        int32_t var_30_1 = 0
        esi = *arg3
        
        if (esi s> 0)
            int32_t ecx_6 = var_70_1
            void* edx_10 = nullptr
            void* var_50_1 = nullptr
            
            do
                float var_6c_1 = 0f
                float* var_88
                int32_t mxcsr
                int16_t x87control
                
                if (ecx_6 s> 0)
                    int32_t var_58_1 = ebx_5
                    void* var_5c_1 = edx_10
                    float* esi_2 = edx_10 + edi_2
                    void* eax_20 = ebx_3 - edi_2
                    float* edx_12 = ebx_1 - edi_2
                    int32_t* ebx_7 = ebx_2 - edi_2
                    int32_t* ecx_9 = edx_6 - edi_2
                    float* var_18_1 = edx_12
                    int32_t* var_44_1 = ecx_9
                    int32_t var_38_1 = var_70_1
                    
                    while (true)
                        if (var_58_1 s>= arg10)
                            *(ebx_7 + esi_2) = 0
                            *(ecx_9 + esi_2) = 0
                        else
                            int32_t eax_22
                            
                            if (var_58_1 s< eax_13)
                            label_406f1a:
                                long double x87_r7_8 = fconvert.t(*(edx_12 + esi_2))
                                long double x87_r7_9 = fabs(x87_r7_8)
                                long double x87_r6_3 = fconvert.t(var_48_1)
                                x87_r6_3 - x87_r7_9
                                eax_22.w = (x87_r6_3 < x87_r7_9 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_3, x87_r7_9) ? 1 : 0) << 0xa
                                    | (x87_r6_3 == x87_r7_9 ? 1 : 0) << 0xe
                                
                                if ((eax_22:1.b & 0x41) != 0)
                                    sub_407140(fconvert.s(x87_r7_8), *esi_2, ebx_7 + esi_2, 
                                        ecx_9 + esi_2)
                                else
                                    long double x87_r7_11 = fabs(fconvert.t(*esi_2))
                                    long double x87_r6_4 = fconvert.t(var_48_1)
                                    x87_r6_4 - x87_r7_11
                                    eax_22.w = (x87_r6_4 < x87_r7_11 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_4, x87_r7_11) ? 1 : 0) << 0xa
                                        | (x87_r6_4 == x87_r7_11 ? 1 : 0) << 0xe
                                    
                                    if ((eax_22:1.b & 0x41) == 0)
                                        goto label_406f53
                                    
                                    sub_407140(fconvert.s(x87_r7_8), *esi_2, ebx_7 + esi_2, 
                                        ecx_9 + esi_2)
                            else
                                long double x87_r7_5 = fabs(fconvert.t(*(edx_12 + esi_2)))
                                long double x87_r6_1 = fconvert.t(var_60_1)
                                x87_r6_1 - x87_r7_5
                                eax_22.w = (x87_r6_1 < x87_r7_5 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_1, x87_r7_5) ? 1 : 0) << 0xa
                                    | (x87_r6_1 == x87_r7_5 ? 1 : 0) << 0xe
                                
                                if ((eax_22:1.b & 0x41) != 0)
                                    goto label_406f1a
                                
                                long double x87_r7_7 = fabs(fconvert.t(*esi_2))
                                long double x87_r6_2 = fconvert.t(var_60_1)
                                x87_r6_2 - x87_r7_7
                                eax_22.w = (x87_r6_2 < x87_r7_7 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_2, x87_r7_7) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == x87_r7_7 ? 1 : 0) << 0xe
                                
                                if ((eax_22:1.b & 0x41) != 0)
                                    goto label_406f1a
                                
                            label_406f53:
                                void* edi_3 = ebx_7 + esi_2
                                void* eax_23 = eax_20 + esi_2
                                sub_407210(*(*(var_64_1 + arg6 - arg7) + var_5c_1), *eax_23, 
                                    *(eax_23 + eax_5 - ebx_3), edi_3, var_44_1 + esi_2)
                                var_88.q = fconvert.d(fconvert.t(*edi_3) + fconvert.t(0.5f))
                                long double st0_1
                                st0_1, x87control = sub_5f2080(mxcsr, x87control, var_88)
                                long double temp2_1 = fconvert.t(0.0)
                                st0_1 - temp2_1
                                
                                if ((((st0_1 < temp2_1 ? 1 : 0) << 8
                                        | (is_unordered.t(st0_1, temp2_1) ? 1 : 0) << 0xa
                                        | (st0_1 == temp2_1 ? 1 : 0) << 0xe):1.b & 0x40) != 0)
                                    long double x87_r7_15 = fconvert.t(*edi_3)
                                    var_6c_1 =
                                        fconvert.s(x87_r7_15 * x87_r7_15 + fconvert.t(var_6c_1))
                                
                                edi_2 = var_3c_1
                        
                        esi_2 = &esi_2[1]
                        var_5c_1 += 4
                        bool cond:3_1 = var_38_1 != 1
                        var_58_1 += 1
                        var_38_1 -= 1
                        
                        if (not(cond:3_1))
                            break
                        
                        ecx_9 = var_44_1
                        edx_12 = var_18_1
                    
                    ecx_6 = var_70_1
                
                if (*(arg3[1] + 0x1f8) != 0)
                    int32_t var_38_2 = 0
                    
                    if (ecx_6 s> 0)
                        void* var_58_2 = var_50_1
                        bool cond:4_1
                        
                        do
                            long double x87_r7_16 = fconvert.t(var_6c_1)
                            long double temp0_1 = fconvert.t(*(arg3[1] + 0x208))
                            x87_r7_16 - temp0_1
                            void* eax_34
                            eax_34.w = (x87_r7_16 < temp0_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_16, temp0_1) ? 1 : 0) << 0xa
                                | (x87_r7_16 == temp0_1 ? 1 : 0) << 0xe
                            
                            if ((eax_34:1.b & 1) != 0)
                                break
                            
                            int32_t ebx_8 = *(var_58_2 + *var_64_1)
                            
                            if (ebx_8 s< arg10 && ebx_8 s>= eax_13)
                                var_88.q = fconvert.d(fconvert.t(*(ebx_2 + (ebx_8 << 2)))
                                    + fconvert.t(0.5f))
                                long double st0_2
                                st0_2, x87control = sub_5f2080(mxcsr, x87control, var_88)
                                long double temp3_1 = fconvert.t(0.0)
                                st0_2 - temp3_1
                                
                                if ((((st0_2 < temp3_1 ? 1 : 0) << 8
                                        | (is_unordered.t(st0_2, temp3_1) ? 1 : 0) << 0xa
                                        | (st0_2 == temp3_1 ? 1 : 0) << 0xe):1.b & 0x40) != 0)
                                    *(ebx_2 + (ebx_8 << 2)) =
                                        fconvert.s(sub_406d20(*(ebx_2 + (ebx_8 << 2))))
                                    var_6c_1 = fconvert.s(fconvert.t(var_6c_1) - fconvert.t(1f))
                                
                                ecx_6 = var_70_1
                            
                            cond:4_1 = var_38_2 + 1 s< ecx_6
                            var_38_2 += 1
                            var_58_2 += 4
                        while (cond:4_1)
                
                ebx_5 = var_30_1 + ecx_6
                edx_10 = var_50_1 + (ecx_6 << 2)
                var_30_1 = ebx_5
                var_50_1 = edx_10
                esi = *arg3
            while (ebx_5 s< esi)
        
        eax_2 = var_68_1
    
    eax_2 += 4
    cond:0_1 = var_2c + 1 s< *(arg4 + 0x484)
    var_2c += 1
    var_68_1 = eax_2
    var_64_1 = &var_64_1[1]
while (cond:0_1)
