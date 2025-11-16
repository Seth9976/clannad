// 函数: sub_64fdf0
// 地址: 0x64fdf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3d0c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_42c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x33c) = 0
int32_t var_2c4
sub_54aed0(&var_2c4)
int32_t var_8_1 = 0
var_2c4 = 0x1a
void var_2c0
__builtin_memcpy(&var_2c0, arg1, 0x80)
void* const var_16c
int32_t var_430_1 = sub_54cf80(&var_16c, &var_2c4)
var_8_1.b = 1
sub_6767a0(data_bac458 + 0x158)
int32_t ecx_6 = sub_62f9b0(data_bac458, &var_16c)

if (*(var_16c + 0xad9a68) != 0)
    int32_t var_430_3 = ecx_6
    sub_696dc0()

void var_e0
sub_54ae40(&var_e0)
sub_54aed0(&var_16c)
var_8_1.b = 2
var_16c = 0x19
void var_168
__builtin_memcpy(&var_168, arg1, 0x80)
void* var_41c
int32_t var_430_5 = sub_54cf80(&var_41c, &var_16c)
var_8_1.b = 3
sub_6767a0(data_bac458 + 0x158)
int32_t ecx_14 = sub_62f9b0(data_bac458, &var_41c)

if (*(var_41c + 0xad9a68) != 0)
    int32_t var_430_7 = ecx_14
    sub_696dc0()

void var_390
sub_54ae40(&var_390)
sub_54ae40(&var_e0)
void var_238
sub_54ae40(&var_238)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return 0
