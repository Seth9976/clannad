// 函数: ___lock_fhandle
// 地址: 0x75e750
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0xb49298
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb49298 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_1 = &data_75e75c
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi_3 = ((arg1 & 0x1f) << 6) + (&data_b95720)[arg1 s>> 5]

if (*(esi_3 + 8) == 0)
    __lock(0xa)
    int32_t var_8_1 = 0
    
    if (*(esi_3 + 8) == 0)
        sub_74d1a6(esi_3 + 0xc, 0xfa0, 0)
        *(esi_3 + 8) += 1
    
    int32_t var_8_2 = 0xfffffffe
    sub_75e7d5()

EnterCriticalSection((&data_b95720)[arg1 s>> 5] + 0xc + ((arg1 & 0x1f) << 6))
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_75e7d1
return 1
