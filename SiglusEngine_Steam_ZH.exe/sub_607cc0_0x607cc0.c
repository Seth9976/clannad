// 函数: sub_607cc0
// 地址: 0x607cc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be4d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
char* result = arg2
char* ecx_1 = arg3 - result
int32_t edi = arg1[4]

if (edi u<= ecx_1 && arg1[5] != ecx_1)
    if (sub_541df0(arg1, ecx_1, 1) != 0)
        bool cond:0_1 = arg1[5] u< 0x10
        arg1[4] = edi
        int32_t* eax_4
        
        if (cond:0_1)
            eax_4 = arg1
        else
            eax_4 = *arg1
        
        *(eax_4 + edi) = 0
    
    result = arg2

int32_t var_8_1 = 0

while (result != arg3)
    sub_607d90(arg1, 1, *result)
    result = &arg2[1]
    arg2 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
