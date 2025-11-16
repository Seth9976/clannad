// 函数: sub_6f7a20
// 地址: 0x6f7a20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cdaa7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_fc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (*(arg1 + 0xe8) u< 0xffff0200)
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    int16_t var_44 = 0
    sub_52e720(&var_44, &data_ad7c90, nullptr)
    int32_t var_8_1 = 0
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 0xb07aa0, 0x53)
    var_8_1.b = 1
    sub_6b9da0(&var_2c, &var_44)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (var_30_1 u< 8)
        result.b = 0
    else
        j__free(var_44.d)
        result.b = 0
else if (*(arg1 + 0x74) u< 0x800 || *(arg1 + 0x78) u< 0x800)
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    int16_t var_5c = 0
    int32_t ecx_8 = sub_52e720(&var_5c, &data_ad7c90, nullptr)
    int32_t var_8_2 = 2
    *(arg1 + 0x78)
    int32_t var_100_3 = ecx_8
    int16_t var_ec
    int16_t* eax_10 = sub_6adab0(&var_ec)
    var_8_2.b = 3
    *(arg1 + 0x74)
    int16_t var_bc
    int16_t* eax_11 = sub_6adab0(&var_bc)
    var_8_2.b = 4
    int16_t var_8c
    int16_t* eax_12 = sub_548cb0(eax_11, 0xb07b8c, &var_8c, eax_11)
    var_8_2.b = 5
    int16_t var_d4
    int16_t* eax_13 = sub_532b80(eax_12, eax_12, &var_d4, &data_aee74c)
    var_8_2.b = 6
    int16_t var_74
    int16_t* eax_14 = sub_5327a0(eax_13, eax_13, &var_74, eax_10)
    var_8_2.b = 7
    var_8_2.b = 8
    int16_t var_a4
    sub_6b9da0(sub_532b80(eax_14, eax_14, &var_a4, 0xb07bc4), &var_5c)
    int32_t var_90
    
    if (var_90 u>= 8)
        j__free(var_a4.d)
    
    int32_t var_90_1 = 7
    int32_t var_94_1 = 0
    var_a4 = 0
    int32_t var_60
    
    if (var_60 u>= 8)
        j__free(var_74.d)
    
    int32_t var_60_1 = 7
    int32_t var_64_1 = 0
    var_74 = 0
    int32_t var_c0
    
    if (var_c0 u>= 8)
        j__free(var_d4.d)
    
    int32_t var_c0_1 = 7
    int32_t var_c4_1 = 0
    var_d4 = 0
    int32_t var_78
    
    if (var_78 u>= 8)
        j__free(var_8c.d)
    
    int32_t var_78_1 = 7
    int32_t var_7c_1 = 0
    var_8c = 0
    int32_t var_a8
    
    if (var_a8 u>= 8)
        j__free(var_bc.d)
    
    int32_t var_a8_1 = 7
    int32_t var_ac_1 = 0
    var_bc = 0
    int32_t var_d8
    
    if (var_d8 u>= 8)
        j__free(var_ec.d)
    
    int32_t var_d8_1 = 7
    int32_t var_dc_1 = 0
    var_ec = 0
    
    if (var_48_1 u< 8)
        result.b = 0
    else
        j__free(var_5c.d)
        result.b = 0
else
    int32_t* ecx_3 = data_4ebee38
    int32_t eax_4 =
        (*(*ecx_3 + 0x28))(ecx_3, *(arg1 + 4), *(arg1 + 0x18), *(arg1 + 0x14), 0x400, 3, 0x16)
    int32_t var_10c_2 = *(arg1 + 0x14)
    *(arg1 + 0x1d4) = eax_4
    int32_t* eax_5 = data_4ebee38
    int32_t eax_6 =
        (*(*eax_5 + 0x28))(eax_5, *(arg1 + 4), *(arg1 + 0x18), var_10c_2, 0x400, 3, 0x15)
    int32_t var_10c_3 = *(arg1 + 0x14)
    *(arg1 + 0x1d8) = eax_6
    int32_t* eax_7 = data_4ebee38
    int32_t eax_8 =
        (*(*eax_7 + 0x28))(eax_7, *(arg1 + 4), *(arg1 + 0x18), var_10c_3, 0x20000, 3, 0x16)
    int32_t var_10c_4 = *(arg1 + 0x14)
    *(arg1 + 0x1dc) = eax_8
    int32_t* eax_9 = data_4ebee38
    *(arg1 + 0x1e0) =
        (*(*eax_9 + 0x28))(eax_9, *(arg1 + 4), *(arg1 + 0x18), var_10c_4, 0x20000, 3, 0x15)
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
