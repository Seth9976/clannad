// 函数: sub_10005086
// 地址: 0x10005086
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x10015f38
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004350
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x10015f38 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_12 = &data_10005092
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0)
    if (*(arg1 + 0x24) != 0)
        _free(*(arg1 + 0x24))
    
    if (*(arg1 + 0x2c) != 0)
        _free(*(arg1 + 0x2c))
    
    if (*(arg1 + 0x34) != 0)
        _free(*(arg1 + 0x34))
    
    if (*(arg1 + 0x3c) != 0)
        _free(*(arg1 + 0x3c))
    
    if (*(arg1 + 0x40) != 0)
        _free(*(arg1 + 0x40))
    
    if (*(arg1 + 0x44) != 0)
        _free(*(arg1 + 0x44))
    
    if (*(arg1 + 0x48) != 0)
        _free(*(arg1 + 0x48))
    
    if (*(arg1 + 0x5c) != 0x10010de8)
        _free(*(arg1 + 0x5c))
    
    __lock(0xd)
    int32_t var_8_1 = 0
    int32_t* ecx_9 = *(arg1 + 0x68)
    
    if (ecx_9 != 0)
        bool cond:0_1 = *ecx_9 != 1
        *ecx_9
        *ecx_9 -= 1
        
        if (not(cond:0_1) && ecx_9 != &data_100178c8)
            _free(ecx_9)
    
    int32_t var_8_2 = 0xfffffffe
    sub_100051a6()
    __lock(0xc)
    int32_t var_8_3 = 1
    int32_t* edi_1 = *(arg1 + 0x6c)
    
    if (edi_1 != 0)
        sub_1000822e(edi_1)
        
        if (edi_1 != data_10017d4c && edi_1 != 0x10017d50 && *edi_1 == 0)
            sub_100080d4(edi_1)
    
    int32_t var_8_4 = 0xfffffffe
    sub_100051b2()
    result = _free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_100051a0
return result
