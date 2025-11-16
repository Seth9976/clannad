// 函数: sub_4189f0
// 地址: 0x4189f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

sub_4d6c40(&data_1321eb0, &data_1321eb4)
int32_t result = data_1321eb8
data_1321eb0 = 0
data_1321eb4 = 0
data_1321eac = 0

if (result s<= 0 || data_1321ebc == 0)
    return result

data_1321eac = result
uint32_t eax = result * 0x2c
sub_4d6960(eax, &data_1321eb4, &data_1321eb0, eax, "AvgCgTable_sort")
int32_t i = 0
int32_t* eax_1 = data_1321eb4

if (data_1321eb8 s> 0)
    int32_t edx_2 = data_1321ec0 + 0x24
    
    do
        *eax_1 = i
        sub_4d1c30(eax_1, edx_2, &eax_1[1], 0x14)
        eax_1 = &eax_1[0xb]
        __builtin_memset(&eax_1[-5], 0xff, 0x14)
        i += 1
        edx_2 += 0x3c
    while (i s< data_1321eb8)
    
    eax_1 = data_1321eb4

return sub_5f02f0(eax_1, data_1321eac, 0x2c, sub_4189c0)
