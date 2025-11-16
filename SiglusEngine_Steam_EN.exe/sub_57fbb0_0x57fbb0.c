// 函数: sub_57fbb0
// 地址: 0x57fbb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = &data_f8c790
int32_t i_3 = 0x40
int32_t i

do
    *eax = 0xffffffff
    eax = &eax[0xe48]
    i = i_3
    i_3 -= 1
while (i != 1)
void* eax_1 = &data_8fcb08
int32_t i_4 = 0x40
int32_t i_1

do
    *(eax_1 - 4) = 0xffffffff
    eax_1 += 0x2d0
    *(eax_1 - 0x2d0) = 0xffffffff
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
void* result = &data_f8c794
void* ecx = &data_8fcb1c
int32_t i_5 = 0x40
int32_t i_2

do
    *ecx = 2
    result += 0x3920
    *(result - 0x3930) = 0
    ecx += 0x2d0
    *(result - 0x3920) = 0
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
return result
