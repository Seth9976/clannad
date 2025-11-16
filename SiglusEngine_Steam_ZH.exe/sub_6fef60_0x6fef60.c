// 函数: sub_6fef60
// 地址: 0x6fef60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd348
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t edx_2

if (arg2 s>= 0)
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = muls.dp.d(0x66666667, *(arg1 + 8) - *(arg1 + 4))
    edx_2 = edx_1 s>> 5

int32_t ebx

if (arg2 s< 0 || (edx_2 u>> 0x1f) + edx_2 s<= arg2)
    ebx.b = 0
else
    void arg_8
    sub_5b17d0(arg2 * 0x50 + 0x44 + *(arg1 + 4), &arg_8)
    ebx.b = 1

int32_t var_8_2 = 0xffffffff

if (arg3 != 0)
    bool cond:0_1 = arg3[1] != 1
    arg3[1]
    arg3[1] -= 1
    
    if (not(cond:0_1))
        (*(*arg3 + 4))(eax_2)
        int32_t edi_1 = arg3[2]
        arg3[2] -= 1
        
        if (edi_1 == 1)
            (*(*arg3 + 8))()

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
