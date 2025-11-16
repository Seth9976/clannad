// 函数: sub_614890
// 地址: 0x614890
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf128
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edi
int32_t var_2c = edi
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = arg3
int32_t i = (arg2 - result) s>> 4

while (i s> 0)
    int32_t eax_6
    int32_t edx
    edx:eax_6 = sx.q(i)
    int32_t var_40
    int32_t* var_1c_1 = &var_40
    int32_t i_1 = (eax_6 - edx) s>> 1
    int32_t* var_14_1 = (i_1 << 4) + result
    var_40 = *arg4
    void var_3c
    sub_5b5160(&var_3c, &arg4[1])
    int32_t var_8_1 = 0
    int32_t eax_13 = *var_14_1
    void var_4c
    sub_5b5160(&var_4c, &var_14_1[1])
    int32_t var_8_2 = 0xffffffff
    
    if (arg5(eax_13) == 0)
        i = i_1
    else
        result = &var_14_1[4]
        i += 0xffffffff - i_1

fsbase->NtTib.ExceptionList = ExceptionList
return result
