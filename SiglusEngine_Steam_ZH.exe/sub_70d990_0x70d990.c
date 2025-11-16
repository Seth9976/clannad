// 函数: sub_70d990
// 地址: 0x70d990
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d0b21
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* ecx
int32_t* result = sub_70d5d0(ecx)
int32_t var_8_1 = 0
int32_t* result_1 = result
result[3].w = 0
void* var_1c = &result[4]
void* var_20 = &result[4]
var_8_1.b = 1

if (result != 0xfffffff0)
    result[9] = 0xf
    result[8] = 0
    result[4].b = 0
    sub_541b40(&result[4], arg1, 0, 0xffffffff)
    result[0xa] = arg1[6]
    void* eax_4 = arg1[7]
    result[0xb] = eax_4
    
    if (eax_4 != 0)
        *(eax_4 + 4)
        *(eax_4 + 4) += 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
