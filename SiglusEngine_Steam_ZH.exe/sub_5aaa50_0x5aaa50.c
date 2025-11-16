// 函数: sub_5aaa50
// 地址: 0x5aaa50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b9f61
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t ebx
ebx.b = 1
int16_t* var_38 = arg1
int32_t var_34 = 0
int32_t ecx = sub_52e820(arg1, 0xad94e4)
int32_t var_8_2 = 0
int32_t* i = *arg2
int32_t var_34_1 = 1

while (i != arg2[1])
    if (ebx.b == 0)
        ecx = sub_532910(arg1, 0xaef4d4, 2)
    
    *i
    int32_t var_50_1 = ecx
    int32_t var_8_3 = 1
    int32_t var_2c
    ecx = sub_532870(arg1, sub_6ad9b0(&var_2c), 0, 0xffffffff)
    var_8_3.b = 0
    int32_t var_18
    
    if (var_18 u>= 8)
        ecx = j__free(var_2c)
    
    i = &i[1]
    ebx.b = 0

sub_532910(arg1, &data_ad90a0, 1)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
