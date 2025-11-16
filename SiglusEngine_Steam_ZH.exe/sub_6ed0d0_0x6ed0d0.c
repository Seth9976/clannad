// 函数: sub_6ed0d0
// 地址: 0x6ed0d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
int32_t var_8 = ebx
void* esi_1 = arg1 + 2
int32_t i_1 = 8
void* result = arg3 + 4
int32_t i

do
    int32_t edx_2 = sx.d(*(result - 4)) + 0x80
    ebx.b = edx_2 s> 0xff
    ebx.b = neg.b(ebx.b)
    ebx.b |= *(result - 4) + 0x80
    ebx.b &= (edx_2 s< 0) - 1
    *(esi_1 - 2) = ebx.b
    int32_t edx_4 = sx.d(*(result - 2)) + 0x80
    ebx.b = edx_4 s> 0xff
    ebx.b = neg.b(ebx.b)
    ebx.b |= *(result - 2) + 0x80
    ebx.b &= (edx_4 s< 0) - 1
    *(esi_1 - 1) = ebx.b
    int32_t edx_6 = sx.d(*result) + 0x80
    ebx.b = edx_6 s> 0xff
    ebx.b = neg.b(ebx.b)
    ebx.b |= *result + 0x80
    ebx.b &= (edx_6 s< 0) - 1
    *esi_1 = ebx.b
    int32_t edx_8 = sx.d(*(result + 2)) + 0x80
    ebx.b = edx_8 s> 0xff
    ebx.b = neg.b(ebx.b)
    ebx.b |= *(result + 2) + 0x80
    ebx.b &= (edx_8 s< 0) - 1
    *(esi_1 + 1) = ebx.b
    int32_t edx_10 = sx.d(*(result + 4)) + 0x80
    ebx.b = edx_10 s> 0xff
    ebx.b = neg.b(ebx.b)
    ebx.b |= *(result + 4) + 0x80
    ebx.b &= (edx_10 s< 0) - 1
    *(esi_1 + 2) = ebx.b
    int32_t edx_12 = sx.d(*(result + 6)) + 0x80
    ebx.b = edx_12 s> 0xff
    ebx.b = neg.b(ebx.b)
    ebx.b |= *(result + 6) + 0x80
    ebx.b &= (edx_12 s< 0) - 1
    *(esi_1 + 3) = ebx.b
    int32_t edx_14 = sx.d(*(result + 8)) + 0x80
    bool ecx_7 = *(result + 8)
    result += 0x10
    ebx.b = edx_14 s> 0xff
    ebx.b = neg.b(ebx.b)
    ebx.b |= ecx_7 + 0x80
    ebx.b &= (edx_14 s< 0) - 1
    *(esi_1 + 4) = ebx.b
    int32_t edx_16 = sx.d(*(result - 6)) + 0x80
    ebx.b = edx_16 s> 0xff
    ebx.b = neg.b(ebx.b)
    ebx.b |= *(result - 6) + 0x80
    ebx.b &= (edx_16 s< 0) - 1
    *(esi_1 + 5) = ebx.b
    esi_1 += arg2
    i = i_1
    i_1 -= 1
while (i != 1)
return result
