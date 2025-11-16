// 函数: __wfsopen
// 地址: 0x7499cc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0xb48d18
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb48d18 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_7499d8
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
int32_t* edi = arg1
int32_t eax
eax.b = edi != 0
int32_t* result

if (eax != 0)
    int32_t eax_2
    eax_2.b = arg2 != 0
    
    if (eax_2 == 0)
        goto label_7499f0
    
    int32_t eax_3
    eax_3.b = *arg2 != 0
    
    if (eax_3 == 0)
        goto label_7499f0
    
    int32_t* eax_4 = __getstream()
    arg1 = eax_4
    
    if (eax_4 != 0)
        int32_t var_8_1 = 0
        
        if (*edi != 0)
            int32_t* result_1 = sub_75847b(edi, arg2, arg3, eax_4)
            int32_t* result_2 = result_1
            int32_t var_8_2 = 0xfffffffe
            $LN12(eax_4)
            result = result_1
        else
            *__errno() = 0x16
            __local_unwind4(&__security_cookie, &ExceptionList, 0xfffffffe)
            result = nullptr
    else
        *__errno() = 0x18
        result = nullptr
else
label_7499f0:
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_749a87
return result
