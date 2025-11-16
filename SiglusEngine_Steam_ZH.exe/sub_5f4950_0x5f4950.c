// 函数: sub_5f4950
// 地址: 0x5f4950
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bcbb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* arg_4
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x1ac) == 5)
    int32_t* eax_3 = &arg_4
    int32_t var_20_1 = arg2
    
    if (arg3 u>= 8)
        eax_3 = arg_4
    
    result = sub_536340(arg1 + 0xd74, arg1 + 0xd74, *(arg1 + 0xd84), eax_3)

int32_t ebx

if (*(arg1 + 0x1ac) == 5 && result == 0)
    ebx.b = 1
else
    sub_5e5060(arg1, 1)
    *(arg1 + 0x1ac) = 5
    
    if (arg1 + 0xd74 != &arg_4)
        sub_52e3c0(arg1 + 0xd74, &arg_4, 0, 0xffffffff)
    
    if (sub_5f4a10(arg1).b != 0)
        ebx.b = 1
    else
        ebx.b = 0

if (arg3 u>= 8)
    j__free(arg_4)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
