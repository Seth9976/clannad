// 函数: sub_52d170
// 地址: 0x52d170
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1311178 == 0)
    data_1606d78 = 1
    data_1606c68 = 1

int32_t ecx
ecx.b = 0
sub_420350(ecx)
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
void* eax_2 = &data_8fcb20
int32_t i_5 = 0x40
int32_t i_2

do
    *eax_2 = 0
    eax_2 += 0x2d0
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
void* result = sub_57fbb0()
bool cond:0 = data_13132dc == 0
data_1af1714 = 0
data_187c51f = 0
data_1af1710 = 0
data_187c51e = 0
data_187c51d = 0

if (cond:0 || data_1b1bcd8 != 0)
    result = sub_49e720(result, data_63e16c, 0x976380, 0x64)
    data_1393190 = 0

data_1af0f3c = 0xffffffff
data_1370100 = 0xffffffff
data_703660 = 0xffffffff
data_1af17ac = 0
data_1333e48 = 1
data_1af178c = 0
return result
