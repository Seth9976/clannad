// 函数: sub_6b8570
// 地址: 0x6b8570
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb3e0
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
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, &data_af4594, 2)
var_8_1.b = 1
var_8_1.b = 0
int32_t ebx
ebx.b = sub_6b7a80(&var_3c, arg1, &var_2c) == 0

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
int32_t var_1c_1 = 0
var_2c = 0

if (ebx.b == 0)
    void* eax_4 = *arg2
    int32_t edx = arg2[1]
    void* ecx_2 = eax_4
    
    if (eax_4 == edx)
        ecx_2 = nullptr
    
    sub_6b7660(eax_4, edx - eax_4, ecx_2, var_3c)
    
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
