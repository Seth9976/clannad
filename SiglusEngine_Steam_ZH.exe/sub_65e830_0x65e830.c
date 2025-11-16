// 函数: sub_65e830
// 地址: 0x65e830
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b14a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = data_bac510
int32_t ecx = *(result + 0x10b8c)
int32_t edx = *(result + 0x10b88)
int32_t esi = edx + ecx

if (esi s< 0 || *(result + 0x10b90) + edx + ecx s<= esi)
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
        sub_5ce5a0()
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        int16_t var_2c = 0
        sub_52e720(&var_2c, 0xaf8214, 0xb)
        int32_t var_8_1 = 0
        sub_684160(data_bac424, 5, &var_2c)
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
        
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
