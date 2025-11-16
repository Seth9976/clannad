// 函数: sub_1000647c
// 地址: 0x1000647c
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

void* i = &data_10017320
int32_t edi = 0x1001b2c0

do
    if (*(i + 4) == 1)
        *i = edi
        edi += 0x18
        sub_10005b7b(*i, 0xfa0, 0)
    
    i += 8
while (i s< &data_10017440)

return 1
