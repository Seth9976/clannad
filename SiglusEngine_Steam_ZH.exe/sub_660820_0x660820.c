// 函数: sub_660820
// 地址: 0x660820
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_bac504
int32_t result

if (*(esi + 0x98) == *(esi + 0x9c))
    result.b = 0
else if (arg2 == 0 || *(data_bac4e4 + 0x19b) == 0)
label_660900:
    int32_t ecx_4
    result, ecx_4 = sub_65e3b0(arg3)
    
    if (result.b == 0)
        result.b = 0
    else
        if (arg4 != 0)
            int32_t var_44_4 = ecx_4
            sub_6018e0(data_bac468 + 0x304, 4)
        
        result.b = 1
else
    int32_t* lpFileName_1
    sub_651e40(&lpFileName_1, *(data_bac510 + 0x10b88) + arg3)
    int32_t var_8_1 = 0
    int32_t* lpFileName = &lpFileName_1
    int32_t var_1c
    
    if (var_1c u>= 8)
        lpFileName = lpFileName_1
    
    uint32_t eax_5 = GetFileAttributesW(lpFileName)
    enum MESSAGEBOX_RESULT eax_6
    
    if (eax_5 != 0xffffffff && (eax_5.b & 0x10) == 0)
        eax_6 = sub_60e120(data_bac510 + 0x10a20)
    
    if (eax_5 == 0xffffffff || (eax_5.b & 0x10) != 0 || eax_6 != IDNO)
        int32_t var_8_2 = 0xffffffff
        
        if (var_1c u>= 8)
            j__free(lpFileName_1)
        
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        lpFileName_1.w = 0
        goto label_660900
    
    sub_52e8a0(&lpFileName_1)
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
