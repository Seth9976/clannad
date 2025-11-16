// 函数: sub_710240
// 地址: 0x710240
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d10ba
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
var_14 = arg1
int32_t var_8_1 = 4
sub_708060(&arg1[0x62])
var_8_1.b = 3
sub_707970(&arg1[0x43])
var_8_1.b = 2
sub_706b40(&arg1[0x24])
var_8_1.b = 1
sub_7058f0(&arg1[4])
int32_t** eax_3 = arg1[2]
sub_710b50(&arg1[2], &var_14, *eax_3, eax_3)
j__free(arg1[2])
int32_t* eax_4 = *arg1
sub_710a90(arg1, &var_14, *eax_4, eax_4)
int32_t result = j__free(*arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
