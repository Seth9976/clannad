// 函数: sub_6efc80
// 地址: 0x6efc80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd320
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
int32_t var_8_1 = 4
sub_6efe60(arg1)
var_8_1.b = 3
int32_t* result = `eh vector vbase constructor iterator'(arg1 + 0xd8, 8, 4, sub_54b010)
var_8_1.b = 2
int32_t* edi = *(arg1 + 0xd4)

if (edi != 0)
    result = &edi[1]
    bool cond:0_1 = *result != 1
    *result
    *result -= 1
    
    if (not(cond:0_1))
        (*(*edi + 4))(eax_2)
        result = &edi[2]
        bool cond:2_1 = *result != 1
        *result
        *result -= 1
        
        if (not(cond:2_1))
            result = (*(*edi + 8))()

var_8_1.b = 1
int32_t* edi_1 = *(arg1 + 0xcc)

if (edi_1 != 0)
    result = &edi_1[1]
    bool cond:1_1 = *result != 1
    *result
    *result -= 1
    
    if (not(cond:1_1))
        (*(*edi_1 + 4))(eax_2)
        result = &edi_1[2]
        bool cond:4_1 = *result != 1
        *result
        *result -= 1
        
        if (not(cond:4_1))
            result = (*(*edi_1 + 8))()

var_8_1.b = 0
int32_t* edi_2 = *(arg1 + 0xb0)

if (edi_2 != 0)
    result = &edi_2[1]
    bool cond:3_1 = *result != 1
    *result
    *result -= 1
    
    if (not(cond:3_1))
        (*(*edi_2 + 4))(eax_2)
        result = &edi_2[2]
        bool cond:6_1 = *result != 1
        *result
        *result -= 1
        
        if (not(cond:6_1))
            result = (*(*edi_2 + 8))()

int32_t var_8_2 = 0xffffffff
int32_t* edi_3 = *(arg1 + 0xa8)

if (edi_3 != 0)
    result = &edi_3[1]
    bool cond:5_1 = *result != 1
    *result
    *result -= 1
    
    if (not(cond:5_1))
        (*(*edi_3 + 4))(eax_2)
        result = &edi_3[2]
        int32_t esi_1 = *result
        *result -= 1
        
        if (esi_1 == 1)
            result = (*(*edi_3 + 8))()

fsbase->NtTib.ExceptionList = ExceptionList
return result
