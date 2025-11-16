// 函数: sub_68d6f0
// 地址: 0x68d6f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c8bf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = data_bac510
char eax_3 = sub_68d8c0(esi)
bool cond:0 = esi[0x293805] u< 8
void* ecx_1 = &esi[0x293800]
int32_t ebx
ebx.b = eax_3
*(ecx_1 + 0x10) = 0

if (not(cond:0))
    ecx_1 = *ecx_1

*ecx_1 = 0
int32_t* result = esi[0x2ef0]

if (result u> 3)
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    int16_t var_44 = 0
    sub_52e720(&var_44, &data_ad7c90, nullptr)
    int32_t var_8_2 = 0
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 0xafbd1c, 0x13)
    var_8_2.b = 1
    sub_6b9da0(&var_2c, &var_44)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
    
    result.b = 0
else
    int32_t* ecx_2
    
    switch (result)
        case nullptr
            ecx_2 = &esi[0x2eea]
            
            if (ecx_2 != &data_b8f020)
                int32_t var_70_1 = 0xffffffff
                int32_t var_74_1 = 0
                result = sub_52e3c0(ecx_2, &data_b8f020, 0, 0xffffffff)
        case 1
            ecx_2 = &esi[0x2eea]
            
            if (ecx_2 != &data_b8f038)
                int32_t var_70_2 = 0xffffffff
                int32_t var_74_2 = 0
                result = sub_52e3c0(ecx_2, &data_b8f038, 0, 0xffffffff)
        case 2
            ecx_2 = &esi[0x2eea]
            
            if (ecx_2 != &data_b8f050)
                int32_t var_70_3 = 0xffffffff
                int32_t var_74_3 = 0
                result = sub_52e3c0(ecx_2, &data_b8f050, 0, 0xffffffff)
    
    if (esi[0x42f6] == 1)
        int32_t var_5c
        result = sub_548cb0(result, 0xafbd44, &var_5c, &esi[0x2eea])
        int32_t var_8_1 = 2
        
        if (&esi[0x2eea] != result)
            sub_52e3c0(&esi[0x2eea], result, 0, 0xffffffff)
        
        int32_t var_48
        
        if (var_48 u>= 8)
            j__free(var_5c)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
