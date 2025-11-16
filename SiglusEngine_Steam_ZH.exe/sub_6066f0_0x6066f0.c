// 函数: sub_6066f0
// 地址: 0x6066f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be368
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char** var_14 = arg3
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* var_30
int32_t* edi = &var_30
var_30 = nullptr
int32_t* arg_c
int32_t* eax_4

if (arg6 u> 8)
    int32_t* var_34_1 = arg6
    int32_t* eax_5 = sub_7431ed()
    var_30 = eax_5
    edi = eax_5
    eax_4 = arg_c
else
    eax_4 = &arg_c

char* eax_7 = sub_607040(sub_748840(edi, eax_4, arg6), arg5, arg4, var_30)
arg4 = eax_7
*arg3 = eax_7

if (arg6 u> 8)
    int32_t* eax_8 = arg_c
    
    if (eax_8 != 0)
        j__free(eax_8)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
