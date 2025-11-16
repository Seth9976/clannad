// 函数: sub_614070
// 地址: 0x614070
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf078
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg3
int32_t* edi = arg4
int32_t* esi_1 = arg6

if (ebx != arg2 && edi != arg5)
    bool cond:1_1
    
    do
        int32_t var_3c
        int32_t* var_18_1 = &var_3c
        var_3c = *ebx
        void var_38
        sub_5b5160(&var_38, &ebx[1])
        int32_t var_8_1 = 0
        int32_t eax_6 = *edi
        void var_48
        sub_5b5160(&var_48, &edi[1])
        int32_t var_8_2 = 0xffffffff
        int32_t* ecx_2 = esi_1
        esi_1 = &esi_1[4]
        
        if (arg7(eax_6) == 0)
            *ecx_2 = *ebx
            eax_3 = sub_6143d0(&ecx_2[1], &ebx[1])
            ebx = &ebx[4]
            cond:1_1 = ebx != arg2
        else
            *ecx_2 = *edi
            eax_3 = sub_6143d0(&ecx_2[1], &edi[1])
            edi = &edi[4]
            cond:1_1 = edi != arg5
    while (cond:1_1)

int32_t* eax_13 = sub_614780(eax_3, arg2, ebx, esi_1)
int32_t* result = sub_614780(eax_13, arg5, edi, eax_13)
fsbase->NtTib.ExceptionList = ExceptionList
return result
