// 函数: sub_61b5f0
// 地址: 0x61b5f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = data_bac450
float xmm1_1 = _mm_cvtepi32_ps(zx.o(arg3))
int32_t xmm0

switch (*(esi + 8))
    case 0
        xmm0 = (zx.o(0)).d
    case 1
        xmm0 = 0x3f000000
    case 2
        xmm0 = 0x3f400000
    case 3
        xmm0 = 0x3f600000
    case 4
        xmm0 = 0x3f700000
    case 5
        xmm0 = 0x3f780000
    case 6
        xmm0 = 0x3f7c0000
    case 7
        xmm0 = 0x3f7e0000
    default
        xmm0 = 0x3f800000

*(arg2 + 0x100) = xmm0
*(arg2 + 0x104) = xmm0
*(arg2 + 0x108) = xmm0
*(arg2 + 0x10c) = xmm1_1 * 1.52587891e-05f

if (*(esi + 0xc) != 0)
    int32_t eax_2 = *(arg1 + 0x1934)
    *(arg2 + 0xfc) = eax_2
    return eax_2

int32_t eax_1 = *(arg1 + 0x1930)
*(arg2 + 0xfc) = eax_1
return eax_1
