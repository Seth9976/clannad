// 函数: sub_758b5c
// 地址: 0x758b5c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0xb49130
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb49130 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_2 = &data_758b68
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
int32_t result

if (arg1 == 0xfffffffe)
    *___doserrno() = 0
    *__errno() = 9
    result = 0xffffffff
else if (arg1 s< 0 || arg1 u>= data_4ecd224)
    *___doserrno() = 0
label_758c5c:
    *__errno() = 9
    __invalid_parameter_noinfo()
    result = 0xffffffff
else
    int32_t ebx_2 = arg1 s>> 5
    int32_t edi_3 = (arg1 & 0x1f) << 6
    
    if ((sx.d(*((&data_b95720)[ebx_2] + edi_3 + 4)) & 1) == 0)
        *___doserrno() = 0
        goto label_758c5c
    
    if (sbb.d(0x7fffffff, 0x7fffffff, 0x7fffffff u< arg3) != 0xffffffff)
        ___lock_fhandle(arg1)
        int32_t var_8_1 = 0
        int32_t result_1
        
        if ((*((&data_b95720)[ebx_2] + edi_3 + 4) & 1) == 0)
            *__errno() = 9
            *___doserrno() = 0
            result_1 = 0xffffffff
        else
            result_1 = sub_758c70(arg1, arg2, arg3)
        
        int32_t result_2 = result_1
        int32_t var_8_2 = 0xfffffffe
        sub_758c48(arg1)
        result = result_1
    else
        *___doserrno() = 0
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_758c6f
return result
