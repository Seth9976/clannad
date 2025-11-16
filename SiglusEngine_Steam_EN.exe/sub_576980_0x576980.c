// 函数: sub_576980
// 地址: 0x576980
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = arg1
data_72d6a8 = data_106e2fc
data_976fc4 = data_106e314
data_108f2d4 = data_106e318
data_108f2d8 = data_106e31c
int32_t ebx
ebx.b = arg1.b
data_108f2dc = data_106e320

for (int32_t i = 0; i s< 0x40; i += 1)
    sub_576900(i)

if (data_106e304 != 0)
    sub_57df40(data_106e308, data_106e300)
    data_107ef98 = data_106e30c
    data_107ef9c = data_106e310

int32_t eax_7 = sub_57e0c0(data_106e328, data_106e324)
data_13740f0 = 0
int32_t eax_8 = sub_460c30(eax_7, 0, 1, 2, 0)

if (ebx.b != 0)
    for (int32_t i_1 = 0; i_1 s< 0x40; i_1 += 1)
        eax_8 = sub_576470(i_1)

sub_4d1c30(eax_8, 0x1be4b10, &data_1333e50, 0x19000)
sub_4d1c30(eax_8, 0x1b8c478, &data_1af0b10, 0x400)
int32_t result = data_1bfe01c
data_1333e48 = result
return result
