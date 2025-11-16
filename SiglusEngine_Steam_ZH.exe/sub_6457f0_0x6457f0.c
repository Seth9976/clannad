// 函数: sub_6457f0
// 地址: 0x6457f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 s<= 0 || arg4 s<= 0)
    arg1.b = 0
    return arg1

arg3[3] = arg2
arg3[4] = arg4
sub_5979b0(arg3, (arg2 * arg4) << 2)
int32_t edi = arg6

if (edi s< 0 || edi s>= 2)
    edi = 0

int32_t var_4c
int32_t var_3c
int32_t var_2c
double* var_1c
int32_t eax_4 = sub_645370(&var_4c, arg4, arg2, &var_4c, &var_3c, &var_2c, &var_1c)
int32_t ebx
ebx.b = arg5
char edx_1 = ebx.b
int32_t* var_60
var_60.q = 0x4056800000000000
int32_t* var_68
var_68.q = (zx.o(0)).q
int32_t var_70_2
int32_t var_6c
double* eax_7
int32_t var_48
int32_t var_44
int32_t var_38
int32_t var_34
int32_t var_28
int32_t var_24
double* var_18
double* var_14

if (edi != 0)
    double* eax_8 =
        sub_645430(eax_4, edx_1, arg3, var_4c, var_3c, var_2c, var_1c, 0x80, 0xff, var_68, var_60)
    var_60.q = 0x4056800000000000
    var_68.q = (zx.o(0)).q
    double* eax_9 =
        sub_645430(eax_8, ebx.b, arg3, var_48, var_38, var_28, var_18, 0, 0x7f, var_68, var_60)
    var_60.q = 0x4056800000000000
    var_68.q = (zx.o(0)).q
    eax_7 =
        sub_645430(eax_9, ebx.b, arg3, var_44, var_34, var_24, var_14, 0x80, 0xff, var_68, var_60)
    var_60.q = 0x4056800000000000
    var_68.q = (zx.o(0)).q
    var_6c = 0x7f
    var_70_2 = 0
else
    double* eax_5 =
        sub_645430(eax_4, edx_1, arg3, var_4c, var_3c, var_2c, var_1c, edi, 0x7f, var_68, var_60)
    var_60.q = 0x4056800000000000
    var_68.q = (zx.o(0)).q
    double* eax_6 =
        sub_645430(eax_5, ebx.b, arg3, var_48, var_38, var_28, var_18, 0x80, 0xff, var_68, var_60)
    var_60.q = 0x4056800000000000
    var_68.q = (zx.o(0)).q
    eax_7 =
        sub_645430(eax_6, ebx.b, arg3, var_44, var_34, var_24, var_14, edi, 0x7f, var_68, var_60)
    var_60.q = 0x4056800000000000
    var_68.q = (zx.o(0)).q
    var_6c = 0xff
    var_70_2 = 0x80
int32_t var_40
int32_t var_30
int32_t var_20
double* var_10
sub_645430(eax_7, ebx.b, arg3, var_40, var_30, var_20, var_10, var_70_2, var_6c, var_68, var_60)
double* eax_10
eax_10.b = 1
return eax_10
