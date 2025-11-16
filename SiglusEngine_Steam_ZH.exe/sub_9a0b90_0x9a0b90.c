// 函数: sub_9a0b90
// 地址: 0x9a0b90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = 0
int32_t eax = int.d((fconvert.d(arg4 + arg8) - 30.0) * 0.10000000149011612)

if (eax s> 0)
    edx = eax

int32_t eax_1 = 7

if (edx s< 7)
    eax_1 = edx

float eax_2 = *(arg2 + (eax_1 << 2))
int32_t esi_1 = arg7
float xmm2 = *eax_2
int32_t ebx = int.d(fconvert.t(*(eax_2 i+ 4)))
int32_t i = int.d(xmm2)
int32_t result = int.d((xmm2 - 16f) * _mm_cvtepi32_ps(zx.o(esi_1)) + _mm_cvtepi32_ps(zx.o(arg5))
    - _mm_cvtepi32_ps(zx.o(esi_1 s>> 1)))

for (; i s< ebx; i += 1)
    if (result s> 0)
        esi_1 = arg7
        float xmm0_12 = *(eax_2 i+ (i << 2) + 8) + arg4
        
        if (not(xmm0_12 f<= *(arg3 + (result << 2))))
            *(arg3 + (result << 2)) = xmm0_12
    
    result += esi_1
    
    if (result s>= arg6)
        break

return result
