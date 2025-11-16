// 函数: sub_6b2e00
// 地址: 0x6b2e00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cad30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_88 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_7c = 0
int32_t* var_78
sub_6af1c0(&var_78)
int32_t var_8_1 = 0
char* var_48
sub_6af1c0(&var_48)
var_8_1.b = 1
int32_t* eax_3 = &var_78
char* edx_1 = &var_48
int32_t var_64

if (var_64 u>= 0x10)
    eax_3 = var_78

int32_t var_34

if (var_34 u>= 0x10)
    edx_1 = var_48

char var_60[0x10]
char* eax_4 = sub_6bde40(eax_3, edx_1, &var_60, eax_3)
var_8_1.b = 2
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_541b40(&var_30, eax_4, 0, 0xffffffff)
var_8_1.b = 4
int32_t var_4c

if (var_4c u>= 0x10)
    j__free(var_60[0].d)

int32_t var_4c_1 = 0xf
int32_t var_50 = 0
var_60[0] = 0
sub_6af2a0(arg3)

if (var_1c u>= 0x10)
    j__free(var_30.d)

int32_t var_1c_1 = 0xf
int32_t var_20_1 = 0
var_30 = 0

if (var_34 u>= 0x10)
    j__free(var_48)

int32_t var_34_1 = 0xf
int32_t var_38 = 0
var_48.b = 0

if (var_64 u>= 0x10)
    j__free(var_78)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3
