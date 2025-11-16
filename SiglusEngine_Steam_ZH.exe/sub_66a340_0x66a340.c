// 函数: sub_66a340
// 地址: 0x66a340
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c60e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0
int32_t var_4c = arg2
int32_t var_8_1 = 0
int32_t* var_60
int32_t* edi = &var_60
var_60 = nullptr
int32_t* arg_4
int32_t* ecx

if (arg4 u> 8)
    int32_t ecx_1
    ecx_1.b = mulu.dp.d(arg4, 2) u>> 0x20 != 0
    int32_t var_64_1 = neg.d(ecx_1) | (arg4 * 2)
    int32_t* eax_5 = sub_7431ed()
    var_60 = eax_5
    ecx = arg_4
    edi = eax_5
else
    ecx = &arg_4

sub_748840(edi, ecx, arg4 * 2)
var_8_1.b = 1
int32_t var_30
sub_66b2c0(arg3, sub_66b380(&var_30))
int32_t var_20

if (var_20 u> 8)
    int32_t eax_9 = var_30
    
    if (eax_9 != 0)
        j__free(eax_9)

if (arg4 u> 8)
    int32_t* ecx_6 = arg_4
    
    if (ecx_6 != 0)
        j__free(ecx_6)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3
