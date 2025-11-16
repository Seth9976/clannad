// 函数: sub_6f1260
// 地址: 0x6f1260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd348
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg2
int32_t var_8_1 = 0
void arg_8

if (result u<= 3)
    result = sub_5b17d0(arg1 + (result << 3) + 0xd8, &arg_8)
int32_t var_8_2 = 0xffffffff

if (arg3 != 0)
    bool cond:0_1 = arg3[1] != 1
    result = arg3[1]
    arg3[1] -= 1
    
    if (not(cond:0_1))
        (*(*arg3 + 4))(eax_2)
        result = &arg3[2]
        int32_t edi_1 = *result
        *result -= 1
        
        if (edi_1 == 1)
            result = (*(*arg3 + 8))()

fsbase->NtTib.ExceptionList = ExceptionList
return result
