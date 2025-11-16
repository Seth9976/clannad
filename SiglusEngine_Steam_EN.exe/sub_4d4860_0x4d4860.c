// 函数: sub_4d4860
// 地址: 0x4d4860
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 

BOOL dwBytes = sub_4cfc80(arg1)

if (dwBytes s< 2 || OpenClipboard(data_7027bc) == 0)
    return 

EmptyClipboard()
HGLOBAL hMem = GlobalAlloc(GHND, dwBytes)
int32_t eax_1 = GlobalLock(hMem)
sub_4d1c30(eax_1, arg1, eax_1, dwBytes)
GlobalUnlock(hMem)
SetClipboardData(7, hMem)
CloseClipboard()
CloseClipboard()
