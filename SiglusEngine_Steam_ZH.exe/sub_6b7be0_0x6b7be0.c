// 函数: sub_6b7be0
// 地址: 0x6b7be0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb3e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
arg2[1] = *arg2
int32_t* var_3c = nullptr
uint32_t var_34 = 0
int32_t var_8_1 = 0
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, &data_af335c, 2)
var_8_1.b = 1
var_8_1.b = 0
int32_t ebx
ebx.b = sub_6b7a80(&var_3c, arg1, &var_2c) == 0

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
int32_t var_1c_1 = 0
var_2c = 0
uint32_t eax_5

if (ebx.b == 0)
    sub_5979b0(arg2, var_34)
    char* ecx_3 = *arg2
    
    if (ecx_3 == arg2[1])
        ecx_3 = nullptr
    
    eax_5 = sub_6b74a0(0, var_34, ecx_3, var_3c)

if (ebx.b != 0 || eax_5 s< var_34)
    ebx.b = 0
else
    if (sub_6b73d0(var_3c) != 0)
        var_3c = nullptr
        int64_t var_34_1 = 0
    
    ebx.b = 1

int32_t var_8_2 = 0xffffffff
sub_6b73d0(var_3c)
struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
