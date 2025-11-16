// 函数: ___set_fpsr_sse2
// 地址: 0x750d4d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0xb48f50
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb48f50 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30 = &data_750d59
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_b94f20 s>= 1)
    result = arg1
    
    if ((result.b & 0x40) == 0 || data_b4cd40 == 0)
        result &= 0xffffffbf
        arg1 = result
    else
        int32_t var_8_1 = 0
        int32_t var_8_2 = 0xfffffffe

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_750dc2
return result
