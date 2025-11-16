// 函数: sub_710780
// 地址: 0x710780
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d1182
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = 0
int32_t var_48 = 0
int32_t* eax_3 = *arg2
int32_t edx_2 = (arg2[1] - eax_3) s>> 2
int32_t var_44
char var_2c
void** eax_5
int32_t ebx_1

if (edx_2 == 0)
label_7107e8:
    eax_5 = (*(*arg5 + 4))(&var_2c)
    int32_t var_8_1 = 1
    ebx_1 = 2
else
    while (*eax_3 != arg4)
        ecx += 1
        eax_3 = &eax_3[1]
        
        if (ecx u>= edx_2)
            goto label_7107e8
    
    eax_5 = (*(*arg5 + 8))(&var_44)
    int32_t var_8_2 = 0
    ebx_1 = 1

*(arg3 + 0x14) = 0xf
*(arg3 + 0x10) = 0
int32_t var_48_1 = ebx_1
*arg3 = 0
sub_541b40(arg3, eax_5, 0, 0xffffffff)
int32_t ebx_2 = ebx_1 | 4

if ((ebx_2.b & 2) != 0)
    ebx_2 &= 0xfffffffd
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0

int32_t var_30

if ((ebx_2.b & 1) != 0 && var_30 u>= 0x10)
    j__free(var_44)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3
