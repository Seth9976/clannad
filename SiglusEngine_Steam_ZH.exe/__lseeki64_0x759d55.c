// 函数: __lseeki64
// 地址: 0x759d55
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 0x18
int32_t var_8 = 0xb49170
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb49170 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_3c = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_3c
void* const var_40_2 = &data_759d61
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0xffffffff
int32_t var_2c = 0xffffffff
int32_t var_28 = 0xffffffff

if (arg1 != 0xfffffffe)
    int32_t eax_3
    int32_t ebx_3
    
    if (arg1 s>= 0 && arg1 u< data_4ecd224)
        eax_3 = arg1 s>> 5
        ebx_3 = (arg1 & 0x1f) << 6
    
    if (arg1 s< 0 || arg1 u>= data_4ecd224 || (sx.d(*((&data_b95720)[eax_3] + ebx_3 + 4)) & 1) == 0)
        *___doserrno() = 0
        *__errno() = 9
        __invalid_parameter_noinfo()
    else
        int32_t edx = ___lock_fhandle(arg1)
        int32_t var_8_1 = 0
        int32_t eax_8 = (&data_b95720)[eax_3]
        int32_t ebx_4
        
        if ((*(eax_8 + ebx_3 + 4) & 1) == 0)
            *__errno() = 9
            *___doserrno() = 0
            ebx_4 = 0xffffffff
        else
            int32_t result_2
            int32_t edx_1
            result_2, edx_1 = __lseeki64_nolock(eax_8, edx, arg1, arg1, arg2, arg3, arg4)
            result = result_2
            ebx_4 = edx_1
        
        int32_t result_1 = result
        int32_t var_28_1 = ebx_4
        int32_t var_8_2 = 0xfffffffe
        sub_759e27(arg1)
else
    *___doserrno() = 0
    *__errno() = 9

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_759e50
return result
