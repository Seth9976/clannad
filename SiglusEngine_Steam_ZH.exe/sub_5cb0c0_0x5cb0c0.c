// 函数: sub_5cb0c0
// 地址: 0x5cb0c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t eax_2 = *(arg1 + 0xa0)

if (eax_2 == 0)
    int32_t esi_1 = int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 0xc4))) f* *(arg1 + 0xd4))
    float xmm0_5 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xc8)))
    int32_t X_1 = esi_1 + *(arg1 + 0xdc)
    int32_t edi_1 = int.d(xmm0_5 f* *(arg1 + 0xd8))
    float xmm0_8 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xcc)))
    int32_t Y_1 = edi_1 + *(arg1 + 0xe0)
    int32_t cx = int.d(xmm0_8 f* *(arg1 + 0xd4))
    int32_t cy = int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 0xd0))) f* *(arg1 + 0xd8))
    HWND hWnd = *(data_bac404 + 4)
    
    if (hWnd != 0)
        SetWindowPos(hWnd, nullptr, X_1, Y_1, cx, cy, 0x14)
    
    HWND hwndCallback = nullptr
    uint32_t uReturnLength = 0
    wchar16* lpstrReturnString = nullptr
    int32_t cy_1 = cy
    int32_t cx_1 = cx
    void var_68
    sub_52e820(&var_68, u"put SiglusMCIMovie destination at 0 0 %d %d wait")
    int32_t var_20
    int16_t* lpstrCommand = sub_6ae4c0(&var_20, var_68)
    
    if (*(lpstrCommand + 0x14) u>= 8)
        lpstrCommand = *lpstrCommand
    
    eax_2 = mciSendStringW(lpstrCommand, lpstrReturnString, uReturnLength, hwndCallback)
    int32_t var_c
    
    if (var_c u>= 8)
        int32_t eax_4 = j__free(var_20)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_4
else if (eax_2 == 1)
    HWND hWnd_1 = data_4ebe284
    
    if (hWnd_1 != 0)
        int32_t X
        sub_5cb820(arg1 + 0xc4, &X)
        int32_t nWidth
        sub_5cb870(arg1 + 0xc4, &nWidth)
        int32_t nHeight
        int32_t Y
        eax_2 = MoveWindow(hWnd_1, X, Y, nWidth, nHeight, 0)

sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_2
