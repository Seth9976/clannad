// 函数: sub_6c2c40
// 地址: 0x6c2c40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1130
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 == 0xffffffff)
    sub_5979b0(arg1, arg1[3] + 2)
    int16_t* ecx = *arg1
    
    if (ecx == arg1[1])
        ecx = nullptr
    
    result = arg1[3]
    *(ecx + result) = 0
    arg1[3] += 2
else if (arg2 u> 0xffff)
    void* var_48
    sub_52e820(&var_48, arg2)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    int16_t var_30
    sub_662840(arg1, sub_6adbd0(&var_30, &var_48))
    int32_t var_1c
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    result = 0
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    var_30 = 0
    int32_t var_34
    
    if (var_34 u>= 8)
        result = j__free(var_48)
else
    sub_5979b0(arg1, arg1[3] + 2)
    int16_t* ecx_1 = *arg1
    
    if (ecx_1 == arg1[1])
        ecx_1 = nullptr
    
    *(ecx_1 + arg1[3]) = 0xffff
    arg1[3] += 2
    sub_5979b0(arg1, arg1[3] + 2)
    int16_t* ecx_3 = *arg1
    
    if (ecx_3 == arg1[1])
        ecx_3 = nullptr
    
    result = arg1[3]
    *(ecx_3 + result) = arg2.w
    arg1[3] += 2

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
