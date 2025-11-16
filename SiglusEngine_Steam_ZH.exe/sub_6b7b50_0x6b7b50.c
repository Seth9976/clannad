// 函数: sub_6b7b50
// 地址: 0x6b7b50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb3a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_38 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_30
char* eax_3 = sub_6af1a0(&var_30)
int32_t var_8_1 = 0
void* ecx_1 = &var_30
int32_t var_1c

if (var_1c u>= 0x10)
    ecx_1 = var_30

uint32_t var_20
uint32_t result = sub_6b7660(eax_3, var_20, ecx_1, *arg1)

if (var_1c u>= 0x10)
    result = j__free(var_30)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
