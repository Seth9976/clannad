// 函数: sub_60d500
// 地址: 0x60d500
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be819
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t eax_3 = arg2
int32_t var_18 = eax_3
void* i = arg3
void* result = arg4
void* result_2 = result
int32_t var_8_1 = 0

for (; i != eax_3; i += 0xc8)
    void* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        __builtin_memcpy(result, i, 0x80)
        result = arg4
        *(result + 0x80) = *(i + 0x80)
        *(result + 0x98) = 7
        *(result + 0x94) = 0
        *(result + 0x84) = 0
        sub_52e3c0(result + 0x84, i + 0x84, 0, 0xffffffff)
        *(result + 0x9c) = *(i + 0x9c)
        var_8_1.b = 2
        *(result + 0xa0) = *(i + 0xa0)
        sub_597840(result + 0xa4, i + 0xa4)
        eax_3 = var_18
        *(result + 0xb0) = *(i + 0xb0)
        *(result + 0xc0) = *(i + 0xc0)
    
    result += 0xc8
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
