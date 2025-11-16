// 函数: sub_407560
// 地址: 0x407560
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t i = 0
int32_t var_14 = 0
int32_t eax = esi[3]

if (eax != 1 && eax != 2)
    return 0

float var_c = fconvert.s(sub_407320(esi[4]))
int32_t eax_3
int32_t ecx_1
long double st0_1
st0_1, eax_3, ecx_1 = sub_407320(esi[5])
int32_t edx_1 = *esi i* arg2
float var_10 = fconvert.s(st0_1)
float result = sub_5f1ac0(eax_3, edx_1, ecx_1, edx_1, 4)
int32_t eax_5 = esi[3]
arg2 = result

if (eax_5 == 1)
    long double x87_r0
    int32_t eax_17 = sub_4074f0(x87_r0, esi)
    
    if (esi[1] s> 0)
        arg1 = arg3
        
        do
            if (arg3 == 0 || *(esi[2] + (i << 2)) != 0)
                int32_t ecx_6 = *esi
                int32_t edi = 0
                float var_8_1 = 0f
                int32_t ebx_6 = 1
                
                if (ecx_6 s> 0)
                    do
                        long double x87_r0_5 = fabs(float.t(
                            *(esi[8] + (mods.dp.d(sx.q(divs.dp.d(sx.q(i), ebx_6)), eax_17) << 2))))
                            * fconvert.t(var_10) + fconvert.t(var_8_1) + fconvert.t(var_c)
                        
                        if (esi[7] != 0)
                            var_8_1 = fconvert.s(x87_r0_5)
                        
                        if (arg3 == 0)
                            *(arg2 i+ ((ecx_6 * var_14 + edi) << 2)) = fconvert.s(x87_r0_5)
                        else
                            *(arg2 i+ ((ecx_6 * *arg1 + edi) << 2)) = fconvert.s(x87_r0_5)
                        
                        ebx_6 *= eax_17
                        ecx_6 = *esi
                        edi += 1
                    while (edi s< ecx_6)
                
                result = arg2
                var_14 += 1
                arg1 = &arg1[1]
            
            i += 1
        while (i s< esi[1])
else if (eax_5 == 2)
    int32_t i_1 = 0
    
    if (esi[1] s> 0)
        int32_t* ebx_1 = arg3
        arg1 = ebx_1
        
        do
            if (ebx_1 == 0 || *(esi[2] + (i_1 << 2)) != 0)
                int32_t eax_10 = *esi
                int32_t ecx_2 = 0
                arg2 = 0f
                
                if (eax_10 s> 0)
                    do
                        long double x87_r7_6 =
                            fabs(float.t(*(esi[8] + ((eax_10 * i_1 + ecx_2) << 2))))
                            * fconvert.t(var_10) + fconvert.t(arg2) + fconvert.t(var_c)
                        
                        if (esi[7] != 0)
                            arg2 = fconvert.s(x87_r7_6)
                        
                        ebx_1 = arg3
                        
                        if (ebx_1 == 0)
                            *(result i+ ((eax_10 * var_14 + ecx_2) << 2)) = fconvert.s(x87_r7_6)
                        else
                            *(result i+ ((*arg1 * eax_10 + ecx_2) << 2)) = fconvert.s(x87_r7_6)
                        
                        eax_10 = *esi
                        ecx_2 += 1
                    while (ecx_2 s< eax_10)
                
                var_14 += 1
                arg1 = &arg1[1]
            
            i_1 += 1
        while (i_1 s< esi[1])

return result
