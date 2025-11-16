// 函数: ??1_StructuredTaskCollection@details@Concurrency@@QAE@XZ
// 地址: 0x5c3db0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb508
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *(arg1 + 0x114)
int32_t var_18 = *(arg1 + 0x110)
int32_t* var_14 = esi

if (esi != 0)
    esi[1]
    esi[1] += 1

int32_t var_8_1 = 0
sub_5c3c70(arg1)

if (arg1 + 0xa0 != arg2)
    sub_52e3c0(arg1 + 0xa0, arg2, 0, 0xffffffff)

struct _EXCEPTION_REGISTRATION_RECORD** result = sub_5c3e70(arg1)
int32_t var_8_2 = 0xffffffff

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    result = esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi + 4))(eax_2)
        result = &esi[2]
        struct _EXCEPTION_REGISTRATION_RECORD* edi_1 = *result
        *result -= 1
        
        if (edi_1 == 1)
            result = (*(*esi + 8))()

fsbase->NtTib.ExceptionList = ExceptionList
return result
