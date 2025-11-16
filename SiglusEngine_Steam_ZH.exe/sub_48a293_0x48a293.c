// 函数: sub_48a293
// 地址: 0x48a293
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_1c = edi
float (* result)[0x2] = arg1

if (arg3 u>= 8)
    int32_t i_2 = arg3 & 0xfffffff8
    int32_t i_1 = i_2
    int64_t* eax_1 = arg2
    float (* ecx_1)[0x2] = arg1
    int32_t i
    
    do
        int80_t st0
        st0.q = *eax_1
        int80_t st1
        st1.q = eax_1[1]
        eax_1 = &eax_1[2]
        float xmm0[0x2]
        float xmm2[0x2]
        float xmm3[0x2]
        int64_t x87_r0
        int64_t x87_r1
        xmm0, xmm2, xmm3 = sub_48a169(x87_r0, x87_r1, xmm0, xmm2, xmm3)
        *ecx_1 = xmm0
        *(ecx_1 + 8) = ecx_1[1] | xmm0 << 0x40
        ecx_1[2] = xmm3
        *(ecx_1 + 0x18) = ecx_1[3] | xmm3 << 0x40
        ecx_1 = &ecx_1[4]
        i = i_1
        i_1 -= 8
    while (i != 8)
    arg3 -= i_2
    arg2 += i_2 << 1
    arg1 = &(*arg1)[i_2]

int32_t ebx = 0

if (arg3 u> 0)
    do
        uint32_t ecx_2 = zx.d(*(arg2 + (ebx << 1)))
        int32_t edx_2 = ecx_2 & 0x7c00
        int32_t eax_7 = neg.d(edx_2)
        int32_t eax_10 = (sbb.d(eax_7, eax_7, edx_2 != 0) & 0x400) | (ecx_2 & 0x3ff)
        
        if (edx_2 u<= 0x400)
            edx_2 = 0x400
        
        long double x87_r7_1 = float.t(eax_10)
        
        if (eax_10 s< 0)
            x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
        
        (*arg1)[ebx] = fconvert.s(x87_r7_1
            * fconvert.t((edx_2 + 0x19800) << 0xd | (ecx_2 & 0xffff8000) << 0x10))
        ebx += 1
    while (ebx u< arg3)

return result
