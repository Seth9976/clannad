// 函数: sub_70e5a0
// 地址: 0x70e5a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d0bb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t arg_8
void** eax_3 = sub_6700c0(arg1 + 0x1c, &arg_8)
char eax_5

if (eax_3 != *(arg1 + 0x1c))
    eax_5 = sub_670200(&arg_8, &eax_3[4])

void** var_34

if (eax_3 == *(arg1 + 0x1c) || eax_5 != 0)
    var_34 = *(arg1 + 0x1c)
else
    var_34 = eax_3

void** result
int32_t* ebx

if (var_34 == *(arg1 + 0x1c))
    ebx.b = 0
else
    int32_t var_30
    result = (*(*var_34[0xa] + 4))(&var_30)
    var_8_1.b = 1
    
    if (arg2 != result)
        sub_541b40(arg2, result, 0, 0xffffffff)
    
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        j__free(var_30)
    
    ebx.b = 1

if (arg3 u>= 0x10)
    j__free(arg_8)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
