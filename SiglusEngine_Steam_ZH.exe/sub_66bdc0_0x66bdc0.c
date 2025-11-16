// 函数: sub_66bdc0
// 地址: 0x66bdc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6320
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
char* i = arg2
int32_t* result = arg3 - i
int32_t ecx = arg1[4]

if (ecx u<= result && arg1[5] != result)
    result = sub_541df0(arg1, result, 1)
    
    if (result.b != 0)
        bool cond:0_1 = arg1[5] u< 0x10
        arg1[4] = ecx
        
        if (cond:0_1)
            result = arg1
        else
            result = *arg1
        
        *(result + ecx) = 0

int32_t var_8_1 = 0

for (; i != arg3; i = &i[1])
    result = sub_607d90(arg1, 1, *i)

fsbase->NtTib.ExceptionList = ExceptionList
return result
