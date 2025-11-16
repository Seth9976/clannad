// 函数: sub_6768d0
// 地址: 0x6768d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6de8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = data_bac510
int32_t result_1 = 0
int32_t result
int32_t var_5c
int32_t var_48
int16_t var_2c
int32_t var_18

if (*(eax_3 + 0xa4c75c) s<= 0)
label_6769b7:
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    int16_t var_44 = 0
    int32_t var_8_3 = 2
    int16_t* eax_7 = sub_548cb0(0, 0xaf960c, &var_5c, arg1)
    var_8_3.b = 3
    var_8_3.b = 4
    sub_532870(&var_44, sub_532b80(eax_7, eax_7, &var_2c, 0xad8948), 0, 0xffffffff)
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    var_8_3.b = 2
    int32_t var_18_1 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (var_48 u>= 8)
        j__free(var_5c)
    
    sub_532910(&var_44, u"\nBGM", 0x2c)
    sub_532910(&var_44, 0xaf967c, 0xb)
    sub_532910(&var_44, u"\nBGM", 0x1b)
    sub_684160(data_bac424, 0xb, &var_44)
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
    
    result = 0xffffffff
else
    int32_t ebx_1 = 0
    
    while (true)
        int16_t* edi_1 = sub_6ae650(&var_5c, eax_3 + 0xa48b5c + ebx_1)
        int32_t var_8_1 = 0
        void* eax_5 = sub_6ae650(&var_2c, arg1)
        var_8_1.b = 1
        int32_t ecx_2 = *(edi_1 + 0x10)
        
        if (*(edi_1 + 0x14) u>= 8)
            edi_1 = *edi_1
        
        int32_t var_78_1 = ecx_2
        bool var_5d_1 = sub_536340(eax_5, ecx_2, *(eax_5 + 0x10), edi_1) == 0
        
        if (var_18 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_8_2 = 0xffffffff
        var_18 = 7
        int32_t var_1c_1 = 0
        var_2c = 0
        
        if (var_48 u>= 8)
            j__free(var_5c)
        
        if (var_5d_1 != 0)
            break
        
        eax_3 = data_bac510
        result_1 += 1
        ebx_1 += 0x3c
        
        if (result_1 s>= *(eax_3 + 0xa4c75c))
            goto label_6769b7
    
    if (result_1 == 0xffffffff)
        goto label_6769b7
    
    result = result_1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
