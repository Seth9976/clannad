// 函数: sub_59b5b0
// 地址: 0x59b5b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_9b8e3a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_178
int32_t eax_2 = __security_cookie ^ &var_178
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_74 = 0

if (*(arg1 + 4) != 0)
    void* eax_5 = data_bac45c
    int32_t edx_1 = *(eax_5 + 0x64)
    int32_t edi_1 = *(eax_5 + 0x68)
    int32_t* eax_6 = data_bac458
    int32_t var_cc_1 = edi_1
    struct _EXCEPTION_REGISTRATION_RECORD** ecx = *eax_6
    struct _EXCEPTION_REGISTRATION_RECORD** var_d8_1 = ecx
    struct _EXCEPTION_REGISTRATION_RECORD** var_c8_1 = ecx
    ecx.b = eax_6[0xd3].b
    char var_e0_1 = ecx.b
    char var_c4_1 = ecx.b
    ecx.b = *(eax_6 + 0x34d)
    char var_ef_1 = ecx.b
    char var_c3_1 = ecx.b
    ecx.b = *(eax_6 + 0x34f)
    char var_171_1 = ecx.b
    char var_c1_1 = ecx.b
    ecx.b = eax_6[0xd4].b
    char var_162_1 = ecx.b
    char var_be_1 = ecx.b
    ecx.b = *(eax_6 + 0x351)
    char var_e2_1 = ecx.b
    char var_bd_1 = ecx.b
    ecx.b = *(eax_6 + 0x352)
    char var_15c_1 = ecx.b
    char var_bc_1 = ecx.b
    ecx.b = *(eax_6 + 0x353)
    char var_eb_1 = ecx.b
    char var_bb_1 = ecx.b
    ecx.b = eax_6[0xd5].b
    char var_154_1 = ecx.b
    char var_ba_1 = ecx.b
    ecx.b = *(eax_6 + 0x355)
    char var_e1_1 = ecx.b
    char var_b7_1 = ecx.b
    int32_t ecx_1 = eax_6[0xdc]
    int32_t var_70_1 = ecx_1
    int32_t var_b4_1 = ecx_1
    ecx_1.b = eax_6[0xdd].b
    char var_150_1 = ecx_1.b
    char var_b0_1 = ecx_1.b
    ecx_1.b = *(eax_6 + 0x375)
    char var_e9_1 = ecx_1.b
    char var_af_1 = ecx_1.b
    ecx_1.b = *(eax_6 + 0x377)
    char var_136_1 = ecx_1.b
    char var_ae_1 = ecx_1.b
    ecx_1.b = eax_6[0xde].b
    char var_db_1 = ecx_1.b
    char var_ad_1 = ecx_1.b
    ecx_1.b = *(eax_6 + 0x379)
    char var_133_1 = ecx_1.b
    char var_a7_1 = ecx_1.b
    ecx_1.b = *(eax_6 + 0x37a)
    char var_e4_1 = ecx_1.b
    char var_a6_1 = ecx_1.b
    ecx_1.b = *(eax_6 + 0x37b)
    char var_130_1 = ecx_1.b
    char var_c0_1 = ecx_1.b
    ecx_1.b = eax_6[0xdf].b
    char var_d9_1 = ecx_1.b
    char var_bf_1 = ecx_1.b
    ecx_1.b = *(eax_6 + 0x37d)
    char var_112_1 = ecx_1.b
    char var_aa_1 = ecx_1.b
    ecx_1.b = *(eax_6 + 0x37e)
    char var_da_1 = ecx_1.b
    char var_a9_1 = ecx_1.b
    ecx_1.b = *(eax_6 + 0x37f)
    char var_f8_1 = ecx_1.b
    char var_a8_1 = ecx_1.b
    ecx_1.b = *(eax_6 + 0x34e)
    char var_174_1 = ecx_1.b
    char var_c2_1 = ecx_1.b
    ecx_1.b = eax_6[0xe0].b
    char var_172_1 = ecx_1.b
    char var_b9_1 = ecx_1.b
    ecx_1.b = *(eax_6 + 0x381)
    char var_170_1 = ecx_1.b
    char var_b8_1 = ecx_1.b
    ecx_1.b = eax_6[0xe3].b
    char var_160_1 = ecx_1.b
    char var_ac_1 = ecx_1.b
    ecx_1.b = *(eax_6 + 0x38d)
    char var_155_1 = ecx_1.b
    char var_ab_1 = ecx_1.b
    ecx_1.b = *(eax_6 + 0x48e)
    char var_151_1 = ecx_1.b
    char var_a5_1 = ecx_1.b
    ecx_1.b = eax_6[0x124].b
    char var_13c_1 = ecx_1.b
    char var_a4_1 = ecx_1.b
    ecx_1.b = *(eax_6 + 0x491)
    char var_134_1 = ecx_1.b
    char var_a3_1 = ecx_1.b
    ecx_1.b = *(eax_6 + 0x492)
    char var_132_1 = ecx_1.b
    char var_a2_1 = ecx_1.b
    char* ecx_2 = data_bac498
    eax_6.b = eax_6[0x125].b
    char var_113_1 = eax_6.b
    char var_a1_1 = eax_6.b
    bool cond:0_1 = ecx_2[5] == 0
    eax_6.b = *ecx_2
    char var_110_1 = eax_6.b
    bool cond:1_1 = ecx_2[9] == 0
    char var_a0_1 = eax_6.b
    eax_6.b = ecx_2[1]
    bool cond:2_1 = ecx_2[0xb] == 0
    char var_f0_1 = eax_6.b
    char var_9f_1 = eax_6.b
    bool cond:3_1 = ecx_2[0x11] == 0
    bool var_95_1 = ecx_2[0x13] == 0
    bool cond:4_1 = ecx_2[0x15] == 0
    void* eax_7
    eax_7.b = *(data_bac4e4 + 0x141)
    char var_ee_1 = eax_7.b
    bool cond:5_1 = ecx_2[0xd] == 0
    char var_9e_1 = eax_7.b
    eax_7.b = ecx_2[2]
    bool cond:6_1 = ecx_2[0xf] == 0
    char var_ea_1 = eax_7.b
    char var_9d_1 = eax_7.b
    bool cond:7_1 = ecx_2[4] == 0
    eax_7.b = ecx_2[3]
    char var_e8_1 = eax_7.b
    bool cond:8_1 = ecx_2[8] == 0
    char var_9c_1 = eax_7.b
    bool var_91_1 = ecx_2[0xa] == 0
    bool var_8e_1 = ecx_2[0x10] == 0
    bool var_8d_1 = ecx_2[0x12] == 0
    bool var_8c_1 = ecx_2[0x14] == 0
    bool var_90_1 = ecx_2[0xc] == 0
    bool var_8f_1 = ecx_2[0xe] == 0
    int32_t var_6c
    int32_t var_58
    
    if (*(arg1 + 0xb8) != 0 || edx_1 != *(arg1 + 0x414))
        char* var_188_1 = ecx_2
        int16_t* eax_8 = sub_6ad9b0(&var_6c)
        int32_t var_14_1 = 0
        ecx_2 = *(data_bac4e0 + 0x34)
        
        if (ecx_2 != 0)
            ecx_2 = ecx_2(*(arg1 + 0xe4), 0, 1, eax_8, eax_4)
        
        int32_t var_14_2 = 0xffffffff
        
        if (var_58 u>= 8)
            ecx_2 = j__free(var_6c)
    
    if (*(arg1 + 0xb8) != 0 || edi_1 != *(arg1 + 0x418))
        char* var_188_4 = ecx_2
        int16_t* eax_9 = sub_6ad9b0(&var_6c)
        int32_t var_14_3 = 1
        ecx_2 = *(data_bac4e0 + 0x34)
        
        if (ecx_2 != 0)
            ecx_2(*(arg1 + 0xe4), 1, 1, eax_9, eax_4)
        
        int32_t var_14_4 = 0xffffffff
        
        if (var_58 u>= 8)
            j__free(var_6c)
    
    if (*(arg1 + 0xb8) != 0 || var_d8_1 != *(arg1 + 0x41c))
        int32_t* ecx_7 = &var_6c
        
        if (var_d8_1 u> 0x33)
            var_58 = 7
            int32_t var_5c_1 = 0
            var_6c.w = 0
            sub_52e720(ecx_7, &data_ad93bc, 3)
            int32_t var_14_6 = 3
        else
            sub_52e820(ecx_7, (&data_ad96c8)[var_d8_1])
            int32_t var_14_5 = 2
        
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 2, 1, &var_6c, eax_4)
        
        int32_t var_14_7 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    void* const edi_2 = &data_af0f84
    ecx_2.b = var_e0_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x420))
        void* const eax_11 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_11 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_11)
        int32_t var_14_8 = 4
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 3, 1, &var_6c, eax_4)
        
        int32_t var_14_9 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_171_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x423))
        void* const eax_13 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_13 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_13)
        int32_t var_14_10 = 5
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 4, 1, &var_6c, eax_4)
        
        int32_t var_14_11 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_ef_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x421))
        void* const eax_15 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_15 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_15)
        int32_t var_14_12 = 6
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 5, 1, &var_6c, eax_4)
        
        int32_t var_14_13 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_162_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x426))
        void* const eax_17 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_17 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_17)
        int32_t var_14_14 = 7
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 6, 1, &var_6c, eax_4)
        
        int32_t var_14_15 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_e2_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x427))
        void* const eax_19 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_19 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_19)
        int32_t var_14_16 = 8
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 7, 1, &var_6c, eax_4)
        
        int32_t var_14_17 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_15c_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x428))
        void* const eax_21 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_21 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_21)
        int32_t var_14_18 = 9
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 8, 1, &var_6c, eax_4)
        
        int32_t var_14_19 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_eb_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x429))
        void* const eax_23 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_23 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_23)
        int32_t var_14_20 = 0xa
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 9, 1, &var_6c, eax_4)
        
        int32_t var_14_21 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_154_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x42a))
        void* const eax_25 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_25 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_25)
        int32_t var_14_22 = 0xb
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0xa, 1, &var_6c, eax_4)
        
        int32_t var_14_23 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_e1_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x42d))
        void* const eax_27 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_27 = &data_af0f8c
        
        ecx_2 = sub_52e820(&var_6c, eax_27)
        int32_t var_14_24 = 0xc
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0xb, 1, &var_6c, eax_4)
        
        int32_t var_14_25 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    int32_t var_54
    
    if (*(arg1 + 0xb8) != 0 || var_70_1 != *(arg1 + 0x430))
        struct _EXCEPTION_REGISTRATION_RECORD** result_1
        int16_t* edx_4
        
        if (var_70_1 s< 0)
            var_58 = 7
            int32_t var_5c_2 = 0
            var_6c.w = 0
            sub_52e720(&var_6c, &data_af0f8c, 2)
            int32_t var_14_27 = 0xe
            edx_4 = &var_6c
            result_1 = 2
            int32_t var_74_2 = 2
        else
            char* var_188_37 = ecx_2
            edx_4 = sub_6ad9b0(&var_54)
            int32_t var_14_26 = 0xd
            result_1 = 1
            int32_t var_74_1 = 1
        
        int32_t eax_31 = *(data_bac4e0 + 0x34)
        
        if (eax_31 != 0)
            eax_31(*(arg1 + 0xe4), 0xc, 1, edx_4, eax_4)
        
        result = result_1
        
        if ((result.b & 2) != 0)
            result &= 0xfffffffd
            
            if (var_58 u>= 8)
                j__free(var_6c)
            
            var_58 = 7
            int32_t var_5c_3 = 0
            var_6c.w = 0
        
        int32_t var_14_28 = 0xffffffff
        int32_t var_40
        
        if ((result.b & 1) != 0 && var_40 u>= 8)
            result, ecx_2 = j__free(var_54)
    
    ecx_2.b = var_150_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x434))
        void* const eax_32 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_32 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_32)
        int32_t var_14_29 = 0xf
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0xd, 1, &var_6c, eax_4)
        
        int32_t var_14_30 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_e9_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x435))
        void* const eax_34 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_34 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_34)
        int32_t var_14_31 = 0x10
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0xe, 1, &var_6c, eax_4)
        
        int32_t var_14_32 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_136_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x436))
        void* const eax_36 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_36 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_36)
        int32_t var_14_33 = 0x11
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0xf, 1, &var_6c, eax_4)
        
        int32_t var_14_34 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_db_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x437))
        void* const eax_38 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_38 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_38)
        int32_t var_14_35 = 0x12
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x10, 1, &var_6c, eax_4)
        
        int32_t var_14_36 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_133_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x43d))
        void* const eax_40 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_40 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_40)
        int32_t var_14_37 = 0x13
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x11, 1, &var_6c, eax_4)
        
        int32_t var_14_38 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_e4_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x43e))
        void* const eax_42 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_42 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_42)
        int32_t var_14_39 = 0x14
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x12, 1, &var_6c, eax_4)
        
        int32_t var_14_40 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_130_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x424))
        void* const eax_44 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_44 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_44)
        int32_t var_14_41 = 0x15
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x13, 1, &var_6c, eax_4)
        
        int32_t var_14_42 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_d9_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x425))
        void* const eax_46 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_46 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_46)
        int32_t var_14_43 = 0x16
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x14, 1, &var_6c, eax_4)
        
        int32_t var_14_44 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_112_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x43a))
        int16_t* eax_48 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_48 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_48)
        int32_t var_14_45 = 0x17
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x15, 1, &var_6c, eax_4)
        
        int32_t var_14_46 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_da_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x43b))
        int16_t* eax_50 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_50 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_50)
        int32_t var_14_47 = 0x18
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x16, 1, &var_6c, eax_4)
        
        int32_t var_14_48 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_f8_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x43c))
        int16_t* eax_52 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_52 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_52)
        int32_t var_14_49 = 0x19
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x17, 1, &var_6c, eax_4)
        
        int32_t var_14_50 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_174_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x422))
        int16_t* eax_54 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_54 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_54)
        int32_t var_14_51 = 0x1a
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x18, 1, &var_6c, eax_4)
        
        int32_t var_14_52 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_172_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x42b))
        int16_t* eax_56 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_56 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_56)
        int32_t var_14_53 = 0x1b
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x19, 1, &var_6c, eax_4)
        
        int32_t var_14_54 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_170_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x42c))
        int16_t* eax_58 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_58 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_58)
        int32_t var_14_55 = 0x1c
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x1a, 1, &var_6c, eax_4)
        
        int32_t var_14_56 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_160_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x438))
        int16_t* eax_60 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_60 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_60)
        int32_t var_14_57 = 0x1d
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x1b, 1, &var_6c, eax_4)
        
        int32_t var_14_58 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_155_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x439))
        int16_t* eax_62 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_62 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_62)
        int32_t var_14_59 = 0x1e
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x1c, 1, &var_6c, eax_4)
        
        int32_t var_14_60 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_151_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x43f))
        int16_t* eax_64 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_64 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_64)
        int32_t var_14_61 = 0x1f
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x1d, 1, &var_6c, eax_4)
        
        int32_t var_14_62 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_13c_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x440))
        int16_t* eax_66 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_66 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_66)
        int32_t var_14_63 = 0x20
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x1e, 1, &var_6c, eax_4)
        
        int32_t var_14_64 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_134_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x441))
        int16_t* eax_68 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_68 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_68)
        int32_t var_14_65 = 0x21
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x1f, 1, &var_6c, eax_4)
        
        int32_t var_14_66 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_132_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x442))
        int16_t* eax_70 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_70 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_70)
        int32_t var_14_67 = 0x22
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x20, 1, &var_6c, eax_4)
        
        int32_t var_14_68 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_113_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x443))
        int16_t* eax_72 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_72 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_72)
        int32_t var_14_69 = 0x23
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x21, 1, &var_6c, eax_4)
        
        int32_t var_14_70 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_110_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x444))
        int16_t* eax_74 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_74 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_74)
        int32_t var_14_71 = 0x24
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x22, 1, &var_6c, eax_4)
        
        int32_t var_14_72 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_f0_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x445))
        int16_t* eax_76 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_76 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_76)
        int32_t var_14_73 = 0x25
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x23, 1, &var_6c, eax_4)
        
        int32_t var_14_74 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_ee_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x446))
        int16_t* eax_78 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_78 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_78)
        int32_t var_14_75 = 0x26
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x24, 1, &var_6c, eax_4)
        
        int32_t var_14_76 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_ea_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x447))
        int16_t* eax_80 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_80 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_80)
        int32_t var_14_77 = 0x27
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x25, 1, &var_6c, eax_4)
        
        int32_t var_14_78 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = var_e8_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x448))
        int16_t* eax_82 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_82 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_82)
        int32_t var_14_79 = 0x28
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x26, 1, &var_6c, eax_4)
        
        int32_t var_14_80 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = cond:0_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x449))
        int16_t* eax_84 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_84 = &data_af0f8c
        
        sub_52e820(&var_6c, eax_84)
        int32_t var_14_81 = 0x29
        result = *(data_bac4e0 + 0x34)
        
        if (result != 0)
            result, ecx_2 = result(*(arg1 + 0xe4), 0x27, 1, &var_6c, eax_4)
        
        int32_t var_14_82 = 0xffffffff
        
        if (var_58 u>= 8)
            result, ecx_2 = j__free(var_6c)
    
    ecx_2.b = cond:1_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x44a))
        void* const eax_86 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_86 = &data_af0f8c
        
        sub_52e820(&var_54, eax_86)
        int32_t var_14_83 = 0x2a
        int32_t eax_88 = *(data_bac4e0 + 0x34)
        
        if (eax_88 != 0)
            eax_88(*(arg1 + 0xe4), 0x28, 1, &var_54, eax_4)
        
        int32_t var_14_84 = 0xffffffff
        result, ecx_2 = sub_52e8a0(&var_54)
    
    ecx_2.b = cond:2_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x44b))
        void* const eax_89 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_89 = &data_af0f8c
        
        sub_52e820(&var_54, eax_89)
        int32_t var_14_85 = 0x2b
        int32_t eax_91 = *(data_bac4e0 + 0x34)
        
        if (eax_91 != 0)
            eax_91(*(arg1 + 0xe4), 0x29, 1, &var_54, eax_4)
        
        int32_t var_14_86 = 0xffffffff
        result, ecx_2 = sub_52e8a0(&var_54)
    
    ecx_2.b = cond:5_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x44c))
        void* const eax_92 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_92 = &data_af0f8c
        
        sub_52e820(&var_54, eax_92)
        int32_t var_14_87 = 0x2c
        int32_t eax_94 = *(data_bac4e0 + 0x34)
        
        if (eax_94 != 0)
            eax_94(*(arg1 + 0xe4), 0x2a, 1, &var_54, eax_4)
        
        int32_t var_14_88 = 0xffffffff
        result, ecx_2 = sub_52e8a0(&var_54)
    
    ecx_2.b = cond:6_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x44d))
        void* const eax_95 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_95 = &data_af0f8c
        
        sub_52e820(&var_54, eax_95)
        int32_t var_14_89 = 0x2d
        int32_t eax_97 = *(data_bac4e0 + 0x34)
        
        if (eax_97 != 0)
            eax_97(*(arg1 + 0xe4), 0x2b, 1, &var_54, eax_4)
        
        int32_t var_14_90 = 0xffffffff
        result, ecx_2 = sub_52e8a0(&var_54)
    
    ecx_2.b = cond:3_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x44e))
        void* const eax_98 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_98 = &data_af0f8c
        
        sub_52e820(&var_54, eax_98)
        int32_t var_14_91 = 0x2e
        int32_t eax_100 = *(data_bac4e0 + 0x34)
        
        if (eax_100 != 0)
            eax_100(*(arg1 + 0xe4), 0x2c, 1, &var_54, eax_4)
        
        int32_t var_14_92 = 0xffffffff
        result, ecx_2 = sub_52e8a0(&var_54)
    
    ecx_2.b = var_95_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x44f))
        void* const eax_101 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_101 = &data_af0f8c
        
        sub_52e820(&var_54, eax_101)
        int32_t var_14_93 = 0x2f
        int32_t eax_103 = *(data_bac4e0 + 0x34)
        
        if (eax_103 != 0)
            eax_103(*(arg1 + 0xe4), 0x2d, 1, &var_54, eax_4)
        
        int32_t var_14_94 = 0xffffffff
        result, ecx_2 = sub_52e8a0(&var_54)
    
    ecx_2.b = cond:4_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x450))
        void* const eax_104 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_104 = &data_af0f8c
        
        sub_52e820(&var_54, eax_104)
        int32_t var_14_95 = 0x30
        int32_t eax_106 = *(data_bac4e0 + 0x34)
        
        if (eax_106 != 0)
            eax_106(*(arg1 + 0xe4), 0x2e, 1, &var_54, eax_4)
        
        int32_t var_14_96 = 0xffffffff
        result, ecx_2 = sub_52e8a0(&var_54)
    
    ecx_2.b = cond:7_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x451))
        void* const eax_107 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_107 = &data_af0f8c
        
        sub_52e820(&var_54, eax_107)
        int32_t var_14_97 = 0x31
        int32_t eax_109 = *(data_bac4e0 + 0x34)
        
        if (eax_109 != 0)
            eax_109(*(arg1 + 0xe4), 0x2f, 1, &var_54, eax_4)
        
        int32_t var_14_98 = 0xffffffff
        result, ecx_2 = sub_52e8a0(&var_54)
    
    ecx_2.b = cond:8_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x452))
        void* const eax_110 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_110 = &data_af0f8c
        
        sub_52e820(&var_54, eax_110)
        int32_t var_14_99 = 0x32
        int32_t eax_112 = *(data_bac4e0 + 0x34)
        
        if (eax_112 != 0)
            eax_112(*(arg1 + 0xe4), 0x30, 1, &var_54, eax_4)
        
        int32_t var_14_100 = 0xffffffff
        result, ecx_2 = sub_52e8a0(&var_54)
    
    ecx_2.b = var_91_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x453))
        void* const eax_113 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_113 = &data_af0f8c
        
        sub_52e820(&var_54, eax_113)
        int32_t var_14_101 = 0x33
        int32_t eax_115 = *(data_bac4e0 + 0x34)
        
        if (eax_115 != 0)
            eax_115(*(arg1 + 0xe4), 0x31, 1, &var_54, eax_4)
        
        int32_t var_14_102 = 0xffffffff
        result, ecx_2 = sub_52e8a0(&var_54)
    
    ecx_2.b = var_90_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x454))
        void* const eax_116 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_116 = &data_af0f8c
        
        sub_52e820(&var_54, eax_116)
        int32_t var_14_103 = 0x34
        int32_t eax_118 = *(data_bac4e0 + 0x34)
        
        if (eax_118 != 0)
            eax_118(*(arg1 + 0xe4), 0x32, 1, &var_54, eax_4)
        
        int32_t var_14_104 = 0xffffffff
        result, ecx_2 = sub_52e8a0(&var_54)
    
    ecx_2.b = var_8f_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x455))
        void* const eax_119 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_119 = &data_af0f8c
        
        sub_52e820(&var_54, eax_119)
        int32_t var_14_105 = 0x35
        int32_t eax_121 = *(data_bac4e0 + 0x34)
        
        if (eax_121 != 0)
            eax_121(*(arg1 + 0xe4), 0x33, 1, &var_54, eax_4)
        
        int32_t var_14_106 = 0xffffffff
        result, ecx_2 = sub_52e8a0(&var_54)
    
    ecx_2.b = var_8e_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x456))
        void* const eax_122 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_122 = &data_af0f8c
        
        sub_52e820(&var_54, eax_122)
        int32_t var_14_107 = 0x36
        int32_t eax_124 = *(data_bac4e0 + 0x34)
        
        if (eax_124 != 0)
            eax_124(*(arg1 + 0xe4), 0x34, 1, &var_54, eax_4)
        
        int32_t var_14_108 = 0xffffffff
        result, ecx_2 = sub_52e8a0(&var_54)
    
    ecx_2.b = var_8d_1
    
    if (*(arg1 + 0xb8) != 0 || ecx_2.b != *(arg1 + 0x457))
        void* const eax_125 = &data_af0f84
        
        if (ecx_2.b == 0)
            eax_125 = &data_af0f8c
        
        sub_52e820(&var_54, eax_125)
        int32_t var_14_109 = 0x37
        int32_t eax_127 = *(data_bac4e0 + 0x34)
        
        if (eax_127 != 0)
            eax_127(*(arg1 + 0xe4), 0x35, 1, &var_54, eax_4)
        
        int32_t var_14_110 = 0xffffffff
        sub_52e8a0(&var_54)
    
    result.b = var_8c_1
    
    if (*(arg1 + 0xb8) != 0 || result.b != *(arg1 + 0x458))
        if (result.b == 0)
            edi_2 = &data_af0f8c
        
        void var_3c
        sub_52e820(&var_3c, edi_2)
        int32_t var_14_111 = 0x38
        int32_t eax_129 = *(data_bac4e0 + 0x34)
        
        if (eax_129 != 0)
            eax_129(*(arg1 + 0xe4), 0x36, 1, &var_3c, eax_4)
        
        result = sub_52e8a0(&var_3c)
    
    *(arg1 + 0xb8) = 0
    *(arg1 + 0x414) = edx_1.o
    *(arg1 + 0x424) = var_c0_1.o
    *(arg1 + 0x434) = var_b0_1.o
    *(arg1 + 0x444) = var_a0_1.o
    *(arg1 + 0x454) = var_90_1.q

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_178)
return result
