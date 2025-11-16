// 函数: sub_5c0a40
// 地址: 0x5c0a40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb428
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void var_1c
int32_t* eax_4 = sub_6281e0(&ExceptionList, arg2, &var_1c, 0, 0)
int32_t var_8_1 = 0
int32_t ecx_1 = *eax_4
int32_t edx_1 = eax_4[1]
eax_4[1] = 0
*eax_4 = 0
*(arg1 + 0xb8) = ecx_1
int32_t* esi = *(arg1 + 0xbc)
*(arg1 + 0xbc) = edx_1

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi + 4))(eax_2)
        bool cond:2_1 = esi[2] != 1
        esi[2]
        esi[2] -= 1
        
        if (not(cond:2_1))
            (*(*esi + 8))()

int32_t var_8_2 = 0xffffffff
int32_t* var_18

if (var_18 != 0)
    bool cond:1_1 = var_18[1] != 1
    var_18[1]
    var_18[1] -= 1
    
    if (not(cond:1_1))
        (*(*var_18 + 4))(eax_2)
        int32_t edi_1 = var_18[2]
        var_18[2] -= 1
        
        if (edi_1 == 1)
            (*(*var_18 + 8))()

if (*(arg1 + 0xb8) == 0)
    eax_4.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

if (arg1 + 0xa0 != arg2)
    sub_52e3c0(arg1 + 0xa0, arg2, 0, 0xffffffff)

int32_t* eax_9
eax_9.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_9
