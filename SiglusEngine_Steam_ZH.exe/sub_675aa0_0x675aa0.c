// 函数: sub_675aa0
// 地址: 0x675aa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6d30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t i = data_bac500
int32_t** result = data_4ebe320
int32_t* var_1c = &data_4ebe31c

if (i u> result)
    int32_t ebx_1 = 0
    int32_t var_8_1 = 0
    
    while (true)
        int32_t var_18_1 = ebx_1
        
        if (result u>= i)
            break
        
        int32_t* edi_1 = data_4ebe31c
        int32_t* eax_3 = sub_675ed0(edi_1, edi_1[1])
        int32_t eax_4 = data_4ebe320
        
        if (0xc565c7 - eax_4 u< 1)
            sub_743191("list<T> too long")
            noreturn
        
        ebx_1 += 1
        data_4ebe320 = eax_4 + 1
        edi_1[1] = eax_3
        *eax_3[1] = eax_3
        result = data_4ebe320
else if (i u< result)
    do
        result = sub_675b90(&var_1c, *(data_4ebe31c + 4))
    while (i u< data_4ebe320)

fsbase->NtTib.ExceptionList = ExceptionList
return result
