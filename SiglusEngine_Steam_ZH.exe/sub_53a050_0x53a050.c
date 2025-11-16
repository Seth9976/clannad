// 函数: sub_53a050
// 地址: 0x53a050
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0498
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** result_1
void** result_2 = result_1
void** pszFaceName = arg1 + 0x754

if (pszFaceName != result_2)
    sub_52e3c0(pszFaceName, result_2, 0, 0xffffffff)

int32_t edx = 0
void** eax_4 = data_bac4e4 + 0x11c
int16_t iCharSet
result_1 = &iCharSet
int32_t var_20_2 = 7
int32_t var_24_2 = 0
iCharSet = 0
int32_t var_8_1 = 0

if (&iCharSet != eax_4)
    edx = sub_52e3c0(&iCharSet, eax_4, 0, 0xffffffff)

int32_t var_8_2 = 0xffffffff
void** eax_5 = data_bac420
sub_53a190(eax_5, edx, &result_1, *eax_5, eax_5[1], iCharSet)
void** result = result_1

if (result != *(data_bac420 + 4))
    if (pszFaceName[5] u>= 8)
        pszFaceName = *pszFaceName
    
    iCharSet.d = zx.d(*(result + 0x17))
    HFONT eax_7 = CreateFontW(0x18, 0, 0, 0, 0x190, 0, 0, 0, iCharSet, 0, 0, 0, 0, pszFaceName)
    HWND hWnd = *(arg1 + 0x530)
    *(arg1 + 0x750) = eax_7
    HDC eax_8 = GetDC(hWnd)
    HGDIOBJ ho = SelectObject(eax_8, *(arg1 + 0x750))
    
    if (*(arg1 + 0x74c) == 0)
        *(arg1 + 0x74c) = ho
    else
        DeleteObject(ho)
    
    ReleaseDC(*(arg1 + 0x530), eax_8)
    result = SendMessageW(*(arg1 + 0x530), 0x30, *(arg1 + 0x750), 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
