// 函数: sub_4be570
// 地址: 0x4be570
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_139270c == 0xffffffff)
    return 

WaitForSingleObject(data_641b28, 0xffffffff)
int32_t* ecx_1 = data_1392ccc

if (ecx_1 - data_641b20 u>= 0xc8)
    int32_t eax_3 = data_1bfffc0
    data_641b20 = ecx_1
    
    if (eax_3 == 1)
        sub_4be400()
    else if (eax_3 == 2)
        sub_4be440(ecx_1)
    else
        sub_4be4a0()

int32_t eax_6 = data_1bfffc0

if (eax_6 == 1)
    if (data_20be494 != 0 && data_20be490 != 1)
    label_4be5f0:
        HWND hWnd = data_1bfe270
        
        if (hWnd != 0)
            InvalidateRect(hWnd, nullptr, 0)
else if (eax_6 != 2 && sub_4be390() == 0x20e)
    goto label_4be5f0

ReleaseSemaphore(data_641b28, 1, nullptr)
