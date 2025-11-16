// 函数: sub_579f80
// 地址: 0x579f80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
arg7[1] = arg8
arg7[2] = arg9
*arg7 = 0
sub_579920()
int32_t eax_1 = arg2[2]
arg7[1] += eax_1
sub_5802f0(eax_1, 0, arg4, arg3, arg2, arg5, arg6, 1, arg11, 1)

if (*(arg4 + 0x18) == 0)
    *arg7 = 1
else
    *arg7 = 0
    sub_579920()

int32_t eax_3 = arg2[3] * arg11
*arg7 = 2
arg7[1] += eax_3
sub_579920()
arg7[1] += arg2[*arg7 + 2]
arg7[2] += arg2[0x22]
arg7[1] = arg8
sub_5802f0(arg8, 1, arg4, arg3, arg2, arg5, arg6, 3, 1, arg12)

if (*(arg4 + 0x44) == 0)
    *arg7 = 3
else
    *arg7 = 0
    sub_579920()

int32_t eax_9 = arg2[5] + arg8
arg7[1] = eax_9
sub_5802f0(eax_9, 2, arg4, arg3, arg2, arg5, arg6, 4, arg11, arg12)

if (*(arg4 + 0x70) == 0)
    *arg7 = 4
else
    *arg7 = 0
    sub_579920()

int32_t eax_12 = arg8 - arg2[4] + arg10
arg7[1] = eax_12
sub_5802f0(eax_12, 3, arg4, arg3, arg2, arg5, arg6, 5, 1, arg12)

if (*(arg4 + 0x9c) == 0)
    *arg7 = 5
else
    *arg7 = 0
    sub_579920()

int32_t eax_14 = arg2[0x27] * arg12
*arg7 = 6
arg7[2] += eax_14
arg7[1] = arg8
sub_579920()
int32_t eax_16 = arg2[8]
arg7[1] += eax_16
sub_5802f0(eax_16, 4, arg4, arg3, arg2, arg5, arg6, 7, arg11, 1)

if (*(arg4 + 0xc8) == 0)
    *arg7 = 7
else
    *arg7 = 0
    sub_579920()

int32_t eax_18 = arg2[9] * arg11
*arg7 = 8
arg7[1] += eax_18
sub_579920()
int32_t result = arg2[0xa]
arg7[1] += result
return result
