// 函数: sub_5ea6c0
// 地址: 0x5ea6c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bcb48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int16_t* var_78 = 0x3f
void** arg_4
void* eax_3 = sub_55af30(&arg_4, &var_78, nullptr, 1)

if (eax_3 != 0xffffffff)
    int16_t var_5c
    int16_t* eax_4 = sub_53d730(&arg_4, &var_5c, eax_3 + 1, 0xffffffff)
    var_8_1.b = 1
    int16_t var_2c = 0
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    sub_52e3c0(&var_2c, eax_4, 0, 0xffffffff)
    var_8_1.b = 3
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 7
    int16_t* ecx_4 = &var_2c
    var_5c = 0
    
    if (var_18_1 u>= 8)
        ecx_4 = var_2c.d
    
    int32_t var_4c_1 = 0
    void* eax_6 = &ecx_4[var_1c_1]
    int16_t* ecx_5 = &var_2c
    
    if (var_18_1 u>= 8)
        ecx_5 = var_2c.d
    
    var_78 = ecx_5
    int32_t var_7c
    
    if (sub_6af490(eax_6, &var_7c, &var_78, eax_6) != 0)
        int32_t eax_8 = var_7c
        
        if (eax_8 s> 0)
            *(arg1 + 0x9ac) = eax_8
    
    int32_t var_74
    int16_t* eax_9 = sub_53d730(&arg_4, &var_74, 0, eax_3)
    var_8_1.b = 4
    int16_t var_44 = 0
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    sub_52e3c0(&var_44, eax_9, 0, 0xffffffff)
    var_8_1.b = 5
    sub_52e3c0(&arg_4, &var_44, 0, 0xffffffff)
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_2 = 7
    int32_t var_34_2 = 0
    var_44 = 0
    int32_t var_60
    
    if (var_60 u>= 8)
        j__free(var_74)
    
    var_8_1.b = 0
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)

struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x1ac) == 2)
    void** eax_10 = &arg_4
    int32_t var_90_7 = arg2
    
    if (arg3 u>= 8)
        eax_10 = arg_4
    
    result = sub_536340(arg1 + 0xd74, arg1 + 0xd74, *(arg1 + 0xd84), eax_10)

void* ebx

if (*(arg1 + 0x1ac) == 2 && result == 0)
    ebx.b = 1
else
    sub_5e5060(arg1, 1)
    *(arg1 + 0x1ac) = 2
    
    if (arg1 + 0xd74 != &arg_4)
        sub_52e3c0(arg1 + 0xd74, &arg_4, 0, 0xffffffff)
    
    if (sub_5ea8e0(arg1).b != 0)
        ebx.b = 1
    else
        ebx.b = 0

if (arg3 u>= 8)
    j__free(arg_4)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
