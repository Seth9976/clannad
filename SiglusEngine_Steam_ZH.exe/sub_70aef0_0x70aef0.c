// 函数: sub_70aef0
// 地址: 0x70aef0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9d0829
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_f4
int32_t eax_2 = __security_cookie ^ &var_f4
int32_t __saved_edi
int32_t var_104 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_108 = 0xf
int32_t var_10c = 0
char var_11c = 0
sub_541eb0(&var_11c, "VS_INPUT", 8)
int32_t var_c_1 = 0
void var_d8
sub_70b1c0(arg1 + 0x14, sub_704d50(&var_d8, 0x1ef, var_11c))
int32_t var_c_2 = 0xffffffff
sub_7058f0(&var_d8)
int128_t var_f0
int128_t* var_108_2 = &var_f0
int32_t var_10c_1 = 1
var_f0 = zx.o(0)
sub_705ca0(arg1 + 0x14, var_10c_1, var_108_2)
int128_t* var_108_3 = &var_f0
int32_t var_10c_2 = 2
var_f0 = zx.o(0)
sub_705ca0(arg1 + 0x14, var_10c_2, var_108_3)
int128_t* var_108_4 = &var_f0
int32_t var_10c_3 = 4
var_f0 = zx.o(0)
sub_705ca0(arg1 + 0x14, var_10c_3, var_108_4)
int128_t* var_108_5 = &var_f0
int32_t var_10c_4 = 8
var_f0 = data_b0da60
int64_t* ecx_8 = sub_705ca0(arg1 + 0x14, var_10c_4, var_108_5)
var_f0.d = 0
int128_t* var_108_6 = &var_f0
var_f0:4.d = 0
sub_705b90(arg1 + 0x14, ecx_8)
int64_t* var_108_7 = &var_f0
int32_t var_10c_6 = 0x40
var_f0 = data_b0da60
sub_705ca0(arg1 + 0x14, var_10c_6, var_108_7)
int64_t* var_108_8 = &var_f0
int32_t var_10c_7 = 0x80
var_f0 = data_b0da60
sub_705ca0(arg1 + 0x14, var_10c_7, var_108_8)
int64_t* var_108_9 = &var_f0
int32_t var_10c_8 = 0x100
var_f0 = data_b0db60
sub_705ca0(arg1 + 0x14, var_10c_8, var_108_9)
int32_t var_108_10 = 0xf
int32_t var_10c_9 = 0
var_11c = 0
int32_t* eax_7
int32_t ecx_14
eax_7, ecx_14 = sub_541eb0(&var_11c, "VS_OUTPUT", 9)
int32_t var_120 = ecx_14
int32_t eax_8 = sub_714240(eax_7, arg3, arg2, arg4)
int32_t var_c_3 = 1
sub_70b510(arg1 + 0x94, sub_706000(&var_d8, eax_8, var_11c))
int32_t var_c_4 = 0xffffffff
sub_706b40(&var_d8)
int32_t var_108_12 = 0xf
int32_t var_10c_10 = 0
var_11c = 0
sub_541eb0(&var_11c, "PS_INPUT", 8)
int32_t var_c_5 = 2
sub_70b510(arg1 + 0x110, sub_706e30(&var_d8, eax_8, var_11c))
int32_t var_c_6 = 0xffffffff
sub_707970(&var_d8)
int32_t var_108_14 = 0xf
int32_t var_10c_11 = 0
var_11c = 0
sub_541eb0(&var_11c, "PS_OUTPUT", 9)
int32_t var_c_7 = 3
void var_58
sub_70b8a0(arg1 + 0x18c, sub_707c10(&var_58, 0x100, var_11c))
int32_t var_c_8 = 0xffffffff
int32_t result = sub_708060(&var_58)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_f4)
return result
