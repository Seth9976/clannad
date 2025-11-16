// 函数: sub_4aa320
// 地址: 0x4aa320
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_7030cc != 0)
    if (sub_4aa220() == 0)
        int32_t eax_5 = data_7030c4
        data_703050 = 0x32
        data_1bff8a0 = 0
        data_1bff8a4 = 0xff
        data_1bff8a8 = eax_5
        return eax_5
else
    void* eax = data_7030b0
    int32_t edx_1 = data_7030ac
    int32_t var_4_1 = data_703094 << 5
    int32_t var_8_1 = data_7030b8
    int32_t var_c_1 = data_7030b4
    void* var_10_1 = eax
    int32_t var_14_1 = edx_1
    sub_458da0(eax, edx_1, &data_1bfe2a4, eax, (&data_976b54)[data_703094 * 8], 
        (&data_976b58)[data_703094 * 8], (&data_976b5c)[data_703094 * 8])

int32_t eax_2 = data_1bfe2d0
int32_t edx_2 = data_7030c4

if (data_703054 == 0)
    eax_2 = 1

data_1bfe2d0 = eax_2
int32_t eax_3 = data_703058

if (eax_3 s< 0)
    eax_3 = 0
else if (eax_3 s> 8)
    eax_3 = 8

data_1bff9a8 = 0xff
data_1bfe2cc = 8 - eax_3
int32_t eax_4 = 0xffffff01 << (8 - eax_3).b
data_1bff9a4 = eax_4
data_1bff9ac = edx_2
return eax_4
