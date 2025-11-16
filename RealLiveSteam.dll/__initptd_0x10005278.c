// 函数: __initptd
// 地址: 0x10005278
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x10015f60
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004350
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x10015f60 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_2 = &data_10005284
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x5c) = 0x10010de8
*(arg1 + 8) = 0
*(arg1 + 0x14) = 1
*(arg1 + 0x70) = 1
int32_t var_30 = 0x43
*(arg1 + 0xb8) = 0x43
*(arg1 + 0x1be) = 0x43
*(arg1 + 0x68) = &data_100178c8
*(arg1 + 0x3b8) = 0
__lock(0xd)
int32_t var_8_1 = 0
int32_t* eax = *(arg1 + 0x68)
*eax
*eax += 1
int32_t var_8_2 = 0xfffffffe
sub_10005319()
__lock(0xc)
int32_t var_8_3 = 1
*(arg1 + 0x6c) = arg2

if (arg2 == 0)
    *(arg1 + 0x6c) = data_10017d4c

sub_1000803f(*(arg1 + 0x6c))
int32_t var_8_4 = 0xfffffffe
int32_t result = sub_10005322()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_10005312
return result
