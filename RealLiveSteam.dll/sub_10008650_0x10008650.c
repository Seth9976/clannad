// 函数: sub_10008650
// 地址: 0x10008650
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x10016048
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004350
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x10016048 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_1000865c
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
uint32_t* eax = __getptd()
int32_t* result

if ((eax[0x1c] & data_10017e08) == 0 || eax[0x1b] == 0)
    __lock(0xd)
    int32_t var_8_1 = 0
    result = eax[0x1a]
    int32_t* result_1 = result
    
    if (result != data_10017aec)
        if (result != 0)
            bool cond:0_1 = *result != 1
            *result
            *result -= 1
            
            if (not(cond:0_1) && result != &data_100178c8)
                _free(result)
        
        eax[0x1a] = data_10017aec
        result = data_10017aec
        int32_t* result_2 = result
        *result
        *result += 1
    
    int32_t var_8_2 = 0xfffffffe
    sub_100086ed()
else
    result = eax[0x1a]

if (result == 0)
    __amsg_exit(0x20)
    noreturn

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_1000868e
return result
