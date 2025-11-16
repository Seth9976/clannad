// 函数: sub_4d8190
// 地址: 0x4d8190
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3

if (*(arg4 + 4) == 0)
    return 

if (*arg4 != 0)
    *arg4 = 0
else
    arg1.b = arg4[0x15]
    
    if (arg1.b == 0)
        *(arg4 + 8) += data_1b14a28
    else if (arg1.b == 1)
        *(arg4 + 8) += data_1b8a718

sub_4d8010(arg3, arg4)
sub_4d8010(arg2, arg4)

if (arg3[1] != *arg3 || arg2[1] != *arg2)
    return 

__builtin_memset(&arg4[4], 0, 0x12)
int32_t eax_2 = arg3[1]
*arg3 = eax_2
arg3[2] = eax_2
arg1 = arg2[1]
*arg2 = arg1
arg2[2] = arg1
