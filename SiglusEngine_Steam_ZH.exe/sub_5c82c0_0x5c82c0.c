// 函数: sub_5c82c0
// 地址: 0x5c82c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

struct IUnknown pUnknown = *(arg1 + 0x38)
*(arg1 + 0x6c) |= 1
OleLockRunning(pUnknown, 1, 0)
int32_t* ecx = *(arg1 + 0x38)
*(arg1 + 0x6c) &= 0xfffffff7
(**ecx)(ecx, 0xaf2308, arg1 + 0x48)
return 0
