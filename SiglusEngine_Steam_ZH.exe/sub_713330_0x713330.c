// 函数: sub_713330
// 地址: 0x713330
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9d15b9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_f0
int32_t eax_2 = __security_cookie ^ &var_f0
int32_t __saved_edi
int32_t var_fc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_100 = 0xf
int32_t var_104 = 0
char var_114 = 0
sub_541eb0(&var_114, "VS_INPUT", 8)
int32_t var_c_1 = 0
void var_d8
sub_70b1c0(arg1 + 0x14, sub_704d50(&var_d8, 0xf, var_114))
int32_t var_c_2 = 0xffffffff
sub_7058f0(&var_d8)
int128_t var_e8
int128_t* var_100_2 = &var_e8
int32_t var_104_1 = 1
var_e8 = zx.o(0)
sub_705ca0(arg1 + 0x14, var_104_1, var_100_2)
int128_t* var_100_3 = &var_e8
int32_t var_104_2 = 2
var_e8 = zx.o(0)
sub_705ca0(arg1 + 0x14, var_104_2, var_100_3)
int128_t* var_100_4 = &var_e8
int32_t var_104_3 = 4
var_e8 = zx.o(0)
sub_705ca0(arg1 + 0x14, var_104_3, var_100_4)
int128_t* var_100_5 = &var_e8
int32_t var_104_4 = 8
var_e8 = data_b0da60
sub_705ca0(arg1 + 0x14, var_104_4, var_100_5)
int32_t var_100_6 = 0xf
int32_t var_104_5 = 0
var_114 = 0
sub_541eb0(&var_114, "VS_OUTPUT", 9)
int32_t var_c_3 = 1
sub_70b510(arg1 + 0x94, sub_706000(&var_d8, 0x21, var_114))
int32_t var_c_4 = 0xffffffff
sub_706b40(&var_d8)
int32_t var_100_8 = 0xf
int32_t var_104_6 = 0
var_114 = 0
sub_541eb0(&var_114, "PS_INPUT", 8)
int32_t var_c_5 = 2
sub_70b510(arg1 + 0x110, sub_706e30(&var_d8, 0x21, var_114))
int32_t var_c_6 = 0xffffffff
sub_707970(&var_d8)
int32_t var_100_10 = 0xf
int32_t var_104_7 = 0
var_114 = 0
sub_541eb0(&var_114, "PS_OUTPUT", 9)
int32_t var_c_7 = 3
void var_58
sub_70b8a0(arg1 + 0x18c, sub_707c10(&var_58, 0x100, var_114))
int32_t var_c_8 = 0xffffffff
int32_t result = sub_708060(&var_58)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_f0)
return result
