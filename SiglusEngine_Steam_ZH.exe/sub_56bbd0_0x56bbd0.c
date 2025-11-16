// 函数: sub_56bbd0
// 地址: 0x56bbd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_9b3882
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_e8
int32_t eax_2 = __security_cookie ^ &var_e8
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != 0)
    result = data_bac4e8
    int32_t edi_1 = result[1]
    struct _EXCEPTION_REGISTRATION_RECORD* ecx = *result
    int32_t edx_2 = result[0xc] - result[0xb]
    int32_t var_b8_1 = edi_1
    int32_t edi_2 = result[2]
    struct _EXCEPTION_REGISTRATION_RECORD* var_d4_1 = ecx
    struct _EXCEPTION_REGISTRATION_RECORD* var_bc_1 = ecx
    ecx.b = result[0xa].b
    int32_t var_b4_1 = edi_2
    int32_t edi_3 = result[3]
    result.b = *(result + 0x29)
    int32_t edx_3 = edx_2 s>> 2
    char var_dc_1 = ecx.b
    char var_ac_1 = ecx.b
    struct _EXCEPTION_REGISTRATION_RECORD* ecx_1 = var_d4_1
    char var_d5_1 = result.b
    char var_ab_1 = result.b
    int32_t var_9c
    int32_t var_88
    
    if (*(arg1 + 0xb8) != 0 || edx_3 != *(arg1 + 0x414))
        struct _EXCEPTION_REGISTRATION_RECORD* var_f8_1 = ecx_1
        result = sub_6ad9b0(&var_9c)
        int32_t var_14_1 = 0
        int32_t ecx_4 = *(data_bac4e0 + 0x34)
        
        if (ecx_4 != 0)
            ecx_4(*(arg1 + 0xe4), 0, 1, result, eax_4)
        
        int32_t var_14_2 = 0xffffffff
        
        if (var_88 u>= 8)
            j__free(var_9c)
        
        ecx_1 = var_d4_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_1 != *(arg1 + 0x418))
        struct _EXCEPTION_REGISTRATION_RECORD* var_f8_4 = ecx_1
        result = sub_6ad9b0(&var_9c)
        int32_t var_14_3 = 1
        ecx_1 = *(data_bac4e0 + 0x34)
        
        if (ecx_1 != 0)
            result, ecx_1 = ecx_1(*(arg1 + 0xe4), 1, 1, result, eax_4)
        
        int32_t var_14_4 = 0xffffffff
        
        if (var_88 u>= 8)
            result, ecx_1 = j__free(var_9c)
    
    if (*(arg1 + 0xb8) != 0 || edi_1 != *(arg1 + 0x41c))
        struct _EXCEPTION_REGISTRATION_RECORD* var_f8_7 = ecx_1
        result = sub_6ad9b0(&var_9c)
        int32_t var_14_5 = 2
        ecx_1 = *(data_bac4e0 + 0x34)
        
        if (ecx_1 != 0)
            result, ecx_1 = ecx_1(*(arg1 + 0xe4), 2, 1, result, eax_4)
        
        int32_t var_14_6 = 0xffffffff
        
        if (var_88 u>= 8)
            result, ecx_1 = j__free(var_9c)
    
    if (*(arg1 + 0xb8) != 0 || edi_2 != *(arg1 + 0x420))
        struct _EXCEPTION_REGISTRATION_RECORD* var_f8_10 = ecx_1
        result = sub_6ad9b0(&var_9c)
        int32_t var_14_7 = 3
        ecx_1 = *(data_bac4e0 + 0x34)
        
        if (ecx_1 != 0)
            result, ecx_1 = ecx_1(*(arg1 + 0xe4), 3, 1, result, eax_4)
        
        int32_t var_14_8 = 0xffffffff
        
        if (var_88 u>= 8)
            result, ecx_1 = j__free(var_9c)
    
    if (*(arg1 + 0xb8) != 0 || edi_3 != *(arg1 + 0x424))
        if (edi_3 == 0)
            var_88 = 7
            int32_t var_8c_1 = 0
            var_9c.w = 0
            sub_52e720(&var_9c, 0xad9384, 2)
            int32_t var_14_15 = 4
            result = *(data_bac4e0 + 0x34)
            
            if (result != 0)
                result, ecx_1 = result(*(arg1 + 0xe4), 4, 1, &var_9c, eax_4)
            
            int32_t var_14_16 = 0xffffffff
            
            if (var_88 u>= 8)
                result, ecx_1 = j__free(var_9c)
        else if (edi_3 == 1)
            int32_t var_70_1 = 7
            int32_t var_74_1 = 0
            int16_t var_84 = 0
            sub_52e720(&var_84, "S__0c0f0D0", 6)
            int32_t var_14_13 = 5
            result = *(data_bac4e0 + 0x34)
            
            if (result != 0)
                result, ecx_1 = result(*(arg1 + 0xe4), 4, 1, &var_84, eax_4)
            
            int32_t var_14_14 = 0xffffffff
            
            if (var_70_1 u>= 8)
                result, ecx_1 = j__free(var_84.d)
        else if (edi_3 == 2)
            int32_t var_58_1 = 7
            int32_t var_5c_1 = 0
            int16_t var_6c = 0
            sub_52e720(&var_6c, 0xad939c, 5)
            int32_t var_14_11 = 6
            result = *(data_bac4e0 + 0x34)
            
            if (result != 0)
                result, ecx_1 = result(*(arg1 + 0xe4), 4, 1, &var_6c, eax_4)
            
            int32_t var_14_12 = 0xffffffff
            
            if (var_58_1 u>= 8)
                result, ecx_1 = j__free(var_6c.d)
        else
            int32_t var_40_1 = 7
            int32_t var_44_1 = 0
            int16_t var_54 = 0
            sub_52e720(&var_54, &data_ad93bc, 3)
            int32_t var_14_9 = 7
            result = *(data_bac4e0 + 0x34)
            
            if (result != 0)
                result, ecx_1 = result(*(arg1 + 0xe4), 4, 1, &var_54, eax_4)
            
            int32_t var_14_10 = 0xffffffff
            
            if (var_40_1 u>= 8)
                result, ecx_1 = j__free(var_54.d)
    
    if (*(arg1 + 0xb8) == 0)
        result.b = var_dc_1
    
    if (*(arg1 + 0xb8) != 0 || result.b != *(arg1 + 0x428))
        int16_t* eax_9 = "S__0c0_0"
        
        if (var_dc_1 == 0)
            eax_9 = &data_ad7c90
        
        sub_52e820(&var_9c, eax_9)
        int32_t var_14_17 = 8
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_1 = result(*(arg1 + 0xe4), 5, 1, &var_9c, eax_4)
        
        int32_t var_14_18 = 0xffffffff
        
        if (var_88 u>= 8)
            result, ecx_1 = j__free(var_9c)
    
    ecx_1.b = var_d5_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_1.b != *(arg1 + 0x429))
        void* const eax_11 = &data_ad93b4
        
        if (ecx_1.b == 0)
            eax_11 = &data_ad7c90
        
        int32_t var_3c
        sub_52e820(&var_3c, eax_11)
        int32_t var_14_19 = 9
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result = result(*(arg1 + 0xe4), 6, 1, &var_3c, eax_4)
        
        int32_t var_28
        
        if (var_28 u>= 8)
            result = j__free(var_3c)
    
    *(arg1 + 0xb8) = 0
    *(arg1 + 0x414) = edx_3.o
    *(arg1 + 0x424) = edi_3.q

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_e8)
return result
