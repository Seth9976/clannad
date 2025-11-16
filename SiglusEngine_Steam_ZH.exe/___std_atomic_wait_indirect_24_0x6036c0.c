// 函数: ___std_atomic_wait_indirect@24
// 地址: 0x6036c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bdbd8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 2
int16_t var_44
int16_t* var_14 = &var_44
void* const var_48 = 0xffffffff
int32_t var_30 = 7
int32_t var_34 = 0
int32_t var_4c = 0
var_44 = 0
void* arg_44
sub_52e3c0(&var_44, &arg_44, var_4c, var_48)
var_8_1.b = 3
int16_t var_5c
int16_t* var_18 = &var_5c
void* const var_60 = 0xffffffff
int32_t var_48_1 = 7
int32_t var_4c_1 = 0
int32_t var_64 = 0
var_5c = 0
int16_t arg_2c
sub_52e3c0(&var_5c, &arg_2c, var_64, var_60)
var_8_1.b = 4
int32_t var_60_1 = 7
int32_t var_64_1 = 0
int16_t var_74 = 0
int16_t arg_14
sub_52e3c0(&var_74, &arg_14, 0, 0xffffffff)
int32_t var_78 = arg5
var_8_1.b = 2
int32_t var_7c = arg4
int32_t var_80_1 = arg3
int32_t var_84 = 0
int32_t var_88 = 0xffffffff
int32_t var_8c = 0
int32_t ebx
ebx.b = sub_603800(arg1, arg2)

if (arg6 u>= 8)
    j__free(arg_14.d)

arg6 = 7
int32_t arg_24 = 0
arg_14 = 0

if (arg7 u>= 8)
    j__free(arg_2c.d)

arg7 = 7
int32_t arg_3c = 0
arg_2c = 0

if (arg8 u>= 8)
    j__free(arg_44)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
