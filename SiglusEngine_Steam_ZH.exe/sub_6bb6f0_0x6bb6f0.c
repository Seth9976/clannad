// 函数: sub_6bb6f0
// 地址: 0x6bb6f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb9e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_40 = 0
int32_t var_1c = 7
int32_t var_20 = 0
int16_t var_30 = 0
int32_t var_8_1 = 0
char eax_6 = sub_6baf00(arg1, arg3, &var_30, arg5, arg6, arg7, arg8)
*(arg2 + 0x14) = 7
*(arg2 + 0x10) = 0
void** var_5c_1

if (eax_6 != 0)
    *arg2 = 0
    var_5c_1 = &var_30
else
    var_5c_1 = arg4
    *arg2 = 0

sub_52e3c0(arg2, var_5c_1, 0, 0xffffffff)

if (var_1c u>= 8)
    j__free(var_30.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg2
