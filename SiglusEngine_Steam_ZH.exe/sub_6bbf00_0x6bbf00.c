// 函数: sub_6bbf00
// 地址: 0x6bbf00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cbb41
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* ecx
int32_t* result = sub_6bc1c0(ecx)
int32_t var_8_1 = 0
int32_t* result_1 = result
result[3].w = 0
void* var_1c = &result[4]
void* var_20 = &result[4]
var_8_1.b = 1

if (result != 0xfffffff0)
    sub_6bc7c0(&result[4], arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
