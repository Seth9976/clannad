// 函数: sub_731e10
// 地址: 0x731e10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = *(arg1 + 0x1bc)
void* eax_1 = (**(arg1 + 4))(arg1, 1, 0xc00)
*(esi + 0x18) = eax_1
int32_t i_1 = 0

if (data_b94f20 s< 2)
    int32_t esi_1 = 0
    int32_t* eax_3 = eax_1 + 0x800
    
    for (int32_t i = 0x8000; i s<= 0x1d91d1; )
        *eax_3 = i
        eax_3 = &eax_3[1]
        eax_3[-0x201] = esi_1
        i += 0x1d2f
        eax_3[-0x101] = i_1
        esi_1 += 0x4c8b
        i_1 += 0x9646
    
    return eax_3

int32_t xmm2[0x4] = data_b0da70
void* ecx = eax_1 + 0x800
int32_t xmm3[0x4] = data_b0dac0
int32_t xmm4[0x4] = data_b0dae0
int32_t xmm5[0x4] = data_b0dab0
int32_t xmm6[0x4] = data_b0dad0
int32_t eax_2

do
    eax_2 = i_1 + 4
    ecx += 0x20
    int32_t xmm1_2[0x4] = _mm_add_epi32(_mm_shuffle_epi32(zx.o(i_1), 0), xmm2)
    i_1 += 8
    *(ecx - 0x820) = _mm_mullo_epi32(xmm1_2, xmm3)
    *(ecx - 0x420) = _mm_mullo_epi32(xmm1_2, xmm4)
    *(ecx - 0x20) = _mm_add_epi32(_mm_mullo_epi32(xmm1_2, xmm5), xmm6)
    int32_t xmm1_6[0x4] = _mm_add_epi32(_mm_shuffle_epi32(zx.o(eax_2), 0), xmm2)
    *(ecx - 0x810) = _mm_mullo_epi32(xmm1_6, xmm3)
    int32_t xmm1_8[0x4] = _mm_add_epi32(_mm_mullo_epi32(xmm1_6, xmm5), xmm6)
    *(ecx - 0x410) = _mm_mullo_epi32(xmm1_6, xmm4)
    *(ecx - 0x10) = xmm1_8
while (i_1 s<= 0xff)

return eax_2
