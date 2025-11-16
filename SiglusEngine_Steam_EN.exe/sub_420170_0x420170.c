// 函数: sub_420170
// 地址: 0x420170
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f || data_7037e0 == 0 || *(arg1 * 0x1d4 + 0x1090bd0) == 0
        || (data_12a2980 == 0 && data_702fc0 == 0) || data_1311178 != 0)
    return 

int32_t eax_1 = *(arg1 * 0x1d4 + &data_1090b2c)
int32_t edx

if (eax_1 != 0)
    edx = *(arg1 * 0x1d4 + 0x1090b40)
else
    edx = *(arg1 * 0x2d0 + &data_8fcadc)

char var_8_1 = 0

if (eax_1 == 0)
    sub_420100(eax_1, edx, arg2, 1)
    return 

if (eax_1 == 1)
    eax_1 = 0
    
    if (*(arg1 * 0x1d4 + &data_1090b6c) != 0xffffffff)
        eax_1 = 1
    
    var_8_1 = eax_1.b

sub_420100(eax_1, edx, arg2, var_8_1)
