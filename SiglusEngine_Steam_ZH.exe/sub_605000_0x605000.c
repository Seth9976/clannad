// 函数: sub_605000
// 地址: 0x605000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be008
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
sub_603660(arg1)
int16_t var_40
int16_t* var_18 = &var_40
void* const var_44 = 0xffffffff
int32_t var_2c = 7
int32_t var_30 = 0
int32_t var_48 = 0
var_40 = 0
void* arg_10
sub_52e3c0(&var_40, &arg_10, var_48, var_44)
var_8_1.b = 1
void var_58
void* var_14 = &var_58
sub_52e820(&var_58, &data_af33a4)
var_8_1.b = 2
void** eax_4 = data_bac4d8 + 0x18
int32_t var_5c_1 = 7
int32_t var_60 = 0
int16_t var_70 = 0
sub_52e3c0(&var_70, eax_4, 0, 0xffffffff)
var_8_1.b = 0
int32_t ebx

if (___std_atomic_wait_indirect@24(arg1, arg2, arg3, arg4, 0, var_70) != 0)
    arg1[0x4a] = 2
    
    if (&arg1[0x4d] != &arg_10)
        sub_52e3c0(&arg1[0x4d], &arg_10, 0, 0xffffffff)
    
    ebx.b = 1
else
    ebx.b = 0

if (arg5 u>= 8)
    j__free(arg_10)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
