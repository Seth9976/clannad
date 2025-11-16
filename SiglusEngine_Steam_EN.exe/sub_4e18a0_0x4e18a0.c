// 函数: sub_4e18a0
// 地址: 0x4e18a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_605a28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_38 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = arg1
int32_t* i_1 = nullptr
int32_t* i_3 = nullptr
int32_t var_8_1 = 0
enum WIN32_ERROR result

if (arg3 == 0)
    result = 0x80070057
else
    int16_t* ecx = arg3
    int16_t i
    
    do
        i = *ecx
        ecx = &ecx[1]
    while (i != 0)
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(((ecx - &ecx[1]) s>> 1) + 1)
    int32_t edi_1 = eax_4 * 2
    int32_t edx_3 = adc.d(edx_1 << 1 | eax_4 u>> 0xffffffe1, 0, edi_1 u>= 0x80000000)
    int32_t var_24_1 = edx_3
    void* edi_2
    
    if (edx_3 != 0 || edi_1 - 0x80000000 u> 0xffffffff)
        edi_2 = nullptr
    else
        char eax_7
        
        if (edi_1 s<= 0x400)
            eax_7 = sub_4d9150(edi_1)
        
        if (edi_1 s> 0x400 || eax_7 == 0)
            char* eax_10 = sub_4ded10(&i_3, edi_1)
            i_1 = i_3
            edi_2 = sub_4e06f0(eax_10, arg3, edi_1, 3)
        else
            __alloca_probe_16(edi_1)
            edi_2 = sub_4e06f0(&var_38, arg3, edi_1, 3)
    
    int32_t* eax_13
    
    if (sub_4d9150(0x12) == 0)
        eax_13 = sub_4ded10(&i_3, 0x12)
        i_1 = i_3
    else
        __chkstk(0x14)
        eax_13 = &var_38
    
    void* eax_14
    eax_14, arg1 = sub_4e06f0(eax_13, u"REGISTRY", 0x12, 3)
    
    if (edi_2 == 0 || eax_14 == 0)
        result = 0x8007000e
    else
        enum WIN32_ERROR result_1
        result_1, arg1 = sub_4e14b0(arg2, edi_2, eax_14, 1)
        result = result_1

while (i_1 != 0)
    int32_t* i_2 = i_1
    i_1 = *i_1
    _free(i_2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_5f02dd(eax_2 ^ &__saved_ebp)
return result
