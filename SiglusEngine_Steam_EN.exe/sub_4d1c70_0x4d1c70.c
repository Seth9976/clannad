// 函数: sub_4d1c70
// 地址: 0x4d1c70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_3

if (arg8 == 1)
    eax_3 = data_1392710
else if (arg8 == 2)
    eax_3 = data_1392ccc
else
    eax_3 = data_131310c

arg3[6] = eax_3
int32_t result = arg4
arg3[3] = arg2
*arg3 = arg5
arg3[1] = arg2
arg3[9] = arg8

if (result s< 0)
    result = neg.d(result)

arg3[8] = result
result.b = arg7
arg3[7] = 0
arg3[4] = arg5
arg3[5] = arg6

if (result.b == 0xff)
    arg3[4] = arg2
    arg3[5] = arg2
    *arg3 = arg2
    arg3[2].b = result.b
    return result

if (result.b == 1 || result.b == 2)
    result = zx.d(result.b)
    
    if (arg5 == arg6)
        result = 0

arg3[2].b = result.b
return result
