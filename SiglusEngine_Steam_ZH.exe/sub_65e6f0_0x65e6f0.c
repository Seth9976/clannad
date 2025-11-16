// 函数: sub_65e6f0
// 地址: 0x65e6f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@D@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = data_bac510
int32_t edx = *(ecx + 0x10b88)
int32_t esi = edx + arg1
struct _EXCEPTION_REGISTRATION_RECORD** result

if (esi s< 0 || *(ecx + 0x10b90) + *(ecx + 0x10b8c) + edx s<= esi)
    result.b = 0
else if (sub_6a5240(data_bac504 + 0x4b068, esi).b == 0)
    result.b = 0
else
    sub_630a10()
    *(data_bac4a0 + 0x248) = 0
    sub_6304c0(0)
    int32_t ecx_3
    result, ecx_3 = sub_6551a0()
    
    if (result.b == 0)
        result.b = 0
    else if (sub_65d2f0(ecx_3).b == 0)
        result.b = 0
    else
        sub_6594f0()
        int32_t var_58_2 = sub_5ce5a0()
        int32_t var_44
        int16_t* eax_7 = sub_6ad9b0(&var_44)
        int32_t var_8_1 = 0
        int16_t var_2c
        int16_t* eax_8 = sub_532b80(eax_7, eax_7, &var_2c, 0xaf81f4)
        var_8_1.b = 1
        sub_684160(data_bac424, 5, eax_8)
        int32_t var_18
        
        if (var_18 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        var_2c = 0
        int32_t var_30
        
        if (var_30 u>= 8)
            j__free(var_44)
        
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
