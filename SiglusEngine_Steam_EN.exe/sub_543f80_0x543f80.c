// 函数: sub_543f80
// 地址: 0x543f80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

data_20c1660 = arg4
data_20c1658 = arg3
data_20c165c = arg2
data_20c1664 = arg5
WINNLSEnableIME(nullptr, 1)
HGLOBAL eax_2 = GlobalAlloc(GHND, 0x20)
int32_t* eax_3 = GlobalLock(eax_2)
*eax_3 = 4
eax_3[1] = 1
GlobalUnlock(eax_2)
SendIMEMessageExA(GetActiveWindow(), eax_2)
GlobalFree(eax_2)
DialogBoxParamA(data_134cebc, 0x12e, data_7027bc, sub_543f30, 0)
HGLOBAL eax_5 = GlobalAlloc(GHND, 0x20)
int32_t* eax_6 = GlobalLock(eax_5)
*eax_6 = 4
eax_6[1] = 0
GlobalUnlock(eax_5)
SendIMEMessageExA(GetActiveWindow(), eax_5)
GlobalFree(eax_5)
return WINNLSEnableIME(nullptr, 0)
