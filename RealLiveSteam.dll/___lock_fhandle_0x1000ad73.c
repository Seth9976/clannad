// 函数: ___lock_fhandle
// 地址: 0x1000ad73
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x10016130
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004350
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x10016130 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_1 = &data_1000ad7f
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi_3 = ((arg1 & 0x1f) << 6) + (&data_1001b0a0)[arg1 s>> 5]

if (*(esi_3 + 8) == 0)
    __lock(0xa)
    int32_t var_8_1 = 0
    
    if (*(esi_3 + 8) == 0)
        sub_10005b7b(esi_3 + 0xc, 0xfa0, 0)
        *(esi_3 + 8) += 1
    
    int32_t var_8_2 = 0xfffffffe
    sub_1000adf8()

EnterCriticalSection((&data_1001b0a0)[arg1 s>> 5] + 0xc + ((arg1 & 0x1f) << 6))
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_1000adf4
return 1
