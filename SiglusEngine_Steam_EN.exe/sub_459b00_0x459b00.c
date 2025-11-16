// 函数: sub_459b00
// 地址: 0x459b00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int128_t* i = &data_7030e0:8
int32_t result

do
    sub_4d6c40(i - 8, i - 4)
    *i = i[1].d
    *(i + 4) = *(i + 0x14)
    *(i - 8) = *(i + 8)
    result = *(i + 0xc)
    *(i - 4) = result
    i += 0x28
while (i s< &data_703180:8)

data_7030f0 = 0
data_7030f4 = 0
data_703118 = 0
data_70311c = 0
data_703140 = 0
data_703144 = 0
data_703168 = 0
data_70316c = 0
return result
