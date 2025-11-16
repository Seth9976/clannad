// 函数: ___std_fs_remove@4
// 地址: 0x662dc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c5268
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*arg2 != 8)
    VARIANT var_28
    VariantInit(&var_28)
    int32_t var_8_1 = 0
    
    if (&var_28 != arg2 || 8 != var_28...w)
        HRESULT eax_3 = VariantChangeType(&var_28, arg2, 0, VT_BSTR)
        
        if (eax_3 s< 0)
            _com_issue_error(eax_3)
    
    sub_662ca0(arg1, var_28...__offset(0x8).d)
    VariantClear(&var_28)
else
    sub_662ca0(arg1, *(arg2 + 8))

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
