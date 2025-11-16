// 函数: sub_600d30
// 地址: 0x600d30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b3676
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_2cc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_16c
sub_54aed0(&var_16c)
int32_t var_8_1 = 0
char var_2c = arg1
char var_2a = arg2
var_16c = 0x1d
void* var_2c4
int32_t var_2d0_1 = sub_54cf80(&var_2c4, &var_16c)
var_8_1.b = 1
sub_6767a0(data_bac458 + 0x158)
int32_t ecx_6 = sub_62f9b0(data_bac458, &var_2c4)

if (*(var_2c4 + 0xad9a68) != 0)
    int32_t var_2d0_3 = ecx_6
    sub_696dc0()

void var_238
sub_54ae40(&var_238)
void var_e0
sub_54ae40(&var_e0)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return 0
