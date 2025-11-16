// 函数: sub_651f20
// 地址: 0x651f20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3f20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_bac4d8
int32_t var_48 = 0
int32_t var_44
int16_t* eax_4 = sub_6819f0(&var_44, arg2)
int32_t var_8_1 = 0
int16_t var_2c
int16_t* eax_5 = sub_532b80(eax_4, esi + 0x48, &var_2c, &data_ad900c)
var_8_1.b = 1
sub_5327a0(eax_5, eax_5, arg1, eax_4)
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
int32_t var_1c = 0
var_2c = 0
int32_t var_30

if (var_30 u>= 8)
    j__free(var_44)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
