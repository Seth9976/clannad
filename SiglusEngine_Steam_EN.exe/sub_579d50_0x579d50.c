// 函数: sub_579d50
// 地址: 0x579d50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
arg7[1] = arg8
arg7[2] = arg9
*arg7 = 0
sub_579920()
int32_t eax_2 = arg2[2]
arg7[1] += eax_2
sub_5802f0(eax_2, 0, arg4, arg3, arg2, arg5, arg6, 1, arg11, 1)

if (*(arg4 + 0x18) == 0)
    *arg7 = 1
else
    *arg7 = 0
    sub_579920()

int32_t eax_4 = arg2[3] * arg11
*arg7 = 2
arg7[1] += eax_4
sub_579920()
arg7[1] += arg2[*arg7 + 2]
arg7[2] += arg2[0x22]
int32_t* eax_8 = arg7[2]
arg7[1] = arg8
*arg7 = 3
sub_579920()
int32_t eax_10 = arg2[0x25]
arg7[2] += eax_10
sub_5802f0(eax_10, 1, arg4, arg3, arg2, arg5, arg6, 4, 1, arg12)

if (*(arg4 + 0x44) == 0)
    *arg7 = 4
else
    *arg7 = 0
    sub_579920()

int32_t eax_12 = arg2[0x26] * arg12
*arg7 = 5
arg7[2] += eax_12
sub_579920()
arg7[2] = eax_8
arg7[1] = arg8 - arg2[8] + arg10
*arg7 = 6
sub_579920()
int32_t eax_17 = arg2[0x28]
arg7[2] += eax_17
sub_5802f0(eax_17, 2, arg4, arg3, arg2, arg5, arg6, 7, 1, arg12)

if (*(arg4 + 0x70) == 0)
    *arg7 = 7
else
    *arg7 = 0
    sub_579920()

int32_t eax_19 = arg2[0x29] * arg12
*arg7 = 8
arg7[2] += eax_19
sub_579920()
arg7[2] += arg2[0x2a]
arg7[1] = arg8
*arg7 = 9
sub_579920()
int32_t eax_22 = arg2[0xb]
arg7[1] += eax_22
sub_5802f0(eax_22, 3, arg4, arg3, arg2, arg5, arg6, 0xa, arg11, 1)

if (*(arg4 + 0x9c) == 0)
    *arg7 = 0xa
else
    *arg7 = 0
    sub_579920()

int32_t eax_24 = arg2[0xc] * arg11
*arg7 = 0xb
arg7[1] += eax_24
sub_579920()
int32_t result = arg2[0xd]
arg7[1] += result
return result
