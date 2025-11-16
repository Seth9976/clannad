// 函数: sub_74e284
// 地址: 0x74e284
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0xb48ef0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb48ef0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_74e290
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
uint32_t* eax = __getptd()
int32_t* result

if ((eax[0x1c] & data_b4cbf0) == 0 || eax[0x1b] == 0)
    __lock(0xc)
    int32_t var_8_1 = 0
    result = __updatetlocinfoEx_nolock(&eax[0x1b], data_b4cb2c)
    int32_t* result_1 = result
    int32_t var_8_2 = 0xfffffffe
    sub_74e2fb()
else
    result = __getptd()[0x1b]

if (result == 0)
    __amsg_exit(0x20)
    noreturn

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_74e2c7
return result
