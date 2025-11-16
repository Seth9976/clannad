// 函数: sub_4e1390
// 地址: 0x4e1390
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?shortsort@@YAXPAD0IP6AHPBX1@Z@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_28 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 == 0 || arg3 == 0)
    result = 0x80070057
else
    int32_t* i_1 = nullptr
    int32_t* i_3 = nullptr
    int32_t var_8_1 = 0
    int16_t* ecx_2 = arg2
    int16_t i
    
    do
        i = *ecx_2
        ecx_2 = &ecx_2[1]
    while (i != 0)
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q(((ecx_2 - &arg2[1]) s>> 1) + 1)
    int32_t edi_2 = eax_4 * 2
    int32_t edx_4 = adc.d(edx_2 << 1 | eax_4 u>> 0xffffffe1, 0, edi_2 u>= 0x80000000)
    void* eax_10
    
    if (edx_4 u<= 0 && (edx_4 u< 0 || edi_2 - 0x80000000 u<= 0xffffffff))
        char eax_7
        
        if (edi_2 s<= 0x400)
            eax_7 = sub_4d9150(edi_2)
        
        int32_t* eax_9
        
        if (edi_2 s> 0x400 || eax_7 == 0)
            eax_9 = sub_4ded10(&i_3, edi_2)
            i_1 = i_3
        else
            __alloca_probe_16(edi_2)
            eax_9 = &var_28
        
        eax_10 = sub_4e06f0(eax_9, arg2, edi_2, 3)
    
    int32_t result_1
    
    if (edx_4 u> 0 || (edx_4 u>= 0 && edi_2 - 0x80000000 u> 0xffffffff) || eax_10 == 0)
        result_1 = 0x8007000e
    else
        int32_t eax_11 = sub_4e0ed0(arg1 + 4, eax_10, arg3)
        int32_t edi_4 = neg.d(eax_11)
        result_1 = (sbb.d(edi_4, edi_4, eax_11 != 0) & 0x7ff8fff2) - 0x7ff8fff2
    
    while (i_1 != 0)
        int32_t* i_2 = i_1
        i_1 = *i_1
        _free(i_2)
    
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_5f02dd(eax_2 ^ &__saved_ebp)
return result
