// 函数: sub_49b470
// 地址: 0x49b470
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_18 = arg2
int32_t var_14
int32_t var_10
int32_t var_c
int32_t var_8
int32_t arg_4
int32_t arg_10
int32_t arg_14
int32_t arg_18
int32_t arg_1c
int32_t arg_24
int32_t arg_28

if (arg3 u> 0x21 || (&data_976b54)[arg3 * 8] == 0 || sub_49b390(&arg_18, &arg_14, &arg_10, &arg_18, 
        &arg_1c, &arg_24, &arg_28, &var_18, &arg_4, arg3, &var_14, &var_10, &var_8, &var_c) == 0)
    return 

int32_t ecx_1 = var_8
int32_t edx_1 = var_c

if (arg5 == 0 || arg5 == 1)
    int32_t var_2c_3 = 0xff
    int32_t var_30_3 = edx_1
    int32_t var_34_3 = ecx_1
    int32_t var_38_3 = var_10
    sub_584e80(arg5, (&data_976b58)[arg3 * 8], (&data_976b54)[arg3 * 8], (&data_976b5c)[arg3 * 8], 
        arg4, arg_24, arg_28, arg_10, arg_14, arg5, arg2, arg_4, var_14.b)
    edx_1 = var_c
    ecx_1 = var_8
else if (arg5 == 3)
    void* ecx_3 = &arg4[1 + zx.d(*arg4) * 2]
    
    if (ecx_3 == 0)
        ecx_1 = var_8
    else
        int32_t var_2c_2 = edx_1
        int32_t var_30_2 = var_8
        int32_t var_34_2 = var_10
        int32_t var_38_2 = var_14
        sub_58d2d0(&arg4[1], (&data_976b58)[arg3 * 8], (&data_976b54)[arg3 * 8], 
            (&data_976b5c)[arg3 * 8], ecx_3, arg_24, arg_28, arg_10, arg_14, &arg4[1], arg2, arg_4, 
            0xff)
        edx_1 = var_c
        ecx_1 = var_8

if (arg6 != 0)
    int32_t var_2c_4 = edx_1
    int32_t var_30_4 = ecx_1
    sub_494c90(var_14, var_10)
    data_13926ac = 0
    data_13926a8 = 0xffffffff

sub_564200(arg3)
