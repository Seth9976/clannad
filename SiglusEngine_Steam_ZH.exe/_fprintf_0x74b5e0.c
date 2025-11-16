// 函数: _fprintf
// 地址: 0x74b5e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0xb48e20
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb48e20 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_3 = &data_74b5ec
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1 = nullptr
int32_t var_20 = 0
int32_t* edi = arg1
int32_t eax
eax.b = edi != 0
int32_t eax_2

if (eax != 0)
    eax_2.b = arg2 != 0

int32_t* result

if (eax == 0 || eax_2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff
else
    arg1 = edi
    __lock_file(edi)
    int32_t var_8_1 = 0
    
    if ((edi[3].b & 0x40) == 0)
        int32_t eax_3 = __fileno(edi)
        void* eax_6
        
        if (eax_3 == 0xffffffff || eax_3 == 0xfffffffe)
            eax_6 = &data_b4ce70
        else
            eax_6 = ((eax_3 & 0x1f) << 6) + (&data_b95720)[eax_3 s>> 5]
        
        void* edx_4
        
        if ((*(eax_6 + 0x24) & 0x7f) == 0)
            if (eax_3 == 0xffffffff || eax_3 == 0xfffffffe)
                edx_4 = &data_b4ce70
            else
                edx_4 = ((eax_3 & 0x1f) << 6) + (&data_b95720)[eax_3 s>> 5]
        
        if ((*(eax_6 + 0x24) & 0x7f) != 0 || (*(edx_4 + 0x24) & 0x80) != 0)
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            result_1 = 0xffffffff
            int32_t var_20_1 = 0xffffffff
    
    if (result_1 == 0)
        int32_t eax_10 = __stbuf(edi)
        void arg_c
        result_1 = sub_74eaf0(edi, arg2, result_1, &arg_c)
        int32_t* result_2 = result_1
        __ftbuf(eax_10, edi)
    
    int32_t var_8_2 = 0xfffffffe
    sub_74b6ea(edi)
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_74b6e3
return result
