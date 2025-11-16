// 函数: sub_55d3f0
// 地址: 0x55d3f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe19
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* var_18 = arg3
int32_t var_14 = 0
*(arg3 + 0x14) = 7
*(arg3 + 0x10) = 0
*arg3 = 0
int32_t i_1 = arg4
int32_t var_8_1 = 0
int32_t var_14_1 = 1

if (i_1 s> 0)
    int32_t i
    
    do
        sub_532870(arg3, arg2, 0, 0xffffffff)
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
