// 函数: sub_54b080
// 地址: 0x54b080
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1229
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_1a0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t (__fastcall* var_1a4)(void* arg1) = sub_54af70
void var_178
sub_74675f(&var_178, 0x164, 1, sub_54ad50)
int32_t var_8_1 = 0
int32_t var_170 = arg4
void* var_190 = &var_178
int32_t* var_18c = &var_14
int32_t var_174 = 0xa
int32_t var_180 = 0
char var_17c = 1
int32_t var_194 = 1
int32_t var_188 = 0
int32_t var_184 = 0
sub_54b210(&var_194, arg2, arg3, &var_194)
int32_t var_8_2 = 0xffffffff
`eh vector vbase constructor iterator'(&var_178, 0x164, 1, sub_54af70)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(var_14 ^ &__saved_ebp)
return result
