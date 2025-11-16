// 函数: sub_5cb230
// 地址: 0x5cb230
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t eax_2 = *(arg1 + 0xa0)
*(arg1 + 0xa4) = arg2

if (eax_2 == 0)
    HWND hwndCallback = nullptr
    uint32_t uReturnLength = 0
    wchar16* lpstrReturnString = nullptr
    int32_t edi_3 = arg2 * 0x3e8 s/ 0xff
    int32_t var_40_1 = edi_3
    void var_58
    sub_52e820(&var_58, u"setaudio SiglusMCIMovie left volume to %d")
    int32_t var_24
    int16_t* lpstrCommand = sub_6ae4c0(&var_24, var_58)
    
    if (*(lpstrCommand + 0x14) u>= 8)
        lpstrCommand = *lpstrCommand
    
    mciSendStringW(lpstrCommand, lpstrReturnString, uReturnLength, hwndCallback)
    int32_t var_10
    
    if (var_10 u>= 8)
        j__free(var_24)
    
    HWND hwndCallback_1 = nullptr
    uint32_t uReturnLength_1 = 0
    wchar16* lpstrReturnString_1 = nullptr
    int32_t var_40_3 = edi_3
    sub_52e820(&var_58, u"setaudio SiglusMCIMovie right volume to %d")
    int16_t* lpstrCommand_1 = sub_6ae4c0(&var_24)
    
    if (*(lpstrCommand_1 + 0x14) u>= 8)
        lpstrCommand_1 = *lpstrCommand_1
    
    eax_2 = mciSendStringW(lpstrCommand_1, lpstrReturnString_1, uReturnLength_1, hwndCallback_1)
    
    if (var_10 u>= 8)
        int32_t eax_4 = j__free(var_24)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_4
else if (eax_2 == 1)
    int32_t* ecx_5 = data_4ebe298
    
    if (ecx_5 != 0)
        eax_2 = (*(*ecx_5 + 0x64))(ecx_5, arg2 * 0x64 s/ 0xff)

sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_2
