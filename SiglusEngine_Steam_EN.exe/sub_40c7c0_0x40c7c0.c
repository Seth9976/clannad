// 函数: sub_40c7c0
// 地址: 0x40c7c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_28 = 1
int32_t eax
int32_t ecx
int32_t edx
int32_t* result = sub_5f1ac0(eax, edx, ecx, 1, 0x2c)
int32_t i = 0
int32_t var_c = 0
int32_t var_8 = 0
void* ebp = *(*(arg2 + 4) + 0x1c)
*result = arg3
result[1] = *(arg3 + 0xc)
result[3] = *(ebp + 0xb20)
int32_t ecx_3 = *(ebp + 0xb20)
int32_t edx_3 = result[1]
int32_t* eax_5 = ecx_3 + *(arg3 + 0x10) * 0x2c
result[4] = eax_5
int32_t ebx = *eax_5
int32_t var_10 = ebx
result[5] = sub_5f1ac0(eax_5, edx_3, ecx_3, edx_3, 4)

if (result[1] s> 0)
    arg2 = arg3 + 0x14
    
    do
        uint32_t edx_4 = *arg2
        int32_t eax_10
        int32_t ecx_5
        eax_10, ecx_5 = sub_40c650(edx_4)
        
        if (eax_10 != 0)
            if (eax_10 s> var_8)
                var_8 = eax_10
            
            *(result[5] + (i << 2)) = sub_5f1ac0(eax_10, edx_4, ecx_5, eax_10, 4)
            int32_t ecx_7 = 0
            
            if (eax_10 s> 0)
                void* edx_6 = arg3 + (var_c << 2) + 0x114
                
                do
                    if ((*arg2 & 1 << ecx_7.b) != 0)
                        *(*(result[5] + (i << 2)) + (ecx_7 << 2)) = *(ebp + 0xb20) + *edx_6 * 0x2c
                        edx_6 += 4
                        var_c += 1
                    
                    ecx_7 += 1
                while (ecx_7 s< eax_10)
        
        i += 1
        arg2 += 4
    while (i s< result[1])
    
    ebx = var_10

var_28.q = fconvert.d(arg1 + fconvert.t(0.5))
int32_t mxcsr
int16_t x87control
int16_t x87control_2
long double st0
st0, x87control_2 =
    sub_5f2080(mxcsr, sub_5f2c90(mxcsr, x87control, float.t(var_10), float.t(result[1])), var_28)
int32_t eax_19 = __ftol(x87control_2, st0)
result[6] = eax_19
result[2] = var_8
result[7] = _malloc(eax_19 << 2)
int32_t eax_21 = result[6]
void* ebp_1 = nullptr

if (eax_21 s> 0)
    do
        result[1]
        arg3 = ebp_1
        int32_t edi = divs.dp.d(sx.q(eax_21), result[1])
        *(result[7] + (ebp_1 << 2)) = _malloc(ebx << 2)
        int32_t ecx_12 = 0
        
        if (ebx s> 0)
            do
                int32_t temp0_2 = divs.dp.d(sx.q(arg3), edi)
                arg3 -= temp0_2 * edi
                ecx_12 += 1
                edi = divs.dp.d(sx.q(edi), result[1])
                *(*(result[7] + (ebp_1 << 2)) + (ecx_12 << 2) - 4) = temp0_2
            while (ecx_12 s< var_10)
            
            ebx = var_10
        
        eax_21 = result[6]
        ebp_1 += 1
    while (ebp_1 s< eax_21)

return result
