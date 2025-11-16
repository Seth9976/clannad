// 函数: sub_674800
// 地址: 0x674800
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6b30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx
ebx.b = arg1
int32_t* eax_3 = data_bac49c
eax_3[1] -= 1
int32_t esi = *(*eax_3 + (eax_3[1] << 2))
int32_t var_2c
int16_t* result = sub_677c10(&var_2c)
int32_t var_8_1 = 0

if (ebx.b == 3)
    int32_t var_44
    int16_t* eax_5 = sub_55d3f0(result, &var_2c, &var_44, esi)
    var_8_1.b = 1
    result = sub_60c680(data_bac49c + 0xc, eax_5)
    int32_t var_30
    
    if (var_30 u>= 8)
        result = j__free(var_44)

int32_t var_18

if (var_18 u>= 8)
    result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
