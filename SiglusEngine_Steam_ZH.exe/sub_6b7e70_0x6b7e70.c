// 函数: sub_6b7e70
// 地址: 0x6b7e70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb498
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = arg2[5] u< 8
arg2[4] = 0
int16_t* eax_3

if (cond:0)
    eax_3 = arg2
else
    eax_3 = *arg2

*eax_3 = 0
int32_t* var_84 = nullptr
uint32_t var_7c = 0
int32_t var_8_1 = 0
int32_t var_1c = 0
int32_t var_18 = 7
int16_t var_2c = 0
sub_52e720(&var_2c, &data_af335c, 2)
var_8_1.b = 1
var_8_1.b = 0
int32_t ebx
ebx.b = sub_6b7a80(&var_84, arg1, &var_2c) == 0

if (var_18 u>= 8)
    j__free(var_2c.d)

if (ebx.b == 0)
    char* var_6c
    int32_t* eax_5 = sub_5b9470(&var_6c, var_7c)
    var_8_1.b = 2
    char* ecx_3 = var_6c
    int32_t var_68
    uint32_t edx_1 = var_68 - ecx_3
    
    if (ecx_3 == var_68)
        ecx_3 = nullptr
    
    uint32_t eax_6 = sub_6b74a0(eax_5, edx_1, ecx_3, var_84)
    sub_5979b0(&var_6c, eax_6)
    ebx = 0
    char* edi_2 = var_6c
    
    if (eax_6 s>= 2 && *edi_2 == 0xff && edi_2[1] == 0xfe)
        ebx = 2
    
    uint32_t var_98_5 = eax_6
    int32_t var_18_1 = 7
    char* edx_2 = edi_2
    char* ecx_5 = edi_2
    int32_t var_1c_1 = 0
    
    if (edi_2 == var_68)
        ecx_5 = nullptr
    
    var_2c = 0
    
    if (edi_2 == var_68)
        edx_2 = nullptr
    
    sub_5b2590(&var_2c, &ecx_5[ebx], &edx_2[eax_6])
    var_8_1.b = 3
    
    if (arg2 != &var_2c)
        sub_52e3c0(arg2, &var_2c, 0, 0xffffffff)
    
    var_8_1.b = 2
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    int16_t var_44 = 0
    sub_52e720(&var_44, &data_ad90c0, 1)
    var_8_1.b = 4
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    sub_52e720(&var_2c, &data_af8cd0, 2)
    var_8_1.b = 5
    int16_t var_5c
    int16_t* eax_10 = sub_6aed20(&var_2c, arg2, &var_5c, &var_2c, &var_44)
    var_8_1.b = 6
    
    if (arg2 != eax_10)
        sub_52e3c0(arg2, eax_10, 0, 0xffffffff)
    
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    var_5c = 0
    
    if (var_18_2 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_3 = 7
    int32_t var_1c_3 = 0
    var_2c = 0
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
    
    ebx.b = 1
    
    if (edi_2 != 0)
        j__free(edi_2)
else
    ebx.b = 0

int32_t var_8_2 = 0xffffffff
sub_6b73d0(var_84)
struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
