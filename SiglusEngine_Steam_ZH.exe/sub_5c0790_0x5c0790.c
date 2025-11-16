// 函数: sub_5c0790
// 地址: 0x5c0790
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@D@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (*(arg1 + 0xb4) == 0)
    int32_t var_44
    int16_t* eax_3 = sub_5483b0(arg1 + 4, &var_44)
    int32_t var_8_1 = 0
    int16_t var_2c
    int16_t* eax_4 = sub_532b80(eax_3, eax_3, &var_2c, 0xad8704)
    var_8_1.b = 1
    sub_684160(data_bac424, 2, eax_4)
    int32_t var_18
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    result = 0
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_30
    
    if (var_30 u>= 8)
        result = j__free(var_44)
else
    int32_t var_48
    int32_t var_58 = var_48
    void* var_5c_1 = arg1
    sub_54d5d0(*(arg1 + 0xa4), *(arg1 + 0xa8))
    result = *(arg1 + 0xa4)
    *(arg1 + 0xa8) = result

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
