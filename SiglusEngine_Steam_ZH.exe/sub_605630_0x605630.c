// 函数: sub_605630
// 地址: 0x605630
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be0a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void var_44
void* var_14 = &var_44
void* var_50
int32_t* esi = &var_50
var_50 = nullptr
int32_t* arg_4
int32_t* eax_5

if (arg4 u> 8)
    void* var_54_1 = arg4
    void* eax_6 = sub_7431ed()
    var_50 = eax_6
    esi = eax_6
    eax_5 = arg_4
else
    eax_5 = &arg_4

int32_t* result =
    sub_605ab0(sub_6059a0(sub_748840(esi, eax_5, arg4), arg5, var_14, var_50), arg2, arg3)

if (arg4 u> 8)
    int32_t* eax_9 = arg_4
    
    if (eax_9 != 0)
        j__free(eax_9)

fsbase->NtTib.ExceptionList = ExceptionList
return result
