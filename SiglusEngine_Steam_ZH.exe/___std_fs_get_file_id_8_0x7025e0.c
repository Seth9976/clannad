// 函数: ___std_fs_get_file_id@8
// 地址: 0x7025e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cebc9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* var_4c = arg2
int32_t var_48 = 0
int32_t var_8_2 = 1
char var_44
char var_2c
char* eax_6 =
    sub_6fdcc0(arg1 + 0x1c, sub_70cd30(&ExceptionList, arg1 + 4, &var_44,  "), &var_2c, arg1 + 0x1c)
var_8_2.b = 2
arg2[5] = 0xf
arg2[4] = 0
*arg2 = 0
sub_541b40(arg2, eax_6, 0, 0xffffffff)
int32_t var_48_1 = 1
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c.d)

var_8_2.b = 0
int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t var_30

if (var_30 u>= 0x10)
    j__free(var_44.d)

bool cond:2 = *(arg1 + 0x44) == 0
int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0

if (not(cond:2))
    sub_6b3720(arg2, 0xb08800, 3)
    sub_6b3810(arg2, arg1 + 0x34, nullptr, 0xffffffff)

sub_6b3720(arg2, &data_b08814, 2)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg2
