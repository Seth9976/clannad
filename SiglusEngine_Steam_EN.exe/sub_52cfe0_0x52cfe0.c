// 函数: sub_52cfe0
// 地址: 0x52cfe0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1311178 == 0)
    data_1606d78 = 1
    data_1606c68 = 1

int32_t ecx
ecx.b = 0
sub_420350(ecx)
int32_t* eax = &data_f8c790
int32_t i_4 = 0x40
int32_t i

do
    *eax = 0xffffffff
    eax = &eax[0xe48]
    i = i_4
    i_4 -= 1
while (i != 1)
void* eax_1 = &data_8fcb08
int32_t i_5 = 0x40
int32_t i_1

do
    *(eax_1 - 4) = 0xffffffff
    eax_1 += 0x2d0
    *(eax_1 - 0x2d0) = 0xffffffff
    i_1 = i_5
    i_5 -= 1
while (i_1 != 1)
void* eax_2 = &data_8fcb20
int32_t i_6 = 0x40
int32_t i_2

do
    *eax_2 = 0
    eax_2 += 0x2d0
    i_2 = i_6
    i_6 -= 1
while (i_2 != 1)
i_6.b = 1
sub_57fcf0(i_6, 1)
void* result = &data_f90c00
int32_t i_7 = 0x10
int32_t i_3

do
    *(result - 0x3920) = 0
    result += 0xe480
    *(result - 0xe480) = 0
    *(result - 0xab60) = 0
    *(result - 0x7240) = 0
    i_3 = i_7
    i_7 -= 1
while (i_3 != 1)
data_71929c = 5
data_7192a0 = i_7
data_7192e0 = i_7
data_1af1714 = i_7
data_187c51f = i_7.b
data_1af1710 = i_7
data_187c51e = i_7.b
data_187c51d = i_7.b

if (data_13132dc == i_7 || data_1b1bcd8 != i_7)
    result = sub_49e720(result, data_63e16c, 0x976380, 0x64)
    data_1393190 = 0

data_1af0f3c = 0xffffffff
data_1370100 = 0xffffffff
data_703660 = 0xffffffff
data_1af17ac = 0
data_1333e48 = 1
data_1af178c = 0
return result
