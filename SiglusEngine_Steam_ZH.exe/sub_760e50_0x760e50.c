// 函数: sub_760e50
// 地址: 0x760e50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xfffffffe
int32_t var_c = 0xb492d8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_c_1 = var_c ^ __security_cookie_1
int32_t __saved_ebp
int32_t eax_1 = __security_cookie_1 ^ &__saved_ebp
int32_t var_3c = eax_1
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = &var_3c
BSTR result

if (arg1 != 0)
    int32_t cbMultiByte = lstrlenA(arg1) + 1
    int32_t cchWideChar = MultiByteToWideChar(0, 0, arg1, cbMultiByte, nullptr, 0)
    int32_t cchWideChar_1 = cchWideChar
    
    if (cchWideChar == 0)
        enum WIN32_ERROR eax_3 = GetLastError()
        
        if (eax_3 s> NO_ERROR)
            eax_3 = zx.d(eax_3.w) | 0x80070000
        
        _com_issue_error(eax_3)
    
    int32_t var_8_1 = 0
    int32_t eax_5 = cchWideChar * 2
    int32_t* esi_1
    
    if (cchWideChar s>= 0x1000)
        esi_1 = _malloc(eax_5)
        int32_t* var_28_2 = esi_1
        int32_t var_8_3 = 0xfffffffe
    else
        __alloca_probe_16(eax_5)
        int32_t* var_1c_1 = &var_3c
        esi_1 = &var_3c
        int32_t* var_28_1 = &var_3c
        int32_t var_8_2 = 0xfffffffe
    
    int32_t cbMultiByte_1 = cbMultiByte
    
    if (esi_1 == 0)
        cbMultiByte_1 = _com_issue_error(0x8007000e)
    
    if (MultiByteToWideChar(0, 0, arg1, cbMultiByte_1, esi_1, cchWideChar) == 0)
        if (cchWideChar s>= 0x1000)
            _free(esi_1)
        
        enum WIN32_ERROR eax_9 = GetLastError()
        
        if (eax_9 s> NO_ERROR)
            eax_9 = zx.d(eax_9.w) | 0x80070000
        
        _com_issue_error(eax_9)
    
    BSTR result_1 = SysAllocString(esi_1)
    
    if (cchWideChar s>= 0x1000)
        _free(esi_1)
    
    if (result_1 == 0)
        _com_issue_error(0x8007000e)
    
    result = result_1
else
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
