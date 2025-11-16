// 函数: sub_602140
// 地址: 0x602140
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bda48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
sub_6de670(arg1 + 0xf4, 1)
sub_676f90(0)
void* arg_28
int16_t* result = sub_6768d0(&arg_28)

if (result != 0xffffffff)
    result = sub_603f70(arg1 + 0xf4, result, arg2, arg4, 0xffffffff, arg10)
    
    if (result.b != 0)
        bool cond:0_1 = *(arg1 + 0xb4) u< 8
        void* eax_3 = arg1 + 0xa0
        *(eax_3 + 0x10) = 0
        
        if (not(cond:0_1))
            eax_3 = *eax_3
        
        *eax_3 = 0
        
        if (arg1 + 0xb8 != &arg_28)
            sub_52e3c0(arg1 + 0xb8, &arg_28, 0, 0xffffffff)
        
        *(arg1 + 0xd8) = arg5
        *(arg1 + 0xdc) = arg6
        *(arg1 + 0xe8) = arg4
        *(arg1 + 0xec) = arg2.b
        result.b = arg7
        *(arg1 + 0xed) = result.b
        result.b = arg8
        *(arg1 + 0xee) = result.b
        result.b = arg9
        *(arg1 + 0xd0) = 0xffffffff
        *(arg1 + 0xd4) = 0xffffffff
        *(arg1 + 0xe4) = 0
        *(arg1 + 0xef) = result.b
        *(arg1 + 0xf0) = arg10.b
        
        if (arg3 != 0)
            result = sub_602510(arg1, 0, 0)

if (arg11 u>= 8)
    result = j__free(arg_28)

fsbase->NtTib.ExceptionList = ExceptionList
return result
