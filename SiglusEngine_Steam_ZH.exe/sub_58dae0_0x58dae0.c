// 函数: sub_58dae0
// 地址: 0x58dae0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_9b7a30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_148
int32_t eax_2 = __security_cookie ^ &var_148
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != 0)
    void* eax_5 = data_bac4c8
    int32_t* ecx = data_bac42c
    int32_t edx_1 = *ecx
    int32_t edi_1 = ecx[1]
    int32_t ecx_1 = *(eax_5 + 0xc)
    int32_t var_a8_1 = ecx_1
    int32_t ecx_2 = *(eax_5 + 0x10)
    int32_t var_a4_1 = ecx_2
    int32_t ecx_3 = *(eax_5 + 0x14)
    int32_t ecx_4 = *(eax_5 + 8)
    int32_t var_9c_1 = ecx_4
    int32_t ecx_5 = *(eax_5 + 0x5c)
    int32_t var_98_1 = ecx_5
    int32_t ecx_6 = *(eax_5 + 0x60)
    int32_t var_94_1 = ecx_6
    int32_t ecx_7 = *(eax_5 + 0x64)
    int32_t eax_6 = *(eax_5 + 0x58)
    int32_t var_8c_1 = eax_6
    int32_t* eax_7 = data_bac490
    int32_t var_ac_1 = edi_1
    int32_t ecx_8 = *eax_7
    int32_t var_88_1 = ecx_8
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = eax_7[1]
    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result_1
    int32_t ecx_9 = eax_7[3]
    int32_t ecx_10 = eax_7[4]
    int32_t var_7c_1 = ecx_10
    int32_t ecx_11 = eax_7[5]
    int32_t var_78_1 = ecx_11
    int32_t ecx_12 = eax_7[2]
    int32_t var_74_1 = ecx_12
    int32_t ecx_13 = eax_7[0x17]
    int32_t ecx_14 = eax_7[0x18]
    int32_t var_6c_1 = ecx_14
    int32_t ecx_15 = eax_7[0x19]
    int32_t eax_8 = eax_7[0x16]
    int32_t var_68_1 = ecx_15
    int32_t* ecx_16 = data_bac42c
    int32_t var_64_1 = eax_8
    int32_t var_54
    int32_t var_40
    
    if (*(arg1 + 0xb8) != 0 || edx_1 != *(arg1 + 0x414) || edi_1 != *(arg1 + 0x418))
        int16_t* eax_9 = sub_6adc60(eax_8, edx_1, &var_54, *ecx_16, ecx_16[1])
        int32_t var_14_1 = 0
        ecx_16 = *(data_bac4e0 + 0x34)
        
        if (ecx_16 != 0)
            ecx_16 = ecx_16(*(arg1 + 0xe4), 0, 1, eax_9, eax_4)
        
        int32_t var_14_2 = 0xffffffff
        
        if (var_40 u>= 8)
            ecx_16 = j__free(var_54)
    
    if (*(arg1 + 0xb8) != 0 || ecx_1 != *(arg1 + 0x41c))
        int32_t* var_158_4 = ecx_16
        int16_t* eax_11 = sub_6ad9b0(&var_54)
        int32_t var_14_3 = 1
        ecx_16 = *(data_bac4e0 + 0x34)
        
        if (ecx_16 != 0)
            ecx_16 = ecx_16(*(arg1 + 0xe4), 1, 1, eax_11, eax_4)
        
        int32_t var_14_4 = 0xffffffff
        
        if (var_40 u>= 8)
            ecx_16 = j__free(var_54)
    
    if (*(arg1 + 0xb8) != 0 || ecx_2 != *(arg1 + 0x420))
        int32_t* var_158_7 = ecx_16
        int16_t* eax_12 = sub_6ad9b0(&var_54)
        int32_t var_14_5 = 2
        ecx_16 = *(data_bac4e0 + 0x34)
        
        if (ecx_16 != 0)
            ecx_16 = ecx_16(*(arg1 + 0xe4), 2, 1, eax_12, eax_4)
        
        int32_t var_14_6 = 0xffffffff
        
        if (var_40 u>= 8)
            ecx_16 = j__free(var_54)
    
    if (*(arg1 + 0xb8) != 0 || ecx_3 != *(arg1 + 0x424))
        int32_t* var_158_10 = ecx_16
        int16_t* eax_13 = sub_6ad9b0(&var_54)
        int32_t var_14_7 = 3
        ecx_16 = *(data_bac4e0 + 0x34)
        
        if (ecx_16 != 0)
            ecx_16 = ecx_16(*(arg1 + 0xe4), 3, 1, eax_13, eax_4)
        
        int32_t var_14_8 = 0xffffffff
        
        if (var_40 u>= 8)
            ecx_16 = j__free(var_54)
    
    if (*(arg1 + 0xb8) != 0 || ecx_4 != *(arg1 + 0x428))
        int32_t* var_158_13 = ecx_16
        int16_t* eax_14 = sub_6ad9b0(&var_54)
        int32_t var_14_9 = 4
        ecx_16 = *(data_bac4e0 + 0x34)
        
        if (ecx_16 != 0)
            ecx_16 = ecx_16(*(arg1 + 0xe4), 4, 1, eax_14, eax_4)
        
        int32_t var_14_10 = 0xffffffff
        
        if (var_40 u>= 8)
            ecx_16 = j__free(var_54)
    
    if (*(arg1 + 0xb8) != 0 || ecx_5 != *(arg1 + 0x42c))
        int32_t* var_158_16 = ecx_16
        int16_t* eax_15 = sub_6ad9b0(&var_54)
        int32_t var_14_11 = 5
        ecx_16 = *(data_bac4e0 + 0x34)
        
        if (ecx_16 != 0)
            ecx_16 = ecx_16(*(arg1 + 0xe4), 5, 1, eax_15, eax_4)
        
        int32_t var_14_12 = 0xffffffff
        
        if (var_40 u>= 8)
            ecx_16 = j__free(var_54)
    
    if (*(arg1 + 0xb8) != 0 || ecx_6 != *(arg1 + 0x430))
        int32_t* var_158_19 = ecx_16
        int16_t* eax_16 = sub_6ad9b0(&var_54)
        int32_t var_14_13 = 6
        ecx_16 = *(data_bac4e0 + 0x34)
        
        if (ecx_16 != 0)
            ecx_16 = ecx_16(*(arg1 + 0xe4), 6, 1, eax_16, eax_4)
        
        int32_t var_14_14 = 0xffffffff
        
        if (var_40 u>= 8)
            ecx_16 = j__free(var_54)
    
    if (*(arg1 + 0xb8) != 0 || ecx_7 != *(arg1 + 0x434))
        int32_t* var_158_22 = ecx_16
        int16_t* eax_17 = sub_6ad9b0(&var_54)
        int32_t var_14_15 = 7
        ecx_16 = *(data_bac4e0 + 0x34)
        
        if (ecx_16 != 0)
            ecx_16 = ecx_16(*(arg1 + 0xe4), 7, 1, eax_17, eax_4)
        
        int32_t var_14_16 = 0xffffffff
        
        if (var_40 u>= 8)
            ecx_16 = j__free(var_54)
    
    int32_t edx_9 = eax_6
    
    if (*(arg1 + 0xb8) != 0 || edx_9 != *(arg1 + 0x438))
        int32_t* var_158_25 = ecx_16
        int16_t* eax_18
        eax_18, edx_9 = sub_6ad9b0(&var_54)
        int32_t var_14_17 = 8
        int32_t ecx_35 = *(data_bac4e0 + 0x34)
        
        if (ecx_35 != 0)
            edx_9 = ecx_35(*(arg1 + 0xe4), 8, 1, eax_18, eax_4)
        
        int32_t var_14_18 = 0xffffffff
        
        if (var_40 u>= 8)
            edx_9 = j__free(var_54)
    
    int32_t ecx_36 = ecx_8
    result = result_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_36 != *(arg1 + 0x43c) || result != *(arg1 + 0x440))
        result = sub_6adc60(result, edx_9, &var_54, ecx_36, result)
        int32_t var_14_19 = 9
        ecx_36 = *(data_bac4e0 + 0x34)
        
        if (ecx_36 != 0)
            result, ecx_36 = ecx_36(*(arg1 + 0xe4), 9, 1, result, eax_4)
        
        int32_t var_14_20 = 0xffffffff
        
        if (var_40 u>= 8)
            result, ecx_36 = j__free(var_54)
    
    if (*(arg1 + 0xb8) != 0 || ecx_9 != *(arg1 + 0x444))
        int32_t var_158_31 = ecx_36
        result = sub_6ad9b0(&var_54)
        int32_t var_14_21 = 0xa
        ecx_36 = *(data_bac4e0 + 0x34)
        
        if (ecx_36 != 0)
            result, ecx_36 = ecx_36(*(arg1 + 0xe4), 0xa, 1, result, eax_4)
        
        int32_t var_14_22 = 0xffffffff
        
        if (var_40 u>= 8)
            result, ecx_36 = j__free(var_54)
    
    if (*(arg1 + 0xb8) != 0 || ecx_10 != *(arg1 + 0x448))
        int32_t var_158_34 = ecx_36
        result = sub_6ad9b0(&var_54)
        int32_t var_14_23 = 0xb
        ecx_36 = *(data_bac4e0 + 0x34)
        
        if (ecx_36 != 0)
            result, ecx_36 = ecx_36(*(arg1 + 0xe4), 0xb, 1, result, eax_4)
        
        int32_t var_14_24 = 0xffffffff
        
        if (var_40 u>= 8)
            result, ecx_36 = j__free(var_54)
    
    if (*(arg1 + 0xb8) != 0 || ecx_11 != *(arg1 + 0x44c))
        int32_t var_158_37 = ecx_36
        result = sub_6ad9b0(&var_54)
        int32_t var_14_25 = 0xc
        ecx_36 = *(data_bac4e0 + 0x34)
        
        if (ecx_36 != 0)
            result, ecx_36 = ecx_36(*(arg1 + 0xe4), 0xc, 1, result, eax_4)
        
        int32_t var_14_26 = 0xffffffff
        
        if (var_40 u>= 8)
            result, ecx_36 = j__free(var_54)
    
    if (*(arg1 + 0xb8) != 0 || ecx_12 != *(arg1 + 0x450))
        int32_t var_158_40 = ecx_36
        result = sub_6ad9b0(&var_54)
        int32_t var_14_27 = 0xd
        ecx_36 = *(data_bac4e0 + 0x34)
        
        if (ecx_36 != 0)
            result, ecx_36 = ecx_36(*(arg1 + 0xe4), 0xd, 1, result, eax_4)
        
        int32_t var_14_28 = 0xffffffff
        
        if (var_40 u>= 8)
            result, ecx_36 = j__free(var_54)
    
    if (*(arg1 + 0xb8) != 0 || ecx_13 != *(arg1 + 0x454))
        int32_t var_158_43 = ecx_36
        result = sub_6ad9b0(&var_54)
        int32_t var_14_29 = 0xe
        ecx_36 = *(data_bac4e0 + 0x34)
        
        if (ecx_36 != 0)
            result, ecx_36 = ecx_36(*(arg1 + 0xe4), 0xe, 1, result, eax_4)
        
        int32_t var_14_30 = 0xffffffff
        
        if (var_40 u>= 8)
            result, ecx_36 = j__free(var_54)
    
    if (*(arg1 + 0xb8) != 0 || ecx_14 != *(arg1 + 0x458))
        int32_t var_158_46 = ecx_36
        result = sub_6ad9b0(&var_54)
        int32_t var_14_31 = 0xf
        ecx_36 = *(data_bac4e0 + 0x34)
        
        if (ecx_36 != 0)
            result, ecx_36 = ecx_36(*(arg1 + 0xe4), 0xf, 1, result, eax_4)
        
        int32_t var_14_32 = 0xffffffff
        
        if (var_40 u>= 8)
            result, ecx_36 = j__free(var_54)
    
    if (*(arg1 + 0xb8) != 0 || ecx_15 != *(arg1 + 0x45c))
        int32_t var_158_49 = ecx_36
        result = sub_6ad9b0(&var_54)
        int32_t var_14_33 = 0x10
        ecx_36 = *(data_bac4e0 + 0x34)
        
        if (ecx_36 != 0)
            result, ecx_36 = ecx_36(*(arg1 + 0xe4), 0x10, 1, result, eax_4)
        
        int32_t var_14_34 = 0xffffffff
        
        if (var_40 u>= 8)
            result, ecx_36 = j__free(var_54)
    
    if (*(arg1 + 0xb8) != 0 || eax_8 != *(arg1 + 0x460))
        int32_t var_158_52 = ecx_36
        int32_t var_3c
        result = sub_6ad9b0(&var_3c)
        int32_t var_14_35 = 0x11
        int32_t ecx_55 = *(data_bac4e0 + 0x34)
        
        if (ecx_55 != 0)
            result = ecx_55(*(arg1 + 0xe4), 0x11, 1, result, eax_4)
        
        int32_t var_28
        
        if (var_28 u>= 8)
            result = j__free(var_3c)
    
    *(arg1 + 0xb8) = 0
    *(arg1 + 0x414) = edx_1.o
    *(arg1 + 0x424) = ecx_3.o
    *(arg1 + 0x434) = ecx_7.o
    *(arg1 + 0x444) = ecx_9.o
    *(arg1 + 0x454) = ecx_13.o

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_148)
return result
