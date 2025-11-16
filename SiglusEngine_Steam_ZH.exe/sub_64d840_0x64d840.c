// 函数: sub_64d840
// 地址: 0x64d840
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c39a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (*arg2 == arg2[1] || arg2[3] == 0 || arg2[4] == 0)
    result.b = 0
else
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 0xaf7410, 8)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    void* var_3c
    sub_54d190(arg1, sub_6a1200(&var_3c, &var_2c, arg2[3], arg2[4], 0, 0x400, 0x15, 1, 0))
    var_8_1.b = 0
    int32_t ecx_3 = sub_54b010(&var_3c)
    int32_t var_8_2 = 0xffffffff
    
    if (var_18_1 u>= 8)
        ecx_3 = j__free(var_2c.d)
    
    int32_t* esi_1 = *arg1
    int32_t var_50_3 = 0
    int32_t var_54_1 = ecx_3
    var_2c = 0
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    int32_t var_34
    sub_6f3b20(esi_1, ecx_3, &var_34)
    int32_t eax_4 = *arg2
    
    if (eax_4 == arg2[1])
        eax_4 = 0
    
    int32_t eax_6
    int32_t edx
    edx:eax_6 = sx.q(var_34)
    int32_t var_30
    sub_6c97b0(eax_6, ((edx & 3) + eax_6) s>> 2, var_30, esi_1[4], eax_4, arg2[3], arg2[4], 0, 0)
    sub_6f3c40(esi_1)
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
