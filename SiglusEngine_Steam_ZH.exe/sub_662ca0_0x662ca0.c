// 函数: sub_662ca0
// 地址: 0x662ca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c523b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
OLECHAR** psz = arg2
int32_t eax_4

if (psz != 0)
    int32_t* eax_3 = *arg1
    
    if (eax_3 == 0)
        eax_4 = 0
    else
        eax_4 = *eax_3

if (psz == 0 || eax_4 != psz)
    int32_t* esi_1 = *arg1
    
    if (esi_1 != 0)
        int32_t eax_6
        int32_t ecx
        eax_6, ecx = InterlockedDecrement(&esi_1[2])
        
        if (eax_6 == 0 && esi_1 != 0)
            int32_t var_24_2 = ecx
            sub_662d80(esi_1)
        
        *arg1 = 0
    
    OLECHAR** esi_2 = sub_745f3f(0xc)
    arg2 = esi_2
    int32_t var_8_1 = 0
    
    if (esi_2 == 0)
        esi_2 = nullptr
    else
        esi_2[1] = 0
        esi_2[2] = 1
        BSTR eax_8 = SysAllocString(psz)
        *esi_2 = eax_8
        
        if (eax_8 == 0 && psz != 0)
            _com_issue_error(0x8007000e)
            esi_2 = nullptr
    
    int32_t var_8_2 = 0xffffffff
    *arg1 = esi_2
    
    if (esi_2 == 0)
        _com_issue_error(0x8007000e)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
