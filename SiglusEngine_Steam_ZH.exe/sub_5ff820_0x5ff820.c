// 函数: sub_5ff820
// 地址: 0x5ff820
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd880
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
int16_t var_30 = 0
int32_t var_8_1 = 0
int32_t var_48
int16_t* eax_3 = sub_5b0600(arg2, &var_48)
var_8_1.b = 1

if (&var_30 != eax_3)
    sub_52e3c0(&var_30, eax_3, 0, 0xffffffff)

var_8_1.b = 0
int32_t var_34

if (var_34 u>= 8)
    j__free(var_48)

int32_t* edi = *arg2
int32_t edx = arg2[1]
int32_t* ecx_2 = edi
int32_t* var_50 = nullptr
int32_t var_6c_3 = 0

if (edi == edx)
    ecx_2 = nullptr

int32_t eax_4 = arg2[3]
void* esi = *(ecx_2 + eax_4)
arg2[3] = eax_4 + 4
int32_t* eax_5 = edi

if (edi == edx)
    eax_5 = var_50

int32_t eax_6 = *(eax_5 + eax_4 + 4)
arg2[3] = eax_4 + 8
int32_t* eax_7 = edi

if (edi == edx)
    eax_7 = nullptr

int16_t ebx_1
ebx_1.b = *(eax_7 + eax_4 + 8)
int32_t var_4c_1 = 0

if (edi == edx)
    edi = nullptr

char var_58 = ebx_1.b
arg2[3] = eax_4 + 9
ebx_1:1.b = *(edi + eax_4 + 9)
arg2[3] = eax_4 + 0xa
var_4c_1.b = ebx_1:1.b
void* result = sub_6000b0(arg1, esi, var_6c_3)

if (ebx_1.b != 0 || ebx_1:1.b != 0 || eax_6 s> 0)
    int32_t var_6c_4 = 7
    int32_t var_70_3 = 0
    int16_t var_80 = 0
    sub_52e3c0(&var_80, &var_30, 0, 0xffffffff)
    result = sub_5ffa00(arg1, var_58.d, 0, nullptr, 0, 0xffffffff, var_4c_1, 0, var_80)

if (7 u>= 8)
    result = j__free(var_30.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
