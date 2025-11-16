// 函数: sub_53a220
// 地址: 0x53a220
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b04f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = arg3
int32_t var_8_1 = 0
int32_t arg_4

if (result != arg2)
    int16_t* esi_1 = result + 0x1c
    
    do
        int32_t eax_3
        
        if (*esi_1 != 0)
            int16_t* eax_4 = esi_1
            
            do
                arg3.w = *eax_4
                eax_4 = &eax_4[1]
            while (arg3.w != 0)
            
            eax_3 = (eax_4 - &eax_4[1]) s>> 1
        else
            eax_3 = 0
        
        int32_t var_24_1 = eax_3
        int32_t eax_6
        eax_6, arg3 = sub_536340(&arg_4, arg3, arg4, esi_1)
        
        if (eax_6 == 0)
            break
        
        result += 0x11c
        esi_1 = &esi_1[0x8e]
    while (result != arg2)

if (arg5 u>= 8)
    j__free(arg_4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
