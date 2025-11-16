// 函数: sub_55fac0
// 地址: 0x55fac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2b4e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_198 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = *arg2
int32_t eax_3 = *arg3
void* ecx

if (edx != 0)
    int32_t var_188
    
    if (edx == 2)
        if (eax_3 == 0)
            void* eax_13 = data_bac4a0
            sub_5cac60(ecx, arg3[1] + 0xc, 0, 0, *(eax_13 + 8), *(eax_13 + 0xc))
        else if (eax_3 == 1)
            void* eax_12 = arg3[1]
            sub_5cac60(ecx, eax_12 + 0xc, *(eax_12 + 0x16c), *(eax_12 + 0x2d0), *(eax_12 + 0x434), 
                *(eax_12 + 0x598))
        
        sub_54aed0(&var_188)
        int32_t var_8_1 = 0
        goto label_55fbac
    
    if (edx == 3)
        if (eax_3 == 0)
            void* eax_18 = data_bac4a0
            sub_5cac60(ecx, arg3[1] + 0xc, 0, 0, *(eax_18 + 8), *(eax_18 + 0xc))
        else if (eax_3 == 1)
            void* eax_17 = arg3[1]
            sub_5cac60(ecx, eax_17 + 0xc, *(eax_17 + 0x16c), *(eax_17 + 0x2d0), *(eax_17 + 0x434), 
                *(eax_17 + 0x598))
        
        sub_54aed0(&var_188)
        int32_t var_8_2 = 1
        char var_48_1 = 1
    label_55fbac:
        var_188 = 0x22
        void var_2f0
        sub_54cf80(&var_2f0, &var_188)
        sub_6766e0()
        void var_fc
        sub_54ae40(&var_fc)
    else if (edx != 1)
        void* var_19c_5 = 0x15
        int32_t var_1c_1 = 7
        void* const var_1a0_5 = &data_ad8f38
        int32_t var_20_1 = 0
        int16_t var_30 = 0
        sub_52e720(&var_30, var_1a0_5, var_19c_5)
        int32_t var_8_3 = 2
        sub_684160(data_bac424, 2, &var_30)
        sub_52e8a0(&var_30)
    else
        sub_5cacb0(ecx)
else if (eax_3 == edx)
    void* eax_7 = data_bac4a0
    sub_5cac60(ecx, arg3[1] + 0xc, 0, 0, *(eax_7 + 8), *(eax_7 + 0xc))
else if (eax_3 - edx == 1)
    void* eax_5 = arg3[1]
    sub_5cac60(ecx, eax_5 + 0xc, *(eax_5 + 0x16c), *(eax_5 + 0x2d0), *(eax_5 + 0x434), 
        *(eax_5 + 0x598))
struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
