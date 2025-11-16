// 函数: sub_66d850
// 地址: 0x66d850
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6388
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
*arg1 = 0
int32_t* var_38 = nullptr
int32_t* arg_4
int32_t* ecx
int32_t* edx

if (arg2 u> 8)
    int32_t ecx_1
    ecx_1.b = mulu.dp.d(arg2, 2) u>> 0x20 != 0
    int32_t var_3c_1 = neg.d(ecx_1) | (arg2 * 2)
    ecx = sub_7431ed()
    var_38 = ecx
    edx = arg_4
else
    ecx = &var_38
    edx = &arg_4

sub_748840(ecx, edx, arg2 * 2)
int32_t var_24 = arg3
sub_66e240(arg1)

if (arg2 u> 8)
    int32_t* ecx_5 = arg_4
    
    if (ecx_5 != 0)
        j__free(ecx_5)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
