// 函数: sub_6152f0
// 地址: 0x6152f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf268
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx
ebx.b = arg2
void* eax_3 = data_bac4a0

if (*(eax_3 + 0x40) == 1)
    int32_t var_44
    sub_541920(&var_44, *(eax_3 + 0x5c) * 0x44c + *data_bac4a4 + 0x400)
    int32_t var_8_1 = 0
    int32_t* lpszDeviceName_1
    sub_6af1e0(&lpszDeviceName_1)
    int32_t var_30
    
    if (var_30 u>= 0x10)
        j__free(var_44)
    
    int32_t* lpszDeviceName = &lpszDeviceName_1
    int32_t var_18
    
    if (var_18 u>= 8)
        lpszDeviceName = lpszDeviceName_1
    
    ChangeDisplaySettingsExW(lpszDeviceName, nullptr, nullptr, CDS_FULLSCREEN, nullptr)
    
    if (var_18 u>= 8)
        j__free(lpszDeviceName_1)

sub_615140(arg1, ebx.b)
void* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
