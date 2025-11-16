// 函数: sub_6f66c0
// 地址: 0x6f66c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = *arg1
*arg1 = 0

if (eax_3 != 0)
    (*(*eax_3 + 8))(eax_3)

arg1[4] = 0
arg1[1] = arg2
arg1[2] = arg3
arg1[3] = 1

if (arg2 s> 1)
    int32_t eax_4 = 1
    
    do
        eax_4 *= 2
    while (eax_4 s< arg2)
    
    arg1[3] = eax_4

arg1[4] = 1

if (arg3 s> 1)
    int32_t eax_5 = 1
    
    do
        eax_5 *= 2
    while (eax_5 s< arg3)
    
    arg1[4] = eax_5

int32_t* eax_6 = data_4ebe4b0
int32_t var_78 = arg1[4]
int32_t var_30 = 0
int32_t eax_7 = (*(*eax_6 + 0x74))(eax_6, arg1[3], var_78, 0x4b, 0, 0, 0, &var_30, 0)
int32_t* result

if (eax_7 s>= 0)
    int32_t var_8_2 = 2
    result = *arg1
    int32_t var_50_1 = 0
    *arg1 = var_30
    
    if (result != 0)
        (*(*result + 8))(result)
    
    result.b = 1
else
    int32_t var_38_1 = 7
    int32_t var_3c_1 = 0
    int16_t var_4c = 0
    sub_52e720(&var_4c, u"CreateDepthStencilSurface", 0x19)
    int32_t var_8_1 = 0
    int16_t var_2c
    sub_6f17f0(&var_2c, eax_7)
    var_8_1.b = 1
    sub_6b9da0(&var_2c, &var_4c)
    int32_t var_18
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (var_38_1 u>= 8)
        j__free(var_4c.d)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
