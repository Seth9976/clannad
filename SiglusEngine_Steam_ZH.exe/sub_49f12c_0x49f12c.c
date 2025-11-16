// 函数: sub_49f12c
// 地址: 0x49f12c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0x80004005

*(arg1 + 0x60) = *(arg2 + 0x60)
*(arg1 + 0x64) = *(arg2 + 0x64)
*(arg1 + 0x68) = *(arg2 + 0x68)
*(arg1 + 0x6c) = *(arg2 + 0x6c)
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg1 + 0x74) = *(arg2 + 0x74)
return 0
