// 函数: sub_606db0
// 地址: 0x606db0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be338
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
*arg1 = 0
int32_t* var_30 = nullptr
int32_t* arg_4
int32_t* eax_4
int32_t* ecx

if (arg2 u> 8)
    void* var_34_1 = arg2
    eax_4 = sub_7431ed()
    var_30 = eax_4
    ecx = arg_4
else
    eax_4 = &var_30
    ecx = &arg_4

sub_748840(eax_4, ecx, arg2)
int32_t var_24 = arg3
sub_607350(arg1)

if (arg2 u> 8)
    int32_t* ecx_2 = arg_4
    
    if (ecx_2 != 0)
        j__free(ecx_2)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
