// 函数: sub_746853
// 地址: 0x746853
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 - 0x1c) = *(arg1 - 0x14)
*(arg1 - 0x20) = **(arg1 - 0x1c)

if (**(arg1 - 0x20) == 0xe06d7363)
    terminate()
    noreturn

*(arg1 - 0x24) = 0
return *(arg1 - 0x24)
