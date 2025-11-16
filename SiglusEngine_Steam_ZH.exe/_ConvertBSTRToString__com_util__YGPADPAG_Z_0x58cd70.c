// 函数: ?ConvertBSTRToString@_com_util@@YGPADPAG@Z
// 地址: 0x58cd70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b78c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = nullptr
int32_t var_18 = 0
int32_t var_8_1 = 0
int32_t* ecx = *(arg2 + 4)

if (ecx != 0)
    var_8_1.b = 1
    int32_t* var_14
    esi = *(*(*ecx + 0x14))(&var_14)
    int32_t* var_18_1 = esi
    
    if (esi != 0)
        (*(*esi + 0xc))(eax_2)
    
    var_8_1.b = 0
    int32_t* ecx_2 = var_14
    
    if (ecx_2 != 0)
        char eax_8 = (*(*ecx_2 + 0x10))(eax_2)
        int32_t* ecx_3 = var_14
        
        if (eax_8 != 0)
            ecx_3 = nullptr
        
        var_14 = ecx_3

*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0x10) = *(arg2 + 0x10)
int32_t result = *(arg2 + 8)
*(arg1 + 8) = result
int32_t* ecx_4 = *(arg1 + 4)

if (ecx_4 != 0)
    result = (*(*ecx_4 + 0x10))(eax_2)
    
    if (result.b != 0)
        *(arg1 + 4) = 0

*(arg1 + 4) = esi

if (esi != 0)
    result = (*(*esi + 0xc))(eax_2)

int32_t var_8_2 = 0xffffffff

if (esi != 0)
    result = (*(*esi + 0x10))(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
