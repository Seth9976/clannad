// 函数: sub_662e70
// 地址: 0x662e70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c52b9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_50 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* var_20 = arg1
int32_t var_18 = 0
*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
*arg1 = 0
int32_t* arg_4
void** ebx = arg_4
int32_t var_18_1 = 1

if (ebx[5] u>= 8)
    ebx = *ebx

int32_t* esi = nullptr
arg_4 = nullptr
int32_t var_8_1 = 1
VARIANT var_30
VariantInit(&var_30)

if ((*(*arg2 + 0x10))(arg2, ebx, 0, &var_30, 0, 0) == 0)
    int32_t eax_4
    eax_4.w = var_30...w
    
    if (eax_4.w != 1 && eax_4.w != 0x2008)
        void var_40
        VariantInit(&var_40)
        HRESULT eax_5 = VariantCopy(&var_40, &var_30)
        
        if (eax_5 s< 0)
            _com_issue_error(eax_5)
        
        var_8_1.b = 2
        ___std_fs_remove@4(&arg_4, &var_40)
        var_8_1.b = 1
        VariantClear(&var_40)
        esi = arg_4
        int16_t* eax_6
        
        if (esi == 0)
            eax_6 = nullptr
        else
            eax_6 = *esi
        
        sub_5329d0(arg1, eax_6)
    
    VariantClear(&var_30)
    
    if (esi != 0)
        int32_t eax_8
        int32_t ecx_3
        eax_8, ecx_3 = InterlockedDecrement(&esi[2])
        
        if (eax_8 == 0)
            int32_t var_54_9 = ecx_3
            sub_662d80(esi)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
