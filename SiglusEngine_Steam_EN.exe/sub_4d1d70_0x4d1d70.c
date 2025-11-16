// 函数: sub_4d1d70
// 地址: 0x4d1d70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg1[7]
int32_t edi = arg1[8]

if (ecx u>= edi)
    int32_t eax_1 = arg1[4]
    
    if (*arg1 == eax_1)
        eax_1 = arg1[5]
    
    *arg1 = eax_1

int32_t ebx = arg1[4]
uint32_t temp1 = modu.dp.d(0:ecx, edi)
arg1[7] = temp1
double xmm0_2 = _mm_cvtepi32_pd(zx.q(temp1)) f+ *((temp1 u>> 0x1f << 3) + &data_624a10)

if (*arg1 != ebx)
    int32_t eax_9 = int.d(_mm_cvtepi32_pd(zx.q(arg1[5] - ebx)) * xmm0_2
        / (_mm_cvtepi32_pd(zx.q(edi)) f+ *((edi u>> 0x1f << 3) + &data_624a10))) + ebx
    arg1[1] = eax_9
    return eax_9

int32_t eax_5 = int.d(_mm_cvtepi32_pd(zx.q(ebx - arg1[5])) * xmm0_2
    / (_mm_cvtepi32_pd(zx.q(edi)) f+ *((edi u>> 0x1f << 3) + &data_624a10))) + arg1[5]
arg1[1] = eax_5
return eax_5
