// 函数: sub_607640
// 地址: 0x607640
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be471
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg3
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg2
int32_t* ebx = arg4

if (ebx == 0 || ebx == 1)
    arg4 = arg2
    int32_t var_8_1 = 0
    
    if (arg2 != 0)
        int32_t eax_5 = arg3[2]
        arg2[2] = eax_5
        *arg2 = 0
        int32_t* eax_6
        int32_t* ecx_6
        
        if (eax_5 u> 8)
            int32_t var_28_1 = eax_5
            eax_6 = sub_7431ed()
            *arg2 = eax_6
            ecx_6 = *arg3
        else
            eax_6 = arg2
            ecx_6 = arg3
        
        sub_748840(eax_6, ecx_6, arg2[2], eax_2)
        eax_3 = arg3[3]
        arg2[3] = eax_3
    
    if (ebx == 1 && arg3[2] u> 8)
        eax_3 = *arg3
        goto label_60772b
else
    if (ebx != 2)
        if (ebx != 3)
            *arg2 = &data_b91ed8
            arg2[1].w = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_3
        
        char eax_4 = type_info::operator==(*arg2, &data_b91ed8)
        int32_t* ecx_1 = nullptr
        
        if (eax_4 != 0)
            ecx_1 = arg3
        
        *arg2 = ecx_1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    if (arg2[2] u> 8)
        eax_3 = *arg2
    label_60772b:
        
        if (eax_3 != 0)
            eax_3 = j__free(eax_3)

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
