// 函数: sub_6b7d10
// 地址: 0x6b7d10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb430
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = arg2[5] u< 8
arg2[4] = 0
int32_t* eax_3

if (cond:0)
    eax_3 = arg2
else
    eax_3 = *arg2

*eax_3 = 0
int32_t* var_54 = nullptr
uint32_t var_4c = 0
int32_t var_8_1 = 0
int32_t var_1c = 0
int32_t var_18 = 7
int16_t var_2c = 0
sub_52e720(&var_2c, 0xb0077c, 2)
var_8_1.b = 1
var_8_1.b = 0
int32_t ebx
ebx.b = sub_6b7a80(&var_54, arg1, &var_2c) == 0

if (var_18 u>= 8)
    j__free(var_2c.d)

if (ebx.b == 0)
    char* var_20
    int32_t* eax_5 = sub_5b9470(&var_20, var_4c)
    var_8_1.b = 2
    char* ecx_3 = var_20
    uint32_t edx_1 = var_1c - ecx_3
    
    if (ecx_3 == var_1c)
        ecx_3 = nullptr
    
    int32_t eax_7 = sub_5979b0(&var_20, sub_6b74a0(eax_5, edx_1, ecx_3, var_54))
    int32_t* edi_1 = var_20
    int32_t* edx_2 = edi_1
    
    if (edi_1 == var_1c)
        edx_2 = nullptr
    
    int32_t var_44
    void** eax_8 = sub_6af200(eax_7, edx_2, &var_44, var_1c - edi_1)
    var_8_1.b = 3
    
    if (arg2 != eax_8)
        sub_52e3c0(arg2, eax_8, 0, 0xffffffff)
    
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    ebx.b = 1
    
    if (edi_1 != 0)
        j__free(edi_1)
else
    ebx.b = 0

int32_t var_8_2 = 0xffffffff
sub_6b73d0(var_54)
struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
