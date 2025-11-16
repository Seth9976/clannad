// 函数: sub_61aa50
// 地址: 0x61aa50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf93b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_158 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
bool result

if (sub_611f60(1) == 0)
    result = false
else if (sub_6120a0(2) == 0)
    result = false
else if (sub_6120a0(1) == 0)
    result = false
else if (sub_612220(1) == 0)
    result = false
else if (sub_612000(arg1, 1) == 0)
    result = false
else if (sub_612160(2) == 0)
    result = false
else if (sub_611bf0(arg1) == 0)
    result = false
else
    sub_6f60f0(sub_614c50(arg1 + 0x1aec))
    
    if (sub_612000(arg1, 1) == 0)
        result = false
    else if (sub_612160(1) == 0)
        result = false
    else
        int32_t var_138
        sub_6efae0(&var_138)
        int32_t var_8_1 = 0
        int32_t* var_15c_9 = &var_138
        var_138 = 2
        sub_611e70(arg1, var_15c_9)
        int32_t* var_160
        sub_54d950(&var_160, &data_4ebe2d4)
        operator new(&var_138, var_160)
        sub_54d950(&var_160, &data_4ebe2ec)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_4 = operator new[](&var_138)
        int32_t var_15c_10 = 0xff
        var_160 = 0x10000
        char var_bc_1 = sub_5b08c0(eax_4, 0, arg2, 0, var_160, var_15c_10)
        int32_t var_140
        var_160 = &var_140
        float ecx_17 = sub_6fd020(data_4ebe2d4, arg2, 0)
        int32_t var_15c_11 = 0
        var_160 = nullptr
        int32_t var_164_1 = var_140
        void var_16c
        char eax_6 = sub_6f01c0(&var_138, 0, ecx_17, 0, var_16c)
        int32_t* ecx_19 = data_4ebe2d4
        
        if (eax_6 == 0)
            sub_6fd140(ecx_19)
        label_61ac66:
            int32_t var_8_3 = 0xffffffff
            sub_6efc80(&var_138)
            result = sub_6122c0(arg1, 1) != 0
        else
            sub_6fd140(ecx_19)
            sub_6f5d30(*(arg1 + 0x1b90))
            sub_6f5e50(*(arg1 + 0x1ba4))
            void* eax_7 = data_bac4a0
            int32_t var_14c_1 = 0
            int32_t var_148_1 = *(eax_7 + 8)
            int32_t var_144_1 = *(eax_7 + 0xc)
            int32_t* var_15c_14 = &var_138
            *(arg1 + 0x1a60) = 0.o
            
            if (sub_6133f0(arg1) != 0)
                goto label_61ac66
            
            int32_t var_8_2 = 0xffffffff
            sub_6efc80(&var_138)
            result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
