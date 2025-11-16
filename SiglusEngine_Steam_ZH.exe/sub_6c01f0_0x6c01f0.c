// 函数: sub_6c01f0
// 地址: 0x6c01f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = *(arg1 + 4)

if (hWnd == 0)
    return 

int32_t dwNewLong = *(arg1 + 0x20)

if (dwNewLong != 0)
    int32_t eax_1
    eax_1.b = *(arg1 + 0x24) != 0
    SetWindowLongW(hWnd, (eax_1 << 3) + 0xfffffffc, dwNewLong)
    *(arg1 + 0x20) = 0

RemovePropW(*(arg1 + 4), u"this")
int32_t eax = data_4ebe3ac

if (*(arg1 + 4) == eax)
    eax = 0

data_4ebe3ac = eax
*(arg1 + 4) = 0
