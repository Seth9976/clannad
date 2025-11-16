// 函数: sub_660620
// 地址: 0x660620
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9c4f48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* lpFileName_1
int32_t eax_2 = __security_cookie ^ &lpFileName_1
int32_t __saved_esi
int32_t var_3c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = data_bac504
int32_t result

if (*(ecx + 0x98) == *(ecx + 0x9c))
    result.b = 0
else if (arg2 == 0 || *(data_bac4e4 + 0x19b) == 0)
label_66070d:
    int32_t ecx_5
    result, ecx_5 = sub_65e2b0(arg3)
    
    if (result.b == 0)
        result.b = 0
    else
        if (arg4 != 0)
            int32_t var_40_4 = ecx_5
            sub_6018e0(data_bac468 + 0x304, 4)
        
        result.b = 1
else
    sub_651e40(&lpFileName_1, arg3)
    int32_t var_c_1 = 0
    int32_t* lpFileName = &lpFileName_1
    int32_t var_20
    
    if (var_20 u>= 8)
        lpFileName = lpFileName_1
    
    uint32_t eax_6 = GetFileAttributesW(lpFileName)
    enum MESSAGEBOX_RESULT eax_7
    
    if (eax_6 != 0xffffffff && (eax_6.b & 0x10) == 0)
        eax_7 = sub_60e120(data_bac510 + 0x10a08)
    
    if (eax_6 == 0xffffffff || (eax_6.b & 0x10) != 0 || eax_7 != IDNO)
        int32_t var_c_2 = 0xffffffff
        
        if (var_20 u>= 8)
            j__free(lpFileName_1)
        
        int32_t var_20_1 = 7
        int32_t var_24_1 = 0
        lpFileName_1.w = 0
        goto label_66070d
    
    sub_52e8a0(&lpFileName_1)
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &lpFileName_1)
return result
