// 函数: sub_4e3c25
// 地址: 0x4e3c25
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t edx = 0
int32_t edi_1 = 0
int16_t* eax = arg1 + 0x8c
int32_t i_3 = 7
int32_t i

do
    edi_1 += zx.d(*eax)
    eax = &eax[2]
    i = i_3
    i_3 -= 1
while (i != 1)
void* eax_1 = arg1 + 0xa8
int32_t i_4 = 0x79
int32_t i_1

do
    edx += zx.d(*eax_1)
    eax_1 += 4
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
void* result = arg1 + 0x28c
int32_t i_5 = 0x80
int32_t i_2

do
    edi_1 += zx.d(*result)
    result += 4
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
result.b = sbb.b(result.b, result.b, edx u>> 2 u< edi_1)
result.b += 1
*(arg1 + 0x1c) = result.b
return result
