// 函数: ??_M@YGXPAXIHP6EX0@Z@Z
// 地址: 0x5f1807
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x62a690
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5f4b00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x62a690 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34 = &data_5f1813
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
int32_t edi = arg3
int32_t esi_1 = arg1 + arg2 * edi
arg1 = esi_1
int32_t var_8_1 = 0

while (true)
    int32_t temp1_1 = edi
    edi -= 1
    arg3 = edi
    
    if (temp1_1 - 1 s< 0)
        break
    
    esi_1 -= arg2
    arg1 = esi_1
    arg4()

int32_t var_20_1 = 1
int32_t var_8_2 = 0xfffffffe
int32_t result = $LN10(1, &__saved_ebp, esi_1, edi)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_5f1857
return result
