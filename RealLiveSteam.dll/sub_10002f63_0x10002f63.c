// 函数: sub_10002f63
// 地址: 0x10002f63
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t __saved_ebp_2 = 8
int32_t var_8 = 0x10015e98
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004350
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x10015e98 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_2c
void* const var_30_3 = &data_10002f6f
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg1 == 1)
    if (sub_100041c4() != 0)
        if (__mtinit() != 0)
            __RTC_Initialize()
            data_1001c59c = GetCommandLineA()
            data_1001a6e4 = ___crtGetEnvironmentStringsA()
            
            if (sub_100053be() s< 0)
                goto label_10002fba
            
            if (__setargv(&data_10005668) s< 0)
            label_10002fea:
                sub_10005672()
            label_10002fba:
                __mtterm()
                sub_100041d9()
                result = 0
            else
                if (__setenvp() s< 0)
                    goto label_10002fea
                
                if (sub_10003d41(0) != 0)
                    goto label_10002fea
                
                data_1001a6e0 += 1
                result = 1
        else
            sub_100041d9()
            result = 0
    else
        result = 0
else if (arg1 == 0)
    int32_t eax_9 = data_1001a6e0
    
    if (eax_9 s<= 0)
        result = 0
    else
        data_1001a6e0 = eax_9 - 1
        int32_t var_8_1 = 0
        
        if (data_1001aa54 == 0)
            __cexit()
        
        sub_10003c09()
        
        if (arg2 == 0)
            sub_10005672()
            __mtterm()
            sub_100041d9()
        
        int32_t var_8_2 = 0xfffffffe
        $LN28(arg2)
        result = 1
else if (arg1 != 2)
    if (arg1 == 3)
        ___vcrt_freeptd(nullptr)
    
    result = 1
else if (sub_10005b3a(data_100172cc) != 0)
    result = 1
else
    uint32_t* eax_12 = sub_10004212(1, 0x3bc)
    
    if (eax_12 == 0)
        result = 0
    else if (sub_10005b59(data_100172cc, eax_12) == 0)
        _free(eax_12)
        result = 0
    else
        __initptd(eax_12, 0)
        *eax_12 = GetCurrentThreadId()
        eax_12[1] = 0xffffffff
        result = 1

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_100030d2
return result
