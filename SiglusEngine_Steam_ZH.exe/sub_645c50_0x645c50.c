// 函数: sub_645c50
// 地址: 0x645c50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 s<= 0 || arg4 s<= 0)
    arg1.b = 0
    return arg1

arg3[3] = arg2
arg3[4] = arg4
sub_5979b0(arg3, (arg2 * arg4) << 2)
int32_t ebx
ebx.b = arg5
int32_t* var_5c
var_5c.q = 0x4056800000000000
int32_t* var_64
var_64.q = (zx.o(0)).q
int32_t var_48
int32_t var_38
int32_t var_28
double* var_18
double* eax_5 = sub_645430(sub_645370(&var_48, arg4, arg2, &var_48, &var_38, &var_28, &var_18), 
    ebx.b, arg3, var_48, var_38, var_28, var_18, 0, 0xff, var_64, var_5c)
var_5c.q = 0x4056800000000000
ebx:1.b = ebx.b == 0
var_64.q = (zx.o(0)).q
int32_t var_44
int32_t var_34
int32_t var_24
double* var_14
double* eax_6 =
    sub_645430(eax_5, ebx:1.b, arg3, var_44, var_34, var_24, var_14, 0, 0xff, var_64, var_5c)
var_5c.q = 0x4056800000000000
var_64.q = (zx.o(0)).q
int32_t var_40
int32_t var_30
int32_t var_20
double* var_10
double* eax_7 =
    sub_645430(eax_6, ebx.b, arg3, var_40, var_30, var_20, var_10, 0, 0xff, var_64, var_5c)
var_5c.q = 0x4056800000000000
var_64.q = (zx.o(0)).q
int32_t var_3c
int32_t var_2c
int32_t var_1c
double* var_c
sub_645430(eax_7, ebx:1.b, arg3, var_3c, var_2c, var_1c, var_c, 0, 0xff, var_64, var_5c)
double* eax_8
eax_8.b = 1
return eax_8
