// 函数: sub_413750
// 地址: 0x413750
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg6
int32_t var_1c = arg2
int32_t var_c = arg3

if (esi s>= 0x21)
    return 

if ((&data_976b50)[esi * 8] == 0)
    sub_411500(arg1, data_70300c, esi, data_7030dc)
    arg3 = var_c

int32_t ebx_1 = arg4

if (arg3 s> ebx_1)
    int32_t eax = arg3
    var_c = ebx_1
    arg3 = ebx_1
    ebx_1 = eax

int32_t edx_1 = arg5
int32_t eax_1 = var_1c

if (eax_1 s> edx_1)
    var_1c = edx_1
    edx_1 = eax_1
    arg5 = edx_1

int32_t var_10_1 = 0
int32_t var_14_1 = 0
int32_t var_18_1 = 0

if (arg7 u<= 3)
    int32_t eax_3 = arg7 * 5
    
    if (*((eax_3 << 3) + &data_7030e0) != 0)
        var_10_1 = *((eax_3 << 3) + &data_7030e0:4)
        var_14_1 = *((eax_3 << 3) + &data_7030e0:8)
        esi = arg6
        var_18_1 = *((eax_3 << 3) + &data_7030e0:0xc)

if (arg12 == 0)
    int32_t var_2c_3 = 0
    int32_t var_30_2 = arg16
    int32_t var_34_2 = 0
    int32_t var_38_2 = 0
    sub_5860f0(arg12, (&data_976b58)[esi * 8], (&data_976b54)[esi * 8], (&data_976b5c)[esi * 8], 
        arg3, var_1c, ebx_1, edx_1, arg13, arg14, arg15, 0xffffffff, 0xffffffff, 0xffffffff, 
        0xffffffff, arg3, var_10_1, arg17, arg11, var_14_1, var_18_1, arg9, arg10, arg8)
else if (arg12 == 1)
    int32_t var_2c_2 = arg12 - 1
    int32_t var_30_1 = arg16
    int32_t var_34_1 = arg12 - 1
    int32_t var_38_1 = arg12 - 1
    int32_t var_5c_1 = arg8
    int32_t var_60_1 = arg10
    int32_t var_64_1 = arg9
    int32_t var_68_1 = var_18_1
    sub_586580(arg12 - 1, (&data_976b58)[esi * 8], (&data_976b54)[esi * 8], 
        (&data_976b5c)[esi * 8], arg3, var_1c, ebx_1, edx_1, arg13, arg14.b, arg15.b, 0xffffffff, 
        0xff, 0xffffffff, 0xffffffff, arg3, var_10_1, arg17, arg11, var_14_1.b)

if (esi == 0)
    int32_t var_2c_4 = arg5
    int32_t var_30_3 = ebx_1
    sub_494c90(var_c, var_1c)
    data_703004 = 1

if (data_702fc0 == 0 || data_1af0a78 == 0)
    return 

bool cond:0_1

if (esi s<= 0x10)
    cond:0_1 = data_1318520 != 2
    *((esi << 2) + &data_20cc940) = 1
label_41392f:
    
    if (not(cond:0_1))
        sub_563b20(0)
else if (esi == 0xffffffff)
    cond:0_1 = data_1318520 != 1
    goto label_41392f
