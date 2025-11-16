// 函数: __locterm
// 地址: 0x74755d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2 = 8
int32_t var_8 = 0xb48cd8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb48cd8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30 = &data_747569
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_b4cb2c != 0xb4cb30)
    __lock(0xc)
    int32_t var_8_1 = 0
    data_b4cb2c = __updatetlocinfoEx_nolock(&data_b4cb2c, 0xb4cb30)
    int32_t var_8_2 = 0xfffffffe
    result = $LN11()

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_7475a5
return result
