// 函数: sub_6059a0
// 地址: 0x6059a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be0e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0
int32_t var_44 = arg2
int32_t var_8_1 = 0
int32_t* var_50
int32_t* edi = &var_50
var_50 = nullptr
int32_t* arg_4
int32_t* eax_4

if (arg4 u> 8)
    void* var_54_1 = arg4
    int32_t* eax_5 = sub_7431ed()
    var_50 = eax_5
    edi = eax_5
    eax_4 = arg_4
else
    eax_4 = &arg_4

sub_748840(edi, eax_4, arg4)
int32_t var_4c
int32_t var_28
int32_t* eax_6 = sub_605d80(&var_28, var_50, var_4c)
var_8_1.b = 1
int32_t eax_7 = eax_6[2]
arg3[2] = eax_7
*arg3 = 0
int32_t* eax_8
int32_t* ecx_1

if (eax_7 u> 8)
    int32_t var_44_1 = eax_7
    eax_8 = sub_7431ed()
    *arg3 = eax_8
    ecx_1 = *eax_6
else
    eax_8 = arg3
    ecx_1 = eax_6

sub_748840(eax_8, ecx_1, arg3[2], eax_2)
arg3[3] = eax_6[3]
int32_t var_20

if (var_20 u> 8)
    int32_t eax_10 = var_28
    
    if (eax_10 != 0)
        j__free(eax_10)

if (arg4 u> 8)
    int32_t* eax_11 = arg_4
    
    if (eax_11 != 0)
        j__free(eax_11)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3
