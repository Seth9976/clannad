// 函数: sub_5c85e0
// 地址: 0x5c85e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x6c) &= 0xfffffffe
int32_t* ecx = *(arg1 + 0x48)

if (ecx != 0)
    *(arg1 + 0x48) = 0
    (*(*ecx + 8))(ecx)

return 0
