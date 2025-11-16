// 函数: sub_651a60
// 地址: 0x651a60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3ec0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t var_8_1 = 0

if (arg1[1] == 0)
    int32_t var_34 = arg5
    sub_5d53e0(arg1, arg2, 1, *arg1, arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2

int32_t* edi = *arg1
int32_t* ecx_3

if (arg3 == *edi)
    char eax_4
    eax_4, ecx_3 = sub_5cd6f0(arg4, &arg3[4])
    
    if (eax_4 != 0)
        int32_t var_34_1 = arg5
        sub_5d53e0(arg1, arg2, 1, arg3, ecx_3)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
else if (arg3 != edi)
    void** var_18
    
    if (sub_5cd6f0(arg4, &arg3[4]) != 0)
        var_18 = arg3
        sub_579b50(&var_18)
        void** ebx_1 = var_18
        char eax_9
        int32_t* ecx_14
        eax_9, ecx_14 = sub_5cd6f0(&ebx_1[4], arg4)
        
        if (eax_9 != 0)
            int32_t var_34_3 = arg5
            
            if (*(ebx_1[2] + 0xd) == 0)
                sub_5d53e0(arg1, arg2, 1, arg3, ecx_14)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg2
            
            sub_5d53e0(arg1, arg2, 0, ebx_1, ecx_14)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2
    
    char eax_13
    eax_13, ecx_3 = sub_5cd6f0(&arg3[4], arg4)
    
    if (eax_13 != 0)
        var_18 = arg3
        ecx_3 = sub_563d80(&var_18)
        void** ebx_2 = var_18
        char eax_14
        
        if (ebx_2 != edi)
            eax_14, ecx_3 = sub_5cd6f0(arg4, &ebx_2[4])
        
        if (ebx_2 == edi || eax_14 != 0)
            int32_t var_34_4 = arg5
            
            if (*(arg3[2] + 0xd) == 0)
                sub_5d53e0(arg1, arg2, 1, ebx_2, ecx_3)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg2
            
            sub_5d53e0(arg1, arg2, 0, arg3, ecx_3)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2
else
    void** esi_3 = edi[2]
    char eax_6
    eax_6, ecx_3 = sub_5cd6f0(&esi_3[4], arg4)
    
    if (eax_6 != 0)
        int32_t var_34_2 = arg5
        sub_5d53e0(arg1, arg2, 0, esi_3, ecx_3)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2

int32_t var_34_5 = arg5
int32_t var_8_2 = 0xffffffff
int16_t* var_38_5 = arg4
void* var_1c
*arg2 = *sub_5d50d0(arg1, &var_1c, ecx_3)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
