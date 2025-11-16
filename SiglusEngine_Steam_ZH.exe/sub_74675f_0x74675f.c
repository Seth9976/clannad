// 函数: sub_74675f
// 地址: 0x74675f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2 = 0x10
int32_t var_8 = 0xb48b88
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb48b88 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38 = &data_74676b
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = 0
int32_t var_20 = 0
int32_t var_24 = 0
int32_t var_8_1 = 0

while (esi s< arg3)
    arg4()
    arg1 += arg2
    esi += 1
    int32_t var_20_1 = esi

int32_t var_24_1 = 1
int32_t var_8_2 = 0xfffffffe
int32_t result = sub_7467ad(1, &__saved_ebp, esi)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_7467a4
return result
