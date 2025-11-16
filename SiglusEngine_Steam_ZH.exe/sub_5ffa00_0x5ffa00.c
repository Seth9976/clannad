// 函数: sub_5ffa00
// 地址: 0x5ffa00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd8b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* arg_20
sub_6ae600(&arg_20)
int32_t* eax_3

if (*(arg1 + 0xb4) u< 8)
    eax_3 = arg1 + 0xa0
else
    eax_3 = *(arg1 + 0xa0)

int32_t var_2c = *(arg1 + 0xb0)
int32_t result = sub_536340(&arg_20, &arg_20, arg9, eax_3)

if (result != 0 || *(arg1 + 0xc4) == 0 || arg2.b == 0)
    sub_5ffd00(arg1, arg5)
    char eax_4 = arg7
    
    if (arg8 s> 0)
        eax_4 = 1
    
    int16_t* eax_5 = sub_6768d0(&arg_20)
    int32_t ecx_6 = (*(arg1 + 0xd4) + 1) & 0x80000001
    
    if (ecx_6 s< 0)
        ecx_6 = ((ecx_6 - 1) | 0xfffffffe) + 1
    
    result = sub_603f70(ecx_6 * 0x15c + *(arg1 + 0xc8), eax_5, arg2, arg4, arg6, eax_4.d)
    
    if (result.b != 0)
        *(arg1 + 0xd4) = ecx_6
        
        if (arg1 + 0xa0 != &arg_20)
            sub_52e3c0(arg1 + 0xa0, &arg_20, 0, 0xffffffff)
        
        *(arg1 + 0xbc) = arg8
        *(arg1 + 0xc0) = arg4
        result.b = arg7
        *(arg1 + 0xc4) = arg2.b
        *(arg1 + 0xc5) = result.b
        
        if (arg3 != 0)
            result = sub_5ffe30(arg1, 0, 0)

if (arg10 u>= 8)
    result = j__free(arg_20)

fsbase->NtTib.ExceptionList = ExceptionList
return result
