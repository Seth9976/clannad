// 函数: sub_61b3b0
// 地址: 0x61b3b0
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
        operator new[](&var_138)
        var_160 = &var_138
        int32_t ecx_16 = sub_61b5f0(arg1, var_160, arg2)
        int32_t var_15c_11 = ecx_16
        int32_t var_140
        var_160 = &var_140
        float ecx_18 = sub_6fd020(data_4ebe2d4, ecx_16, 0)
        int32_t var_15c_12 = 0
        var_160 = nullptr
        int32_t var_164_1 = var_140
        void var_16c
        char eax_4 = sub_6f01c0(&var_138, 0, ecx_18, 0, var_16c)
        int32_t* ecx_20 = data_4ebe2d4
        
        if (eax_4 == 0)
            sub_6fd140(ecx_20)
        label_61b5b9:
            int32_t var_8_3 = 0xffffffff
            sub_6efc80(&var_138)
            result = sub_6122c0(arg1, 1) != 0
        else
            sub_6fd140(ecx_20)
            sub_6f5d30(*(arg1 + 0x1b90))
            sub_6f5e50(*(arg1 + 0x1ba4))
            void* eax_5 = data_bac4a0
            int32_t var_14c_1 = 0
            int32_t var_148_1 = *(eax_5 + 8)
            int32_t var_144_1 = *(eax_5 + 0xc)
            int32_t* var_15c_15 = &var_138
            *(arg1 + 0x1a60) = 0.o
            
            if (sub_6133f0(arg1) != 0)
                goto label_61b5b9
            
            int32_t var_8_2 = 0xffffffff
            sub_6efc80(&var_138)
            result = false

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
