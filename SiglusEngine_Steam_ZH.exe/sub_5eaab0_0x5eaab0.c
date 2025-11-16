// 函数: sub_5eaab0
// 地址: 0x5eaab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc9e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void var_18
int32_t* result = sub_6283c0(&var_18, *(arg1 + 0x264))
int32_t var_8_1 = 0
int32_t ecx_1 = *result
int32_t edx_1 = result[1]
result[1] = 0
*result = 0
*(arg1 + 0x1568) = ecx_1
int32_t* esi = *(arg1 + 0x156c)
*(arg1 + 0x156c) = edx_1

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
int32_t* var_14

if (var_14 != 0)
    bool cond:1_1 = var_14[1] != 1
    var_14[1]
    var_14[1] -= 1
    
    if (not(cond:1_1))
        (*(*var_14 + 4))(eax_2)
        int32_t edi_1 = var_14[2]
        var_14[2] -= 1
        
        if (edi_1 == 1)
            (*(*var_14 + 8))()

result.b = *(arg1 + 0x1568) != 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
