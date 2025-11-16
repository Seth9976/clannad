// 函数: sub_4d3420
// 地址: 0x4d3420
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1c05200 == 2)
    return MessageBoxA(data_7027bc, "NT / 2000 ", 0x617078, MB_OK)

HGLOBAL eax_3 = GlobalAlloc(GMEM_ZEROINIT, sub_4cfc80(arg2) + 0x16)
int32_t* eax_4 = GlobalLock(eax_3)
*eax_4 = 0x14
eax_4[3] = 0
eax_4[4] = 0
sub_4cfd70(&eax_4[5], arg2)
GlobalUnlock(eax_3)
return SendMessageA(arg1, 0x233, eax_3, 0)
