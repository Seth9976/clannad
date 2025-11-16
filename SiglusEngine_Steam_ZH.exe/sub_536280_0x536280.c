// 函数: sub_536280
// 地址: 0x536280
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??0system_error@std@@QAE@HABVerror_category@1@PBD@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_control::NT3::Cc_check::VTable** result = arg1
struct NT3::C_control::NT3::Cc_check::VTable** result_1 = result
sub_6bfab0(arg1)
result[0x23] = 7
result[0x22] = 0
result[0x1e].w = 0
result[0x17] = 7
int32_t var_8_1 = 0
*result = &NT3::Cc_check::`vftable'{for `NT3::C_control'}
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, &NT3::Cc_check::`vftable'{for `NT3::C_control'}.vFunc_2, 6)
var_8_1.b = 1

if (&result[0x1e] != &var_2c)
    sub_52e3c0(&result[0x1e], &var_2c, 0, 0xffffffff)

if (var_18 u>= 8)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
