// 函数: sub_49b7a0
// 地址: 0x49b7a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_18 = arg2

if (arg3 u> 0x21)
    return 

int32_t edi_1 = (&data_976b54)[arg3 * 8]

if (edi_1 == 0)
    return 

int32_t var_14
int32_t var_10
int32_t var_c
int32_t var_8
void arg_4
void arg_8
void arg_c
int32_t arg_10
int32_t arg_14
int32_t arg_18
int32_t arg_1c
int32_t arg_24
int32_t arg_28
int32_t ecx_1
arg1, ecx_1 = sub_49b5c0(&arg_18, &arg_14, &arg_10, &arg_18, &arg_1c, &arg_24, &arg_28, &var_18, 
    &arg_4, &arg_8, &arg_c, arg3, &var_14, &var_10, &var_c, &var_8)

if (arg1 == 0)
    return 

int32_t edx_1 = var_8

if (arg5 == 0 || arg5 == 1)
    int32_t var_2c_3 = 0
    int32_t var_30_3 = 0xff
    int32_t var_34_3 = 0
    int32_t var_38_3 = 0
    int32_t var_3c_2 = 0
    int32_t var_40_3 = 0
    int32_t eax_8 = arg_24
    int32_t ecx_4 = arg_28
    int32_t eax_11 = var_14
    sub_5856e0(eax_11, (&data_976b58)[arg3 * 8], edi_1, (&data_976b5c)[arg3 * 8], eax_11, var_10, 
        var_c, edx_1, arg4, eax_8, ecx_4, 0, arg_10, arg_14, arg_18, arg_1c, 0, 0, eax_8, ecx_4, 
        0xff, 0xffffffff, 0xffffffff, 0xffffffff, ecx_1, 0)
    edx_1 = var_8
else if (arg5 == 3)
    int32_t ecx_2 = arg_28
    int32_t var_2c_2 = 0xff
    int32_t var_30_2 = 0xffffffff
    int32_t eax_3 = arg_24
    int32_t var_34_2 = 0xffffffff
    int32_t var_38_2 = 0xffffffff
    int32_t eax_7 = var_14
    sub_58e060(eax_7, (&data_976b58)[arg3 * 8], (&data_976b54)[arg3 * 8], (&data_976b5c)[arg3 * 8], 
        eax_7, var_10, var_c, edx_1, &arg4[1 + zx.d(*arg4) * 2], eax_3, ecx_2, &arg4[1], arg_10, 
        arg_14, arg_18, arg_1c, 0, 0, eax_3, ecx_2, 0xff)
    edx_1 = var_8

if (arg6 != 0)
    int32_t var_2c_4 = edx_1
    int32_t var_30_4 = var_c
    sub_494c90(var_14, var_10)
    data_13926ac = 0
    data_13926a8 = 0xffffffff

sub_564200(arg3)
