// 函数: sub_559bd0
// 地址: 0x559bd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b14a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *arg1
uint32_t* result

if (eax_3 == 0)
    void* eax_4 = data_bac4bc
    sub_677bb0((*(eax_4 + 0xa8) - *(eax_4 + 0xa4)) s>> 2)
else if (eax_3 == 2)
    void* ecx_3 = *(arg2 + 4)
    int32_t ebx
    ebx.b = *(ecx_3 + 0x16c) != 0
    result = sub_6768d0(ecx_3 + 0xc)
    
    if (result != 0xffffffff)
        void* ecx_5 = data_bac4bc
        void* var_38_1 = ecx_5
        result = sub_55b0d0(ecx_5 + 4, result)
        
        if (result != 0)
            *result = zx.d(ebx.b)
else if (eax_3 == 4)
    void* eax_5
    eax_5.b = *(*(arg2 + 4) + 8) != 0
    sub_67d330(eax_5.b)
else if (eax_3 != 1)
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 0xad8d5c, 0x1a)
    int32_t var_8_1 = 0
    sub_684160(data_bac424, 2, &var_2c)
    sub_52e8a0(&var_2c)
else
    *(arg2 + 4)
    sub_677bb0(sub_60bb30())

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
