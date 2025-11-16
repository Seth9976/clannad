// 函数: sub_686820
// 地址: 0x686820
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb508
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = data_bac44c
int32_t* esi = edi[0x14]
int32_t var_18 = edi[0x13]
int32_t* var_14 = esi

if (esi != 0)
    esi[1]
    esi[1] += 1

int32_t var_8_1 = 0
sub_686530(edi)

if (edi != arg1)
    sub_52e3c0(edi, arg1, 0, 0xffffffff)

struct _EXCEPTION_REGISTRATION_RECORD** result = sub_6868e0(edi)
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
