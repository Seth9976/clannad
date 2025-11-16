// 函数: sub_4d18c0
// 地址: 0x4d18c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_27

if (arg1 != 2)
    SYSTEMTIME systemTime
    
    if (arg1 == 0)
        GetLocalTime(&systemTime)
        uint32_t wMilliseconds = zx.d(systemTime.wMilliseconds)
        data_20bfa74 = zx.d(systemTime.wHour)
        uint32_t wMinute_1 = zx.d(systemTime.wMinute)
        uint32_t wSecond = zx.d(systemTime.wSecond)
        data_20bfa78 = wMinute_1
        data_20bfa7c = wSecond
        data_20bfa80 = wMilliseconds
        data_20bfa70 = (wMilliseconds * 2 - wMilliseconds s/ 0x21 * 0x21 + zx.d(systemTime.wHour)
            + wMinute_1 + wSecond) * 0x1010101 + (data_20bfa70 << 0x18)
        _srand(wMilliseconds)
    else if (arg1 == 1)
        GetLocalTime(&systemTime)
        uint32_t wMilliseconds_1 = zx.d(systemTime.wMilliseconds)
        data_20bfa74 = zx.d(systemTime.wHour)
        uint32_t wMinute = zx.d(systemTime.wMinute)
        uint32_t wSecond_1 = zx.d(systemTime.wSecond)
        data_20bfa7c = wSecond_1
        data_20bfa80 = wMilliseconds_1
        data_20bfa78 = wMinute
        int32_t eax_47 = (wMilliseconds_1 * 2 - wMilliseconds_1 s/ 0x21 * 0x21
            + zx.d(systemTime.wHour) + wMinute + wSecond_1 + data_20bfa70) << 8
        data_20bfa70 = eax_47
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_47
    eax_27 = data_20bfa70
else
    int32_t edi_1 = data_1392710
    
    if (data_20bfa84 != edi_1)
        int32_t eax_4 = (zx.d(edi_1.w) + data_20bfa70) s>> 1
        data_20bfa84 = edi_1
        int32_t edi_2 = edi_1 & 0xfff
        data_20bfa70 = eax_4 * 3
        int32_t eax_6 = sub_5f1303()
        int32_t edx_1 = data_1392710
        int32_t esi_2 = data_20bfa70 + eax_6 + edi_2
        data_20bfa94 = edi_2
        int32_t ecx_1 = edx_1 & 0xf
        data_20bfa70 = esi_2
        data_20bfa88 = ecx_1
        data_20bfa8c = ecx_1
        data_20bfa90 = zx.d(edx_1.b)
        data_20bfa98 = zx.d(edx_1.w)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return esi_2
    
    int32_t eax_10 = data_20bfa98 + 0x2710
    int32_t ecx_7 = data_20bfa94 + 0x3e8
    int32_t edx_3 = data_20bfa90 + 0x64
    int32_t ebx_1 = data_20bfa88
    int32_t esi_4 = data_20bfa8c + 1
    data_20bfa98 = eax_10
    data_20bfa94 = ecx_7
    int32_t ecx_8 = data_20bfa70
    data_20bfa88 = ebx_1 + 1
    data_20bfa8c = esi_4
    int32_t ecx_9 = ecx_8 + eax_10 + ecx_7 + edx_3 + esi_4 + ebx_1 + 1
    data_20bfa90 = edx_3
    int32_t eax_15
    
    if (((ebx_1 + 1).b & 1) == 0)
        eax_15 = (ecx_9 s>> 1) * 0xb
    else
        eax_15 = (ecx_9 s>> 2) * 3
    
    data_20bfa70 = eax_15
    int32_t eax_18 = sub_5f1303() + data_20bfa98 + data_20bfa94
    int32_t ebx_3 = data_20bfa90
    int32_t edi_3 = data_20bfa8c
    int32_t edx_4 = data_1392710
    int32_t esi_6 = data_20bfa70 + eax_18 + ebx_3 + edi_3 + data_20bfa88
    bool cond:0_1 = data_20bfa88 s<= 0x64
    data_20bfa70 = esi_6
    
    if (not(cond:0_1))
        data_20bfa88 = edx_4 & 0xf
    
    if (edi_3 s> 0x64)
        data_20bfa8c = edx_4 & 0xf
    
    if (ebx_3 s> 0x3e8)
        data_20bfa90 = zx.d(edx_4.b)
    
    if (data_20bfa94 s> 0x2710)
        data_20bfa94 = edx_4 & 0xfff
    
    eax_27 = esi_6
    
    if (data_20bfa98 s> 0x186a0)
        data_20bfa98 = zx.d(edx_4.w)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_27

sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_27
