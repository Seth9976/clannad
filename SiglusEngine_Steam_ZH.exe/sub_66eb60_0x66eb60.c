// 函数: sub_66eb60
// 地址: 0x66eb60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be471
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg3
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg2
int32_t* edi = arg4

if (edi == 0 || edi == 1)
    arg4 = arg2
    int32_t var_8_1 = 0
    
    if (arg2 != 0)
        eax_3 = sub_66b2c0(arg2, arg3)
    
    if (edi == 1 && arg3[4] u> 8)
        eax_3 = *arg3
        goto label_66ec15
else
    if (edi != 2)
        if (edi != 3)
            *arg2 = &data_b93a30
            arg2[1].w = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_3
        
        char eax_4 = type_info::operator==(*arg2, &data_b93a30)
        int32_t* ecx_1 = nullptr
        
        if (eax_4 != 0)
            ecx_1 = arg3
        
        *arg2 = ecx_1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    if (arg2[4] u> 8)
        eax_3 = *arg2
    label_66ec15:
        
        if (eax_3 != 0)
            eax_3 = j__free(eax_3)

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
