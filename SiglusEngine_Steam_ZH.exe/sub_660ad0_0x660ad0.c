// 函数: sub_660ad0
// 地址: 0x660ad0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b8868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx
ebx:1.b = arg2
ebx.b = arg1
void* edi = data_bac510
void* esi = data_bac504
int32_t result

if (*(esi + 0x98) == *(esi + 0x9c))
    result.b = 0
else if (ebx.b == 0 || *(data_bac4e4 + 0x19b) == 0)
label_660bbf:
    int32_t ecx_5
    
    if (*(edi + 0x10bc0) == 0)
        result, ecx_5 = sub_65e4c0()
        
        if (result.b != 0)
            goto label_660be9
        
        result.b = 0
    else
        sub_676610(0x2b)
        ecx_5 = 2
        sub_6613d0(2)
    label_660be9:
        
        if (ebx:1.b != 0)
            int32_t var_40_4 = ecx_5
            sub_6018e0(data_bac468 + 0x304, 4)
        
        result.b = 1
else
    int32_t* lpFileName_1
    sub_651e40(&lpFileName_1, *(edi + 0x10b8c) + *(edi + 0x10b88))
    int32_t var_8_1 = 0
    int32_t* lpFileName = &lpFileName_1
    int32_t var_18
    
    if (var_18 u>= 8)
        lpFileName = lpFileName_1
    
    uint32_t eax_4 = GetFileAttributesW(lpFileName)
    enum MESSAGEBOX_RESULT eax_5
    
    if (eax_4 != 0xffffffff && (eax_4.b & 0x10) == 0)
        eax_5 = sub_60e120(data_bac510 + 0x10a08)
    
    if (eax_4 == 0xffffffff || (eax_4.b & 0x10) != 0 || eax_5 != IDNO)
        int32_t var_8_2 = 0xffffffff
        
        if (var_18 u>= 8)
            j__free(lpFileName_1)
        
        edi = data_bac510
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        lpFileName_1.w = 0
        goto label_660bbf
    
    sub_52e8a0(&lpFileName_1)
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
