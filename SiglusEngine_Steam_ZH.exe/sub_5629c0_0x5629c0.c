// 函数: sub_5629c0
// 地址: 0x5629c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2f56
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
int32_t var_8_1 = 1
int32_t* result = sub_6efc80(arg1 + 0x2c)
var_8_1.b = 0
int32_t* esi = *(arg1 + 0x28)

if (esi != 0)
    result = &esi[1]
    bool cond:0_1 = *result != 1
    *result
    *result -= 1
    
    if (not(cond:0_1))
        (*(*esi + 4))(eax_2)
        result = &esi[2]
        bool cond:2_1 = *result != 1
        *result
        *result -= 1
        
        if (not(cond:2_1))
            result = (*(*esi + 8))()

int32_t var_8_2 = 0xffffffff
int32_t* esi_1 = *(arg1 + 0x20)

if (esi_1 != 0)
    result = &esi_1[1]
    bool cond:1_1 = *result != 1
    *result
    *result -= 1
    
    if (not(cond:1_1))
        (*(*esi_1 + 4))(eax_2)
        result = &esi_1[2]
        int32_t edi_1 = *result
        *result -= 1
        
        if (edi_1 == 1)
            result = (*(*esi_1 + 8))()

fsbase->NtTib.ExceptionList = ExceptionList
return result
