// 函数: sub_61f760
// 地址: 0x61f760
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bfb4c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_f0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t result = sub_662930()

if (result != 0)
    int32_t var_64_1 = 7
    int32_t var_68_1 = 0
    int16_t var_78 = 0
    int32_t var_8_1 = 0
    int16_t var_a8
    int16_t* eax_4 = sub_55c680(0, &var_78, &var_a8, result)
    var_8_1.b = 1
    int16_t var_90
    int16_t* eax_5 = sub_61ff20(eax_4, eax_4, &var_90, u":\dummy")
    var_8_1.b = 2
    int16_t var_48 = 0
    int32_t var_34_1 = 7
    int32_t var_38_1 = 0
    sub_52e3c0(&var_48, eax_5, 0, 0xffffffff)
    int32_t var_7c
    
    if (var_7c u>= 8)
        j__free(var_90.d)
    
    int32_t var_7c_1 = 7
    int32_t var_80_1 = 0
    var_90 = 0
    int32_t var_94
    
    if (var_94 u>= 8)
        j__free(var_a8.d)
    
    int32_t var_94_1 = 7
    int32_t var_98_1 = 0
    var_a8 = 0
    var_8_1.b = 6
    
    if (var_64_1 u>= 8)
        j__free(var_78.d)
    
    int32_t var_64_2 = 7
    var_78 = 0
    int16_t* lpFileName = &var_48
    
    if (var_34_1 u>= 8)
        lpFileName = var_48.d
    
    int32_t var_68_2 = 0
    uint32_t eax_6 = GetFileAttributesW(lpFileName)
    int16_t var_30
    void** edi_1
    
    if (eax_6 == 0xffffffff || (eax_6.b & 0x10) == 0)
        int32_t var_ac_1 = 7
        edi_1 = 1
        int32_t var_b0_1 = 0
        int16_t var_c0 = 0
        var_8_1.b = 7
        int16_t var_d8
        int16_t* eax_7 = sub_55c680(0, &var_c0, &var_d8, result)
        var_8_1.b = 8
        int16_t* eax_8 = sub_61ff20(eax_7, eax_7, &var_30, &data_aee750)
        var_8_1.b = 9
        int16_t var_60 = 0
        int32_t var_4c_1 = 7
        int32_t var_50_1 = 0
        sub_52e3c0(&var_60, eax_8, 0, 0xffffffff)
        var_8_1.b = 0xa
        sub_52e3c0(&var_48, &var_60, 0, 0xffffffff)
        
        if (var_4c_1 u>= 8)
            j__free(var_60.d)
        
        int32_t var_4c_2 = 7
        int32_t var_50_2 = 0
        var_60 = 0
        int32_t var_1c
        
        if (var_1c u>= 8)
            j__free(var_30.d)
        
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        var_30 = 0
        int32_t var_c4
        
        if (var_c4 u>= 8)
            j__free(var_d8.d)
        
        var_8_1.b = 6
        int32_t var_c4_1 = 7
        int32_t var_c8_1 = 0
        var_d8 = 0
        
        if (var_ac_1 u>= 8)
            j__free(var_c0.d)
    else
        edi_1 = 2
    
    int32_t var_f4_11 = arg4
    int32_t var_1c_2 = 7
    int16_t* ecx_7 = &var_30
    int32_t var_20_2 = 0
    int32_t ebx
    
    if (sub_6ac6a0(edi_1, &var_48, arg3, arg2) != 0)
        var_30 = 0
        sub_52e720(ecx_7, 0xaf4280, 0x12)
        var_8_1.b = 0xc
        sub_684160(data_bac424, 5, &var_30)
        
        if (var_1c_2 u>= 8)
            j__free(var_30.d)
        
        ebx.b = 1
    else
        var_30 = 0
        sub_52e720(ecx_7, 0xaf4258, 0x13)
        var_8_1.b = 0xb
        sub_684160(data_bac424, 5, &var_30)
        
        if (var_1c_2 u>= 8)
            j__free(var_30.d)
        
        ebx.b = 0
    
    if (var_34_1 u>= 8)
        j__free(var_48.d)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
