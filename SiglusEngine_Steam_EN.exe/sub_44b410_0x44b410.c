// 函数: sub_44b410
// 地址: 0x44b410
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

ClipCursor(nullptr)
sub_4a2060()
sub_4a1d60()
sub_4d6c40(&data_1393180, &data_1393184)
data_1393190 = 0
sub_418df0()
sub_4d6c40(&data_1bfe298, &data_1bfe29c)
data_1bfe298 = 0
data_1bfe29c = 0
data_1bfe294 = 0
sub_4d6c40(&data_13570f4, &data_13570f8)
data_13570f0 = 0
sub_4d6c40(&data_1bfe284, &data_1bfe288)
data_1bfe28c = 0
sub_417d30()
int32_t* esi = &data_98be0c
int32_t i_3 = 8
int32_t i

do
    sub_4d6c40(esi, &esi[1])
    esi = &esi[8]
    i = i_3
    i_3 -= 1
while (i != 1)
sub_41aee0()
int32_t* esi_1 = &data_1357030
int32_t i_4 = 8
int32_t i_1

do
    sub_4d6c40(esi_1, &esi_1[1])
    esi_1 = &esi_1[6]
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
sub_45fa80()
HGLOBAL hMem = data_1be4b08

if (hMem != 0)
    GlobalUnlock(hMem)
    GlobalFree(data_1be4b08)
    data_1be4b08 = 0
    data_1be4b04 = 0

sub_495170()
sub_41d470()
FreeLibrary(data_1333e44)
int32_t i_2 = 0
__builtin_memset(&data_1333e34, 0, 0x14)

do
    if (i_2 u<= 0x100)
        *((i_2 << 2) + &data_2073cb8) = 0
    
    i_2 += 1
while (i_2 s< 0x101)

return i_2
