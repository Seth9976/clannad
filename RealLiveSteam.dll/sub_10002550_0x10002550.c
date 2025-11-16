// 函数: sub_10002550
// 地址: 0x10002550
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_1000fe49
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1
int32_t* result_1 = result
int32_t var_14 = 0
result[5] = 0xf
result[4] = 0
*result = 0
int32_t var_8_1 = 0
int32_t edi = result[4]
char* eax_4 = arg2[4] + 4
int32_t var_14_1 = 1

if (edi u<= eax_4 && result[5] != eax_4 && sub_10002310(arg1, eax_4, 1) != 0)
    bool cond:0_1 = result[5] u< 0x10
    result[4] = edi
    int32_t* result_2
    
    if (cond:0_1)
        result_2 = result
    else
        result_2 = *result
    
    *(result_2 + edi) = 0

sub_10001e10(result, arg2, nullptr, 0xffffffff)
sub_10001f10(result, ".sav", 4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
