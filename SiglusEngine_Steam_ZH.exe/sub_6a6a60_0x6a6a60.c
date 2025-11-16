// 函数: sub_6a6a60
// 地址: 0x6a6a60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_4 = arg1
int32_t result = arg1[0x19]

if (result == 0)
    arg1[0x19] = 1
    return result

if (result == 1)
    result = arg1[0xb]
    arg1[0xa] = result
    arg1[0x19] = 2

if (arg1[0x19] == 2)
    int32_t edi_1 = arg1[0xc]
    int32_t esi_1 = arg1[0xa]
    double xmm1_2 = _mm_cvtepi32_pd(zx.q(edi_1))
    double xmm0_2 = _mm_cvtepi32_pd(zx.q(esi_1))
    int32_t edx_1
    
    if (edi_1 s> 0)
        result = arg1[1]
        
        if (result == 0)
            edx_1 = int.d(xmm0_2 * 65536.0 / xmm1_2)
        else if (result == 1)
            edx_1 = int.d(xmm0_2 * xmm0_2 * 65536.0 / xmm1_2 / xmm1_2)
        else if (result != 2)
            edx_1 = 0
        else
            double xmm0_9 = xmm0_2 - xmm1_2
            result = int.d(xmm0_9 * xmm0_9 * 65536.0 / xmm1_2 / xmm1_2)
            edx_1 = 0x10000 - result
    else
        edx_1 = 0x10000
    
    arg1[0x1a] = edx_1
    
    if (esi_1 - edi_1 s>= 0)
        return sub_6a6910(arg1)

return result
