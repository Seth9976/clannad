// 函数: sub_494c30
// 地址: 0x494c30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_70300c
int32_t ecx_1 = eax s>> 3
data_1be46e4 = 0
data_1be46dc = 0
data_1be46d4 = 0
data_1be46d0 = ecx_1

if ((eax.b & 7) != 0)
    data_1be46d0 = ecx_1 + 1

int32_t result = data_7030dc
int32_t ecx_4 = result s>> 3
data_1b8c88c = ecx_4

if ((result.b & 7) != 0)
    data_1b8c88c = ecx_4 + 1

return result
