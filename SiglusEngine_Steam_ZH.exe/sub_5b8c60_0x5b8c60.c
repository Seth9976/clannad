// 函数: sub_5b8c60
// 地址: 0x5b8c60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0f88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (*(arg1 + 0xc0) == 0)
    result.b = 0
else
    int32_t ecx = *(arg1 + 0xb0)
    int32_t edx_1 = 0
    
    if (ecx s<= 0)
    label_5b8cc2:
        edx_1 = 0xffffffff
    else
        result = *(arg1 + 0xb8)
        
        while (*result != arg2)
            edx_1 += 1
            result = &result[1]
            
            if (edx_1 s>= ecx)
                goto label_5b8cc2
    
    int32_t esi_2 = *(arg1 + 0xb4)
    int32_t ecx_1 = 0
    
    if (esi_2 s<= 0)
    label_5b8cec:
        ecx_1 = 0xffffffff
    else
        result = *(arg1 + 0xbc)
        
        while (*result != arg3)
            ecx_1 += 1
            result = &result[2]
            
            if (ecx_1 s>= esi_2)
                goto label_5b8cec
    
    if (edx_1 == 0xffffffff || ecx_1 == 0xffffffff || (*(arg1 + 0xbc))[ecx_1 * 2 + 1] != 0x53)
        result.b = 0
    else
        void var_30
        int16_t* eax_5 =
            sub_5b8a90(arg1, &var_30, *(*(arg1 + 0xc0) + ((esi_2 * edx_1 + ecx_1) << 2)))
        int32_t var_8_1 = 0
        
        if (arg4 != eax_5)
            sub_52e3c0(arg4, eax_5, 0, 0xffffffff)
        
        sub_52e8a0(&var_30)
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
