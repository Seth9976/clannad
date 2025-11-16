// 函数: sub_74a122
// 地址: 0x74a122
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2 = 0x10
int32_t var_8 = 0xb48db8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb48db8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_2 = &data_74a12e
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_24 = 0
int32_t var_20 = 0
int32_t eax
eax.b = arg1 != 0
void* result

if (eax != 0)
    __lock_file(arg1)
    int32_t var_8_1 = 0
    void* result_1
    int32_t edx_1
    result_1, edx_1 = __ftelli64_nolock(arg1)
    void* result_2 = result_1
    int32_t var_20_1 = edx_1
    int32_t var_8_2 = 0xfffffffe
    sub_74a195(arg1)
    result = result_1
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_74a18b
return result
