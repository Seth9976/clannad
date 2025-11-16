// 函数: sub_562b10
// 地址: 0x562b10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?_wcrtomb_s_l@@YAHQAHQADI_WQAU_Mbstatet@@QAU__crt_locale_pointers@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
int32_t eax_3 = arg2
int32_t var_1c = eax_3
void* edx = arg3
void* var_18 = arg3
void* result = arg4
void* result_2 = result
int32_t var_8_1 = 0

while (edx != eax_3)
    void* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        __builtin_memcpy(result, edx, 0x80)
        *(result + 0x80) = *(edx + 0x80)
        *(result + 0x98) = 7
        *(result + 0x94) = 0
        *(result + 0x84) = 0
        sub_52e3c0(result + 0x84, edx + 0x84, 0, 0xffffffff)
        edx = var_18
        *(result + 0x9c) = *(edx + 0x9c)
        eax_3 = var_1c
        __builtin_memcpy(result + 0xa0, edx + 0xa0, 0x84)
        __builtin_memcpy(result + 0x124, edx + 0x124, 0xa0)
        *(result + 0x1c4) = *(edx + 0x1c4)
    
    result += 0x1d4
    var_8_1.b = 0
    edx += 0x1d4
    arg4 = result
    var_18 = edx

fsbase->NtTib.ExceptionList = ExceptionList
return result
