// 函数: __mtinitlocknum
// 地址: 0x100063d3
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x10015fc8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004350
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x10015fc8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_1 = &data_100063df
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_1001b094 == 0)
    __FF_MSGBANNER()
    __NMSG_WRITE(0x1e)
    ___crtExitProcess(0xff)
    noreturn

int32_t result

if (*((arg1 << 3) + &data_10017320) != 0)
    result = 1
else
    CRITICAL_SECTION* eax = sub_1000425a(0x18)
    
    if (eax != 0)
        __lock(0xa)
        int32_t var_8_1 = 0
        
        if (*((arg1 << 3) + &data_10017320) != 0)
            _free(eax)
        else
            sub_10005b7b(eax, 0xfa0, 0)
            *((arg1 << 3) + &data_10017320) = eax
        
        int32_t var_8_2 = 0xfffffffe
        sub_10006473()
        result = 1
    else
        *__errno() = 0xc
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_10006472
return result
