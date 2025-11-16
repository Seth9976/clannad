// 函数: sub_4dcf40
// 地址: 0x4dcf40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

struct IUnknown pUnknown = *(arg1 + 0x38)
*(arg1 + 0x6c) |= 1
OleLockRunning(pUnknown, 1, 0)
int32_t* ecx = *(arg1 + 0x38)
*(arg1 + 0x6c) &= 0xfffffff7
(**ecx)(ecx, 0x61d3b0, arg1 + 0x48)
return 0
