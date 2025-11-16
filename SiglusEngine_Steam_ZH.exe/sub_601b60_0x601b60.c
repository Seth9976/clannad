// 函数: sub_601b60
// 地址: 0x601b60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd596
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_2d8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_170
sub_54aed0(&var_170)
int32_t var_8_1 = 0
var_170 = 0x1e
void var_16c
__builtin_memcpy(&var_16c, arg1, 0x80)
char var_30 = arg2
void* var_2c8
int32_t var_2dc_1 = sub_54cf80(&var_2c8, &var_170)
var_8_1.b = 1
sub_6767a0(data_bac458 + 0x158)
int32_t ecx_6 = sub_62f9b0(data_bac458, &var_2c8)

if (*(var_2c8 + 0xad9a68) != 0)
    int32_t var_2dc_3 = ecx_6
    sub_696dc0()

void var_23c
sub_54ae40(&var_23c)
void var_e4
sub_54ae40(&var_e4)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return 0
