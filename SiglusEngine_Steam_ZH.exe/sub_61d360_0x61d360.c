// 函数: sub_61d360
// 地址: 0x61d360
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bfa56
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_2cc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = *data_bac450
void var_2e0
int32_t var_2b8
int32_t* ecx_26

if (result == 0xd2 || result == 0xd3)
    int32_t var_2b4
    sub_6efae0(&var_2b4)
    int32_t var_8_3 = 0
    var_2b4 = 2
    sub_611e70(arg1, &var_2b4)
    int32_t eax_14 = data_4ebe2d4
    int32_t* eax_15 = data_4ebe2d8
    
    if (eax_15 != 0)
        eax_15[1]
        eax_15[1] += 1
    
    operator new(&var_2b4, eax_14, eax_15)
    int32_t eax_17 = data_4ebe2ec
    int32_t* eax_18 = data_4ebe2f0
    
    if (eax_18 != 0)
        eax_18[1]
        eax_18[1] += 1
    
    operator new[](&var_2b4, eax_17, eax_18)
    int32_t ecx_17 = sub_61d6d0(&var_2b4, arg2)
    int32_t var_2d0_14 = ecx_17
    int32_t var_2bc
    int32_t* var_2d4_9 = &var_2bc
    float ecx_19 = sub_6fd020(data_4ebe2d4, ecx_17, 0)
    int32_t var_2d0_15 = 0
    int32_t var_2d4_10 = 0
    int32_t var_2d8_3 = var_2bc
    char eax_20 = sub_6f01c0(&var_2b4, 0, ecx_19, 0, var_2e0)
    int32_t* ecx_21 = data_4ebe2d4
    
    if (eax_20 == 0)
        sub_6fd140(ecx_21)
    label_61d696:
        ecx_26 = &var_2b4
    label_61d69c:
        int32_t var_8_5 = 0xffffffff
        sub_6efc80(ecx_26)
        result.b = 1
    else
        sub_6fd140(ecx_21)
        sub_6f5d30(*(arg1 + 0x1b90))
        sub_6f5e50(*(arg1 + 0x1ba4))
        void* eax_21 = data_bac4a0
        int32_t var_20_2 = 0
        int32_t var_1c_2 = *(eax_21 + 8)
        int32_t var_18_2 = *(eax_21 + 0xc)
        *(arg1 + 0x1a60) = 0.o
        *(arg1 + 0x1adc) = *(arg1 + 0x1ad8)
        var_2b8 = &var_2b4
        sub_530ba0(arg1 + 0x1ad8, &var_2b8)
        
        if (sub_6f6480(arg1 + 0x90) != 0)
            goto label_61d696
        
        int32_t var_8_4 = 0xffffffff
        sub_6efc80(&var_2b4)
        result.b = 0
else if (result == 0xd4 || result == 0xd5 || result == 0xd6 || result == 0xd7)
    int32_t var_194
    sub_6efae0(&var_194)
    int32_t var_8_1 = 1
    var_194 = 2
    sub_611e70(arg1, &var_194)
    int32_t eax_4 = data_4ebe2d4
    int32_t* eax_5 = data_4ebe2d8
    
    if (eax_5 != 0)
        eax_5[1]
        eax_5[1] += 1
    
    operator new(&var_194, eax_4, eax_5)
    int32_t eax_7 = data_4ebe2ec
    int32_t* eax_8 = data_4ebe2f0
    
    if (eax_8 != 0)
        eax_8[1]
        eax_8[1] += 1
    
    operator new[](&var_194, eax_7, eax_8)
    void var_74
    void var_34
    int32_t ecx_5 = sub_61d9e0(&var_74, &var_34, &var_194, arg2)
    int32_t var_2d0_5 = ecx_5
    int32_t* var_2d4_4 = &var_2b8
    float ecx_7 = sub_6fd020(data_4ebe2d4, ecx_5, 0)
    void* var_2d0_6 = &var_34
    void* var_2d4_5 = &var_74
    int32_t var_2d8_2 = var_2b8
    char eax_10 = sub_6f01c0(&var_194, 0, ecx_7, 0, var_2e0)
    int32_t* ecx_9 = data_4ebe2d4
    
    if (eax_10 == 0)
        sub_6fd140(ecx_9)
        ecx_26 = &var_194
        goto label_61d69c
    
    sub_6fd140(ecx_9)
    sub_6f5d30(*(arg1 + 0x1b90))
    sub_6f5e50(*(arg1 + 0x1ba4))
    void* eax_11 = data_bac4a0
    int32_t var_20_1 = 0
    int32_t var_1c_1 = *(eax_11 + 8)
    int32_t var_18_1 = *(eax_11 + 0xc)
    int32_t* var_2d0_9 = &var_194
    *(arg1 + 0x1a60) = 0.o
    
    if (sub_6133f0(arg1) != 0)
        ecx_26 = &var_194
        goto label_61d69c
    
    int32_t var_8_2 = 0xffffffff
    sub_6efc80(&var_194)
    result.b = 0
else
    result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
