// 函数: sub_540e70
// 地址: 0x540e70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0b48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_134 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = data_bac4a4
int32_t edi = *(data_bac4a0 + 0x6c)
int32_t eax_4
int32_t edx
edx:eax_4 = muls.dp.d(0x77280773, esi[1] - *esi)
int32_t edx_1 = edx s>> 9
int32_t result

if (edi s< (edx_1 u>> 0x1f) + edx_1)
    DEVMODEW devMode
    devMode.dmDeviceName[0] = 0
    var_122
    _memset(&var_122, 0, 0x3e)
    var_e4
    _memset(&var_e4, 0, 0x9c)
    devMode.dmSize = 0xdc
    char var_2c
    sub_541920(&var_2c, edi * 0x44c + 0x400 + *esi)
    int32_t var_8_1 = 0
    int16_t var_44
    int16_t* lpszDeviceName = sub_6af1e0(&var_44)
    
    if (*(lpszDeviceName + 0x14) u>= 8)
        lpszDeviceName = *lpszDeviceName
    
    int32_t ebx
    ebx.b =
        EnumDisplaySettingsExW(lpszDeviceName, ENUM_CURRENT_SETTINGS, &devMode, EDS_RAWMODE) == 0
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    var_44 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (ebx.b == 0)
        int32_t* ecx_6 = (*(data_bac4a0 + 0x6c) << 4) + *(data_bac4a4 + 0xc)
        result = 0
        int32_t edx_2 = *ecx_6
        int32_t ecx_9 = (ecx_6[1] - edx_2) s>> 3
        
        if (ecx_9 s> 0)
            do
                if (*(edx_2 + (result << 3)) == devMode.dmPelsWidth
                        && *(edx_2 + (result << 3) + 4) == devMode.dmPelsHeight)
                    goto label_540fd9
                
                result += 1
            while (result s< ecx_9)

result = 0xffffffff
label_540fd9:
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
