// 函数: sub_4d7410
// 地址: 0x4d7410
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
HGLOBAL eax = GlobalAlloc(GHND, 0x20)
int32_t* eax_1 = GlobalLock(eax)
*eax_1 = 4
eax_1[1] = 1
GlobalUnlock(eax)
SendIMEMessageExA(GetActiveWindow(), eax)
return GlobalFree(eax)
