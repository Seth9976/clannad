// 函数: sub_572cc0
// 地址: 0x572cc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b4249
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_d4
int32_t eax_2 = __security_cookie ^ &var_d4
int32_t __saved_esi
int32_t eax_4 = __security_cookie ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != 0)
    int32_t var_70_1 = 7
    int16_t* var_74_1 = nullptr
    int16_t var_84 = 0
    int32_t var_58_1 = 7
    int16_t* var_5c_1 = nullptr
    int16_t var_6c = 0
    int32_t var_40_1 = 7
    int16_t* var_44_1 = nullptr
    int16_t var_54 = 0
    int32_t var_28_1 = 7
    int16_t* var_2c_1 = nullptr
    int16_t var_3c = 0
    int32_t var_c_1 = 0
    int32_t var_88 = *(data_bac4a0 + 4)
    void** eax_7 = data_bac4d8
    
    if (&var_84 != eax_7)
        sub_52e3c0(&var_84, eax_7, 0, 0xffffffff)
        eax_7 = data_bac4d8
    
    if (&var_6c != &eax_7[6])
        sub_52e3c0(&var_6c, &eax_7[6], 0, 0xffffffff)
        eax_7 = data_bac4d8
    
    if (&var_54 != &eax_7[0xc])
        sub_52e3c0(&var_54, &eax_7[0xc], 0, 0xffffffff)
        eax_7 = data_bac4d8
    
    if (&var_3c != &eax_7[0x12])
        sub_52e3c0(&var_3c, &eax_7[0x12], 0, 0xffffffff)
    
    if (*(arg1 + 0xb8) != 0 || var_88 != *(arg1 + 0x414))
        int32_t eax_10 = var_88
        
        if (eax_10 == 0)
            int32_t var_a4_1 = 7
            int32_t var_a8_1 = 0
            int16_t var_b8 = 0
            sub_52e720(&var_b8, 0xaee2ec, 8)
            var_c_1.b = 1
            int32_t eax_18 = *(data_bac4e0 + 0x34)
            
            if (eax_18 != 0)
                eax_18(*(arg1 + 0xe4), 0, 1, &var_b8, eax_4)
            
            var_c_1.b = 0
            
            if (var_a4_1 u>= 8)
                j__free(var_b8.d)
            
            int32_t var_a4_2 = 7
            int32_t var_a8_2 = 0
            var_b8 = 0
        else if (eax_10 == 1)
            int32_t var_bc_1 = 7
            int32_t var_c0_1 = 0
            int16_t var_d0 = 0
            sub_52e720(&var_d0, 0xaee300, 8)
            var_c_1.b = 2
            int32_t eax_16 = *(data_bac4e0 + 0x34)
            
            if (eax_16 != 0)
                eax_16(*(arg1 + 0xe4), 0, 1, &var_d0, eax_4)
            
            var_c_1.b = 0
            
            if (var_bc_1 u>= 8)
                j__free(var_d0.d)
            
            int32_t var_bc_2 = 7
            int32_t var_c0_2 = 0
            var_d0 = 0
        else
            int32_t var_8c_1 = 7
            int32_t var_90_1 = 0
            int16_t var_a0 = 0
            sub_52e720(&var_a0, 0xaee314, 0xd)
            var_c_1.b = 3
            int32_t eax_14 = *(data_bac4e0 + 0x34)
            
            if (eax_14 != 0)
                eax_14(*(arg1 + 0xe4), 0, 1, &var_a0, eax_4)
            
            var_c_1.b = 0
            
            if (var_8c_1 u>= 8)
                j__free(var_a0.d)
            
            int32_t var_8c_2 = 7
            int32_t var_90_2 = 0
            var_a0 = 0
    
    int32_t eax_20
    
    if (*(arg1 + 0xb8) == 0)
        void* eax_19 = arg1 + 0x418
        int32_t ecx_9 = *(eax_19 + 0x10)
        
        if (*(arg1 + 0x42c) u>= 8)
            eax_19 = *eax_19
        
        int32_t var_e0_7 = ecx_9
        eax_20 = sub_536340(&var_84, ecx_9, var_74_1, eax_19)
    
    if (*(arg1 + 0xb8) != 0 || eax_20 != 0)
        int32_t eax_22 = *(data_bac4e0 + 0x34)
        
        if (eax_22 != 0)
            eax_22(*(arg1 + 0xe4), 1, 1, &var_84, eax_4)
    
    int32_t eax_24
    
    if (*(arg1 + 0xb8) == 0)
        void* eax_23 = arg1 + 0x430
        int32_t ecx_11 = *(eax_23 + 0x10)
        
        if (*(arg1 + 0x444) u>= 8)
            eax_23 = *eax_23
        
        int32_t var_e0_9 = ecx_11
        eax_24 = sub_536340(&var_6c, ecx_11, var_5c_1, eax_23)
    
    if (*(arg1 + 0xb8) != 0 || eax_24 != 0)
        int32_t eax_26 = *(data_bac4e0 + 0x34)
        
        if (eax_26 != 0)
            eax_26(*(arg1 + 0xe4), 2, 1, &var_6c, eax_4)
    
    int32_t eax_28
    
    if (*(arg1 + 0xb8) == 0)
        void* eax_27 = arg1 + 0x448
        int32_t ecx_13 = *(eax_27 + 0x10)
        
        if (*(arg1 + 0x45c) u>= 8)
            eax_27 = *eax_27
        
        int32_t var_e0_11 = ecx_13
        eax_28 = sub_536340(&var_54, ecx_13, var_44_1, eax_27)
    
    if (*(arg1 + 0xb8) != 0 || eax_28 != 0)
        int32_t eax_30 = *(data_bac4e0 + 0x34)
        
        if (eax_30 != 0)
            eax_30(*(arg1 + 0xe4), 3, 1, &var_54, eax_4)
    
    int32_t eax_32
    
    if (*(arg1 + 0xb8) == 0)
        void* eax_31 = arg1 + 0x460
        int32_t ecx_15 = *(eax_31 + 0x10)
        
        if (*(arg1 + 0x474) u>= 8)
            eax_31 = *eax_31
        
        int32_t var_e0_13 = ecx_15
        eax_32 = sub_536340(&var_3c, ecx_15, var_2c_1, eax_31)
    
    if (*(arg1 + 0xb8) != 0 || eax_32 != 0)
        int32_t eax_34 = *(data_bac4e0 + 0x34)
        
        if (eax_34 != 0)
            eax_34(*(arg1 + 0xe4), 4, 1, &var_3c, eax_4)
    
    sub_5731f0(arg1 + 0x414, &var_88)
    *(arg1 + 0xb8) = 0
    result = sub_573150(&var_88)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_d4)
return result
