// 函数: sub_406ad0
// 地址: 0x406ad0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
void* ecx = arg1[1]
int32_t edi = *arg1
int32_t edx = 0
int32_t eax_1 = *(ecx + 0x1fc)
int32_t ebx = *(ecx + 0x200)
int32_t var_24 = 0
int32_t var_30 = ebx
int32_t var_20 = eax_1

if (eax_1 s> edi)
    var_20 = edi
    eax_1 = edi

int32_t mxcsr
int16_t x87control

if (*(ecx + 0x1f4) != 0)
    if (eax_1 s> 0)
        float* esi_1 = arg3
        float* ecx_2 = arg2 - esi_1
        int32_t var_18_1 = eax_1
        float* var_14_1 = ecx_2
        var_24 = eax_1
        
        while (true)
            long double st0_1
            st0_1, x87control = sub_5f2080(mxcsr, x87control, 
                fconvert.d(fconvert.t(*(ecx_2 + esi_1)) + fconvert.t(0.5f)))
            *esi_1 = fconvert.s(st0_1)
            esi_1 = &esi_1[1]
            bool cond:1_1 = var_18_1 != 1
            var_18_1 -= 1
            
            if (not(cond:1_1))
                break
            
            ecx_2 = var_14_1
    
    edx = var_24
    int32_t eax_4 = ebx + edx
    
    if (eax_4 s<= edi)
        int32_t esi_2 = eax_4
        int32_t edi_1 = edx << 2
        int32_t var_14_2 = esi_2
        
        do
            long double x87_r7_4 = fconvert.t(0f)
            float var_2c_1 = fconvert.s(x87_r7_4)
            
            if (edx s< esi_2)
                float* ecx_3 = edi_1 + arg2
                int32_t i_3 = esi_2 - edx
                int32_t i
                
                do
                    long double x87_r6_1 = fconvert.t(*ecx_3)
                    ecx_3 = &ecx_3[1]
                    i = i_3
                    i_3 -= 1
                    x87_r7_4 = x87_r6_1
                while (i != 1)
                var_2c_1 = fconvert.s(x87_r7_4)
            
            int32_t var_28_1 = 0
            
            if (ebx s> 0)
                int32_t var_18_2 = 0
                int32_t ebx_1 = var_20 << 2
                bool cond:6_1
                
                do
                    int32_t esi_3 = *(var_18_2 - ebx_1 + edi_1 + arg4)
                    long double x87_r6_2 = fconvert.t(*(arg2 + (esi_3 << 2)))
                    float var_1c_1 = fconvert.s(x87_r6_2)
                    long double x87_r6_3 = x87_r6_2 * fconvert.t(var_1c_1)
                    long double temp3_1 = fconvert.t(0.25f)
                    x87_r6_3 - temp3_1
                    int32_t* eax_9
                    eax_9.w = (x87_r6_3 < temp3_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_3, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r6_3 == temp3_1 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((eax_9:1.b & 1) != 0)
                        long double temp4_1 = fconvert.t(*(ecx + 0x208))
                        x87_r7_4 - temp4_1
                        eax_9.w = (x87_r7_4 < temp4_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_4, temp4_1) ? 1 : 0) << 0xa
                            | (x87_r7_4 == temp4_1 ? 1 : 0) << 0xe
                        
                        if ((eax_9:1.b & 1) != 0)
                            if (var_28_1 s< var_30)
                                int32_t ecx_10 = var_28_1 << 2
                                int32_t i_4 = var_30 - var_28_1
                                int32_t i_1
                                
                                do
                                    int32_t eax_19 = ecx_10 - ebx_1
                                    ecx_10 += 4
                                    i_1 = i_4
                                    i_4 -= 1
                                    arg3[*(eax_19 + edi_1 + arg4)] = 0
                                while (i_1 != 1)
                            
                            break
                        
                        double var_48
                        var_48:4.d = var_1c_1
                        arg3[esi_3] = fconvert.s(sub_406d20())
                        x87_r7_4 = fconvert.t(var_2c_1) - fconvert.t(1.0)
                    else
                        long double st0_2
                        st0_2, x87control = sub_5f2080(mxcsr, x87control, 
                            fconvert.d(fconvert.t(*(arg2 + (esi_3 << 2))) + fconvert.t(0.5f)))
                        arg3[esi_3] = fconvert.s(st0_2)
                        long double x87_r7_9 = fconvert.t(*(arg2 + (esi_3 << 2)))
                        x87_r7_4 = fconvert.t(var_2c_1) - x87_r7_9 * x87_r7_9
                    
                    var_2c_1 = fconvert.s(x87_r7_4)
                    cond:6_1 = var_28_1 + 1 s< var_30
                    var_28_1 += 1
                    var_18_2 += 4
                while (cond:6_1)
                ebx = var_30
            
            esi_2 = var_14_2 + ebx
            edi_1 += ebx << 2
            edx = var_24 + ebx
            var_24 = edx
            var_14_2 = esi_2
        while (esi_2 s<= edi)

if (edx s>= edi)
    return 

int32_t i_5 = edi - edx
void* esi_5 = &arg3[edx]
int32_t i_2

do
    long double st0_4
    st0_4, x87control = sub_5f2080(mxcsr, x87control, 
        fconvert.d(fconvert.t(*(esi_5 + arg2 - arg3)) + fconvert.t(0.5f)))
    *esi_5 = fconvert.s(st0_4)
    esi_5 += 4
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
