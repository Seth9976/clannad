// 函数: __mtinitlocknum
// 地址: 0x753e9d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0xb48f70
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb48f70 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_1 = &data_753ea9
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_b955a4 == 0)
    __FF_MSGBANNER()
    __NMSG_WRITE(0x1e)
    ___crtExitProcess(0xff)
    noreturn

int32_t result

if (*((arg1 << 3) + &data_b4cd50) != 0)
    result = 1
else
    CRITICAL_SECTION* eax = sub_74cd17(0x18)
    
    if (eax != 0)
        __lock(0xa)
        int32_t var_8_1 = 0
        
        if (*((arg1 << 3) + &data_b4cd50) != 0)
            _free(eax)
        else
            sub_74d1a6(eax, 0xfa0, 0)
            *((arg1 << 3) + &data_b4cd50) = eax
        
        int32_t var_8_2 = 0xfffffffe
        sub_753f3d()
        result = 1
    else
        *__errno() = 0xc
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_753f3c
return result
