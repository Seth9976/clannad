// 函数: sub_66b010
// 地址: 0x66b010
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6220
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t var_8_1 = 0

if (arg1[1] == 0)
    int32_t var_30 = arg5
    sub_66b770(arg1, arg2, 1, *arg1, arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2

int32_t* ecx_2 = *arg1
int32_t* ecx_5

if (arg3 == *ecx_2)
    int32_t ecx_3 = arg3[8]
    void* eax_5 = &arg3[4]
    
    if (*(eax_5 + 0x14) u>= 8)
        eax_5 = *eax_5
    
    int32_t var_30_1 = ecx_3
    int32_t eax_7
    eax_7, ecx_5 = sub_536340(arg4, ecx_3, *(arg4 + 0x10), eax_5)
    
    if (eax_7 s< 0)
        int32_t var_30_2 = arg5
        sub_66b770(arg1, arg2, 1, arg3, ecx_5)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
else if (arg3 != ecx_2)
    char eax_15 = sub_5c39d0(arg4, &arg3[4])
    void** var_18
    char eax_18
    void** esi_4
    
    if (eax_15 != 0)
        var_18 = arg3
        sub_579b50(&var_18)
        esi_4 = var_18
        eax_18 = sub_5c39d0(&esi_4[4], arg4)
    
    int32_t* var_34_6
    int32_t* ecx_13
    
    if (eax_15 != 0 && eax_18 != 0)
        int32_t var_30_7 = arg5
        var_34_6 = nullptr
        ecx_13 = arg1
        
        if (*(esi_4[2] + 0xd) != 0)
            goto label_66b157
        
        sub_66b770(ecx_13, arg2, 1, arg3, nullptr)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    char eax_24
    eax_24, ecx_5 = sub_5c39d0(&arg3[4], arg4)
    
    if (eax_24 != 0)
        esi_4 = arg3
        var_18 = esi_4
        ecx_5 = sub_563d80(&var_18)
        void** edi_2 = var_18
        
        if (edi_2 == *arg1)
            goto label_66b1d2
        
        char eax_26
        eax_26, ecx_5 = sub_5c39d0(arg4, &edi_2[4])
        
        if (eax_26 != 0)
            esi_4 = arg3
        label_66b1d2:
            int32_t var_30_10 = arg5
            var_34_6 = ecx_5
            ecx_13 = arg1
            
            if (*(esi_4[2] + 0xd) == 0)
                sub_66b770(ecx_13, arg2, 1, edi_2, var_34_6)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg2
            
        label_66b157:
            sub_66b770(ecx_13, arg2, 0, esi_4, var_34_6)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2
else
    char eax_11
    eax_11, ecx_5 = sub_5c39d0(ecx_2[2] + 0x10, arg4)
    
    if (eax_11 != 0)
        int32_t var_30_4 = arg5
        sub_66b770(arg1, arg2, 0, *(*arg1 + 8), nullptr)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2

int32_t var_30_11 = arg5
int32_t var_8_2 = 0xffffffff
void* var_34_9 = arg4
void* var_1c
*arg2 = *sub_66a9a0(arg1, &var_1c, ecx_5)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
