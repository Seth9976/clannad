// 函数: sub_763199
// 地址: 0x763199
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0xb493e8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb493e8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_7631a5
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
int32_t eax
eax.b = arg1 != 0
int32_t eax_2

if (eax != 0)
    eax_2 = _strnlen(arg1, 0x7fff)

void* result

if (eax == 0 || neg.d(sbb.d(eax_2, eax_2, eax_2 u< 0x7fff)) == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = nullptr
else
    __lock(7)
    int32_t var_8_1 = 0
    void* result_1 = __getenv_helper_nolock(arg1)
    void* result_2 = result_1
    int32_t var_8_2 = 0xfffffffe
    sub_763210()
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_76320c
return result
