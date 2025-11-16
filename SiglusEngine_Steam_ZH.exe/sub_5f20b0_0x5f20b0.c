// 函数: sub_5f20b0
// 地址: 0x5f20b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bce88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0
int32_t var_20 = 0
int32_t esi_2 = (arg2 - arg3) s>> 2
int32_t var_1c = 0
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(esi_2 + 1)
int32_t var_18 = (eax_4 - edx) s>> 1
int32_t* var_14 = &result_1
int32_t var_8_1 = 0
sub_5f2280(&result_1, arg2, arg3, esi_2, &result_1, arg4)
int32_t result = result_1

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
