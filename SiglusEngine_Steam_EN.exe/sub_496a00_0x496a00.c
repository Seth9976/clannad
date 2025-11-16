// 函数: sub_496a00
// 地址: 0x496a00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

sub_452d90(1)
sub_4d1c30(sub_4525d0(1, 1), arg3, &data_1606c30, 0x273990)
data_187a5c0 = 1
char* result = sub_498220()

if (data_976b40 != 0)
    int32_t edx_1 = data_976b44
    result = data_976b48
    
    if (edx_1 s>= 0 && edx_1 s< data_63ecc8)
        *((edx_1 << 2) + &data_13262d0) = result
    else if (data_702fc0 != 0)
        result = sub_4e74e0(6)

int32_t var_48 = arg2
data_71929c = 0x1a
sub_4d1c30(result, &var_48, &data_7192a0, 0x40)
data_7192e0 = 0

if (data_108f47c != 0)
    data_1af1754 = arg4
    int32_t eax_3 = data_719b6c - 1
    data_1af17c8 = 0
    
    if (eax_3 u> 0x270e || data_976f94 == 0)
        data_976fb0.d = 0xffffffff
    else
        eax_3 = data_719b74 + data_976fa8
        data_976fb0.d = eax_3
    
    sub_48f4f0(eax_3, &data_976f90, &data_719b6c, data_108f474, data_108f478, 0, 5)
    result = sub_48d040(data_71929c, &data_7192a0)
    data_71929c = 4
    data_7192a0 = 0
    data_7192e0 = 0

return result
