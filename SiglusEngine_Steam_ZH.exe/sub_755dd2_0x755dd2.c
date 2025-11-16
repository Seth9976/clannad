// 函数: sub_755dd2
// 地址: 0x755dd2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 0x30
int32_t var_8 = 0xb48fd8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0xb48fd8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_54 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_54
void* const var_58_2 = &data_755dde
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = arg5
int32_t var_3c = 0
int32_t var_2c = arg2[-1]
void var_44
int32_t* var_30 = __CreateFrameInfo(&var_44, arg1[6])
int32_t var_34 = __getptd()[0x22]
int32_t var_38 = __getptd()[0x23]
__getptd()[0x22] = arg1
__getptd()[0x23] = arg3
int32_t var_8_1 = 0
arg3 = 1
int32_t var_8_2 = 1
int32_t var_20_1 = _CallCatchBlock2(arg2, arg4, arg5, arg6, arg7)
int32_t var_8_3 = 0
int32_t var_8_4 = 0xfffffffe
arg3 = 0
$LN16(&__saved_ebp, arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_755f12
return arg2
