// 函数: sub_6b8240
// 地址: 0x6b8240
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb4d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_3c = nullptr
int64_t var_34 = 0
int32_t var_8_1 = 0
int32_t var_18 = 7
uint32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, 0xb00774, 2)
var_8_1.b = 1
var_8_1.b = 0
int32_t ebx
ebx.b = sub_6b7a80(&var_3c, arg1, &var_2c) == 0

if (var_18 u>= 8)
    j__free(var_2c.d)

if (ebx.b == 0)
    char* eax_4 = sub_6af1a0(&var_2c)
    var_8_1.b = 2
    void* ecx_3 = &var_2c
    
    if (var_18 u>= 0x10)
        ecx_3 = var_2c.d
    
    sub_6b7660(eax_4, var_1c, ecx_3, var_3c)
    var_8_1.b = 0
    
    if (var_18 u>= 0x10)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c.b = 0
    
    if (sub_6b73d0(var_3c) != 0)
        var_3c = nullptr
        int64_t var_34_1 = 0
    
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_2 = 0xffffffff
sub_6b73d0(var_3c)
struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
