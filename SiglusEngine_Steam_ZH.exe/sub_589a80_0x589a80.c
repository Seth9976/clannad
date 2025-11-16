// 函数: sub_589a80
// 地址: 0x589a80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Fput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@ABA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AAVios_base@2@_WPBDI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = *(data_bac4e0 + 0x14)
int32_t esi

if (eax_4 == 0)
    esi = 0
else
    esi = eax_4(*(arg1 + 0xbc), eax_2)

if (arg2 - 5 u> 7)
label_589dac:
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 0xaef694, 4)
    int32_t var_8_15 = 7
    int32_t eax_23 = *(data_bac4e0 + 0x34)
    
    if (eax_23 != 0)
        eax_23(*(arg1 + 0xbc), esi, 0, &var_2c, eax_2)
    
    int32_t var_8_16 = 0xffffffff
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
else
    switch (arg2)
        case 5
            int32_t var_78_1 = 7
            int32_t var_7c_1 = 0
            int16_t var_8c = 0
            sub_52e720(&var_8c, &data_ad7c90, nullptr)
            int32_t var_8_1 = 0
            int32_t eax_9 = *(data_bac4e0 + 0x34)
            
            if (eax_9 != 0)
                eax_9(*(arg1 + 0xbc), esi, 0, &var_8c, eax_2)
            
            int32_t var_8_2 = 0xffffffff
            sub_52e8a0(&var_8c)
        case 6
            int32_t var_a8_1 = 7
            int32_t var_ac_1 = 0
            int16_t var_bc = 0
            sub_52e720(&var_bc, 0xaef660, 4)
            int32_t var_8_3 = 1
            int32_t eax_11 = *(data_bac4e0 + 0x34)
            
            if (eax_11 != 0)
                eax_11(*(arg1 + 0xbc), esi, 0, &var_bc, eax_2)
            
            int32_t var_8_4 = 0xffffffff
            sub_52e8a0(&var_bc)
        case 7
            int32_t var_30_1 = 7
            int32_t var_34_1 = 0
            int16_t var_44 = 0
            sub_52e720(&var_44, 0xaef66c, 8)
            int32_t var_8_5 = 2
            int32_t eax_13 = *(data_bac4e0 + 0x34)
            
            if (eax_13 != 0)
                eax_13(*(arg1 + 0xbc), esi, 0, &var_44, eax_2)
            
            int32_t var_8_6 = 0xffffffff
            sub_52e8a0(&var_44)
        case 8
            goto label_589dac
        case 9
            int32_t var_48_1 = 7
            int32_t var_4c_1 = 0
            int16_t var_5c = 0
            sub_52e720(&var_5c, 0xaef680, 8)
            int32_t var_8_7 = 3
            int32_t eax_15 = *(data_bac4e0 + 0x34)
            
            if (eax_15 != 0)
                eax_15(*(arg1 + 0xbc), esi, 0, &var_5c, eax_2)
            
            int32_t var_8_8 = 0xffffffff
            sub_52e8a0(&var_5c)
        case 0xa
            int32_t var_60_1 = 7
            int32_t var_64_1 = 0
            int16_t var_74 = 0
            sub_52e720(&var_74, 0xaef680, 8)
            int32_t var_8_9 = 4
            int32_t eax_17 = *(data_bac4e0 + 0x34)
            
            if (eax_17 != 0)
                eax_17(*(arg1 + 0xbc), esi, 0, &var_74, eax_2)
            
            int32_t var_8_10 = 0xffffffff
            sub_52e8a0(&var_74)
        case 0xb
            int32_t var_90_1 = 7
            int32_t var_94_1 = 0
            int16_t var_a4 = 0
            sub_52e720(&var_a4, 0xaef680, 8)
            int32_t var_8_11 = 5
            int32_t eax_19 = *(data_bac4e0 + 0x34)
            
            if (eax_19 != 0)
                eax_19(*(arg1 + 0xbc), esi, 0, &var_a4, eax_2)
            
            int32_t var_8_12 = 0xffffffff
            sub_52e8a0(&var_a4)
        case 0xc
            int32_t var_c0_1 = 7
            int32_t var_c4_1 = 0
            int16_t var_d4 = 0
            sub_52e720(&var_d4, 0xaef680, 8)
            int32_t var_8_13 = 6
            int32_t eax_21 = *(data_bac4e0 + 0x34)
            
            if (eax_21 != 0)
                eax_21(*(arg1 + 0xbc), esi, 0, &var_d4, eax_2)
            
            int32_t var_8_14 = 0xffffffff
            sub_52e8a0(&var_d4)

int32_t result = *(data_bac4e0 + 0x38)

if (result != 0)
    result = result(*(arg1 + 0xbc), esi, 1, arg3, eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
