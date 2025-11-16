// 函数: ??2@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
// 地址: 0x5b54c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba878
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* esi = arg3
int32_t* ebx = esi

if (esi != 0)
    result = &esi[1]
    *result
    *result = &(*result)->Next + 1
    esi = arg3

*(arg1 + 0xa4) = arg2
int32_t* edi_1 = *(arg1 + 0xa8)
*(arg1 + 0xa8) = ebx

if (edi_1 != 0)
    result = &edi_1[1]
    bool cond:0_1 = *result != 1
    *result
    *result -= 1
    
    if (not(cond:0_1))
        (*(*edi_1 + 4))(eax_2)
        result = &edi_1[2]
        bool cond:2_1 = *result != 1
        *result
        *result -= 1
        
        if (not(cond:2_1))
            result = (*(*edi_1 + 8))()
    
    esi = arg3

int32_t var_8_2 = 0xffffffff

if (esi != 0)
    result = &esi[1]
    bool cond:1_1 = *result != 1
    *result
    *result -= 1
    
    if (not(cond:1_1))
        (*(*esi + 4))(eax_2)
        result = &esi[2]
        struct _EXCEPTION_REGISTRATION_RECORD* ebx_1 = *result
        *result -= 1
        
        if (ebx_1 == 1)
            result = (*(*esi + 8))()

fsbase->NtTib.ExceptionList = ExceptionList
return result
