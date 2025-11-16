// 函数: ?OnAsanReport@__vcasan@@YAXPBD0_N@Z
// 地址: 0x550300
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b18b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *arg1
int32_t* result
int32_t* result_1
int32_t var_60
int16_t var_2c
int32_t var_18_1

if (eax_3 == 1)
    void** eax_5 = arg2[1] + 0xc
    var_2c = 0
    var_18_1 = 7
    int32_t var_1c_1 = 0
    sub_52e3c0(&var_2c, eax_5, 0, 0xffffffff)
    int32_t var_8_1 = 0
    var_60 = 0
    result_1 = nullptr
    sub_550170(&result_1, &var_60, arg2, &result_1)
    int32_t esi_1 = var_60
    
    if (esi_1 s>= 0)
        sub_64e5e0(sub_6761b0(), &var_2c, &var_2c, esi_1, result_1)
    
label_550460:
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
else if (eax_3 != 4)
    if (eax_3 == 5)
        void** eax_15 = arg2[1] + 0xc
        var_2c = 0
        var_18_1 = 7
        int32_t var_1c_2 = 0
        sub_52e3c0(&var_2c, eax_15, 0, 0xffffffff)
        int32_t var_8_2 = 1
        result_1 = nullptr
        var_60 = 0
        sub_550170(&var_60, &result_1, arg2, &var_60)
        result = result_1
        
        if (result s>= 0)
            sub_5d2980(&var_2c, &var_2c, result, var_60)
        
        goto label_550460
    
    if (eax_3 == 3)
        sub_536170(&var_2c, arg2[1] + 0xc)
        int32_t var_8_3 = 2
        result_1 = nullptr
        var_60 = 0
        sub_550170(&var_60, &result_1, arg2, &var_60)
        int32_t* result_2 = result_1
        
        if (result_2 s>= 0)
            sub_64e5e0(result_2, &var_2c, &var_2c, result_2, var_60)
        
        sub_52e8a0(&var_2c)
    else if (eax_3 != 2)
        void var_44
        int16_t* eax_20 = sub_5483b0(data_bac484, &var_44)
        int32_t var_8_4 = 3
        void var_5c
        int16_t* eax_21 = sub_548cb0(eax_20, 0xad8974, &var_5c, eax_20)
        var_8_4.b = 4
        sub_684160(data_bac424, 2, eax_21)
        sub_52e8a0(&var_5c)
        sub_52e8a0(&var_44)
    else
        sub_6761b0()
else
    int32_t eax_8 = *arg2
    int32_t ebx_1 = 0
    int32_t edi_1 = 0xffffffff
    result_1 = nullptr
    var_60 = 0
    
    if (eax_8 == 0)
        ebx_1 = *(arg2[1] + 8)
    else if (eax_8 == 1)
        edi_1 = *(arg2[1] + 0x16c)
        ebx_1 = *(arg2[1] + 8)
    
    sub_550170(&var_60, &result_1, arg2, &var_60)
    result = result_1
    
    if (result s>= 0)
        int32_t var_78_4 = var_60
        sub_5d28d0(ebx_1, edi_1, result)
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
