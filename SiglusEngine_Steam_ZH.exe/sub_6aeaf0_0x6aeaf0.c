// 函数: sub_6aeaf0
// 地址: 0x6aeaf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9caa46
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_c0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = nullptr
void* result

while (true)
    int32_t* eax_4
    
    if (arg2[5] u< 8)
        eax_4 = arg2
    else
        eax_4 = *arg2
    
    result = sub_55af30(arg3, eax_4, esi, arg2[4])
    
    if (result == 0xffffffff)
        break
    
    int32_t var_a8
    int16_t* eax_7 = sub_53d730(arg3, &var_a8, arg2[4] + result, 0xffffffff)
    int32_t var_8_1 = 0
    int16_t var_30 = 0
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    sub_52e3c0(&var_30, eax_7, 0, 0xffffffff)
    var_8_1.b = 1
    int16_t var_90
    int16_t* eax_8 = sub_53d730(arg3, &var_90, 0, result)
    var_8_1.b = 2
    int16_t var_48 = 0
    int32_t var_34_1 = 7
    int32_t var_38_1 = 0
    var_8_1.b = 3
    int16_t var_78
    int16_t* eax_10 = sub_5327a0(sub_52e3c0(&var_48, eax_8, 0, 0xffffffff), &var_48, &var_78, arg4)
    var_8_1.b = 4
    int16_t var_60
    int16_t* eax_11 = sub_5327a0(eax_10, eax_10, &var_60, &var_30)
    var_8_1.b = 5
    
    if (arg3 != eax_11)
        sub_52e3c0(arg3, eax_11, 0, 0xffffffff)
    
    int32_t var_4c
    
    if (var_4c u>= 8)
        j__free(var_60.d)
    
    var_4c = 7
    int32_t var_50_1 = 0
    var_60 = 0
    int32_t var_64
    
    if (var_64 u>= 8)
        j__free(var_78.d)
    
    var_64 = 7
    int32_t var_68_1 = 0
    var_78 = 0
    
    if (var_34_1 u>= 8)
        j__free(var_48.d)
    
    int32_t var_34_2 = 7
    int32_t var_38_2 = 0
    var_48 = 0
    int32_t var_7c
    
    if (var_7c u>= 8)
        j__free(var_90.d)
    
    var_7c = 7
    int32_t var_80_1 = 0
    var_90 = 0
    
    if (var_1c_1 u>= 8)
        j__free(var_30.d)
    
    int32_t var_8_2 = 0xffffffff
    int32_t var_1c_2 = 7
    int32_t var_20_2 = 0
    var_30 = 0
    int32_t var_94
    
    if (var_94 u>= 8)
        j__free(var_a8)
    
    esi = result + arg4[4]

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
