// 函数: sub_663b50
// 地址: 0x663b50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c54a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3
eax_3.b = arg1 != 0

if (eax_3 == 0)
    sub_5c4990(0x80070057)
    noreturn

int32_t* var_14 = nullptr
int32_t var_8_1 = 0
int16_t esi = 0x1d

if ((*(*arg1 + 0x38))(arg1, arg2, &var_14) s< 0)
    int32_t var_8_2 = 0xffffffff
    int32_t* eax_6 = var_14
    
    if (eax_6 != 0)
        (*(*eax_6 + 8))(eax_6)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0x1d

int32_t* eax_8 = var_14
void* var_18 = nullptr
int32_t result = (*(*eax_8 + 0xc))(eax_8, &var_18)
void* edx = var_18

if (result s< 0)
label_663c3f:
    
    if (edx != 0)
        int32_t* eax_9 = var_14
        (*(*eax_9 + 0x4c))(eax_9, edx)
else if (edx != 0)
    result = *(edx + 0x28)
    
    if (result == 6 || result == 0)
        uint32_t ecx_4 = zx.d(*(edx + 0x40))
        
        if (ecx_4 != 0x1d)
            if (result == 0)
                esi = 3
            else if (result == 3)
                esi = 0xd
            else if (result == 4)
                esi = 9
            else
                esi = ecx_4.w
        else
            *(edx + 0x3c)
            result = sub_663b50(eax_2)
            edx = var_18
            esi = result.w
    
    goto label_663c3f

int32_t var_8_3 = 0xffffffff
int32_t* ecx_7 = var_14

if (ecx_7 != 0)
    (*(*ecx_7 + 8))(ecx_7)

result.w = esi
fsbase->NtTib.ExceptionList = ExceptionList
return result
