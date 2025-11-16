// 函数: sub_5f5a82
// 地址: 0x5f5a82
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 8
int32_t var_8 = 0x62a890
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5f4b00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x62a890 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_12 = &data_5f5a8e
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
    
    if (*(arg1 + 0x5c) != 0x607a68)
        _free(*(arg1 + 0x5c))
    
    __lock(0xd)
    int32_t var_8_1 = 0
    int32_t* ecx_9 = *(arg1 + 0x68)
    
    if (ecx_9 != 0)
        bool cond:0_1 = *ecx_9 != 1
        *ecx_9
        *ecx_9 -= 1
        
        if (not(cond:0_1) && ecx_9 != 0x63c088)
            _free(ecx_9)
    
    int32_t var_8_2 = 0xfffffffe
    sub_5f5ba2()
    __lock(0xc)
    int32_t var_8_3 = 1
    int32_t* edi_1 = *(arg1 + 0x6c)
    
    if (edi_1 != 0)
        sub_5f71e6(edi_1)
        
        if (edi_1 != data_63c50c && edi_1 != 0x63c510 && *edi_1 == 0)
            sub_5f708c(edi_1)
    
    int32_t var_8_4 = 0xfffffffe
    sub_5f5bae()
    result = _free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_5f5b9c
return result
