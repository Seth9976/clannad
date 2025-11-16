// 函数: sub_5b2590
// 地址: 0x5b2590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba520
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
int16_t* i = arg2
int32_t ecx = arg1[4]
int32_t result = (arg3 - i) s>> 1

if (ecx u<= result && arg1[5] != result)
    result = sub_52e660(arg1, result, 1)
    
    if (result.b != 0)
        bool cond:0_1 = arg1[5] u< 8
        arg1[4] = ecx
        
        if (cond:0_1)
            result = arg1
        else
            result = *arg1
        
        *(result + (ecx << 1)) = 0

int32_t var_8_1 = 0

for (; i != arg3; i = &i[1])
    result = sub_55d330(arg1, 1, *i)

fsbase->NtTib.ExceptionList = ExceptionList
return result
