// 函数: sub_5fdd0f
// 地址: 0x5fdd0f
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 0x14
int32_t var_8 = 0x62aac8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5f4b00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x62aac8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_38 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_38
void* const var_3c_3 = &data_5fdd1b
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
enum WIN32_ERROR result_1 = NO_ERROR
int32_t var_20 = 0
enum WIN32_ERROR result

if (arg1 != 0xfffffffe)
    int32_t eax_2
    int32_t ebx_3
    
    if (arg1 s>= 0 && arg1 u< data_20f34c8)
        eax_2 = arg1 s>> 5
        ebx_3 = (arg1 & 0x1f) << 6
    
    if (arg1 s< 0 || arg1 u>= data_20f34c8 || (sx.d(*(ebx_3 + (&data_640ff8)[eax_2] + 4)) & 1) == 0)
        *__errno() = 9
        __invalid_parameter_noinfo()
        result = ~NO_ERROR
    else
        ___lock_fhandle(arg1)
        int32_t var_8_1 = 0
        
        if ((*(ebx_3 + (&data_640ff8)[eax_2] + 4) & 1) == 0)
            goto label_5fddb5
        
        if (FlushFileBuffers(sub_5f9880(arg1)) == 0)
            result_1 = GetLastError()
        
        enum WIN32_ERROR result_2 = result_1
        
        if (result_1 != NO_ERROR)
            *___doserrno() = result_1
        label_5fddb5:
            *__errno() = 9
            result_1 = ~NO_ERROR
            int32_t var_20_1 = 0xffffffff
        
        int32_t var_8_2 = 0xfffffffe
        sub_5fddd7(arg1)
        result = result_1
else
    *__errno() = 9
    result = ~NO_ERROR

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_5fddf7
return result
