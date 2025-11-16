// 函数: sub_6ed240
// 地址: 0x6ed240
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t entry_ebx
int32_t var_10 = entry_ebx
void* edi = arg2 + 2
int32_t i_1 = 8
void* esi = arg1 + 2
int16_t* result = arg4 + 4
char* edx_2 = arg2 - arg1 - 2
char* var_c = edx_2
int32_t i

do
    char ebx = *(edx_2 + esi)
    int32_t edx_4 = zx.d(ebx) + sx.d(result[-2])
    int32_t ecx_1
    ecx_1.b = result[-2].b
    ecx_1:1.b = edx_4 s> 0xff
    ecx_1.b += ebx
    ecx_1:1.b = neg.b(ecx_1:1.b)
    ecx_1:1.b |= ecx_1.b
    ecx_1.b = edx_4 s< 0
    ecx_1.b -= 1
    ecx_1:1.b &= ecx_1.b
    *(esi - 2) = ecx_1:1.b
    int32_t edx_6 = sx.d(result[-1]) + zx.d(*(edi - 1))
    uint32_t ecx_2
    ecx_2.b = result[-1].b
    ecx_2:1.b = edx_6 s> 0xff
    ecx_2.b += *(edi - 1)
    ecx_2:1.b = neg.b(ecx_2:1.b)
    ecx_2:1.b |= ecx_2.b
    ecx_2.b = edx_6 s< 0
    ecx_2.b -= 1
    ecx_2:1.b &= ecx_2.b
    *(esi - 1) = ecx_2:1.b
    int32_t edx_8 = zx.d(*edi) + sx.d(*result)
    int32_t ecx_3
    ecx_3.b = *result
    ecx_3:1.b = edx_8 s> 0xff
    ecx_3.b += *edi
    ecx_3:1.b = neg.b(ecx_3:1.b)
    ecx_3:1.b |= ecx_3.b
    ecx_3.b = edx_8 s< 0
    ecx_3.b -= 1
    ecx_3:1.b &= ecx_3.b
    *esi = ecx_3:1.b
    int32_t edx_10 = sx.d(result[1]) + zx.d(*(edi + 1))
    uint32_t ecx_4
    ecx_4.b = result[1].b
    ecx_4:1.b = edx_10 s> 0xff
    ecx_4.b += *(edi + 1)
    ecx_4:1.b = neg.b(ecx_4:1.b)
    ecx_4:1.b |= ecx_4.b
    ecx_4.b = edx_10 s< 0
    ecx_4.b -= 1
    ecx_4:1.b &= ecx_4.b
    *(esi + 1) = ecx_4:1.b
    int32_t edx_12 = zx.d(*(edi + 2)) + sx.d(result[2])
    int32_t ecx_5
    ecx_5.b = result[2].b
    ecx_5:1.b = edx_12 s> 0xff
    ecx_5.b += *(edi + 2)
    ecx_5:1.b = neg.b(ecx_5:1.b)
    ecx_5:1.b |= ecx_5.b
    ecx_5.b = edx_12 s< 0
    ecx_5.b -= 1
    ecx_5:1.b &= ecx_5.b
    *(esi + 2) = ecx_5:1.b
    int32_t edx_14 = sx.d(result[3]) + zx.d(*(edi + 3))
    uint32_t ecx_6
    ecx_6.b = result[3].b
    ecx_6:1.b = edx_14 s> 0xff
    ecx_6.b += *(edi + 3)
    ecx_6:1.b = neg.b(ecx_6:1.b)
    ecx_6:1.b |= ecx_6.b
    ecx_6.b = edx_14 s< 0
    result = &result[8]
    ecx_6.b -= 1
    ecx_6:1.b &= ecx_6.b
    *(esi + 3) = ecx_6:1.b
    int32_t edx_16 = sx.d(result[-4]) + zx.d(*(edi + 4))
    uint32_t ecx_7
    ecx_7.b = result[-4].b
    ecx_7:1.b = edx_16 s> 0xff
    ecx_7.b += *(edi + 4)
    ecx_7:1.b = neg.b(ecx_7:1.b)
    ecx_7:1.b |= ecx_7.b
    ecx_7.b = edx_16 s< 0
    ecx_7.b -= 1
    ecx_7:1.b &= ecx_7.b
    *(esi + 4) = ecx_7:1.b
    int32_t edx_18 = zx.d(*(edi + 5)) + sx.d(result[-3])
    int32_t ecx_8
    ecx_8.b = result[-3].b
    ecx_8:1.b = edx_18 s> 0xff
    ecx_8.b += *(edi + 5)
    ecx_8:1.b = neg.b(ecx_8:1.b)
    ecx_8:1.b |= ecx_8.b
    edx_2 = var_c
    ecx_8.b = edx_18 s< 0
    edi += arg3
    ecx_8.b -= 1
    ecx_8:1.b &= ecx_8.b
    *(esi + 5) = ecx_8:1.b
    esi += arg3
    i = i_1
    i_1 -= 1
while (i != 1)
return result
