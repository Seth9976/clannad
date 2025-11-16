// 函数: sub_61ffe0
// 地址: 0x61ffe0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bfc08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_2 = __security_cookie ^ &var_4
int32_t var_14 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_60 = 0
void var_5c
int16_t* eax_3 = sub_698170(data_bac45c, &var_5c, arg2)
int32_t var_8_1 = 0
void var_44
int16_t* eax_4 = sub_532b80(eax_3, data_bac4e4 + 0x1a0, &var_44, &data_ad900c)
var_8_1.b = 1
void var_2c
sub_5327a0(eax_4, eax_4, &var_2c, eax_3)
void* const var_70_2 = &data_af0494
return sub_620061(&var_4, arg1, eax_2, arg3) __tailcall
