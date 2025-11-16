// 函数: sub_5f1a5e
// 地址: 0x5f1a5e
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2 = 0x10
int32_t var_8 = 0x62a748
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5f4b00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x62a748 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38 = &data_5f1a6a
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
int32_t result = sub_5f1aac(1, &__saved_ebp, esi)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_5f1aa3
return result
