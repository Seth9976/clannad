// 函数: sub_4dd260
// 地址: 0x4dd260
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x6c) &= 0xfffffffe
int32_t* ecx = *(arg1 + 0x48)

if (ecx != 0)
    *(arg1 + 0x48) = 0
    (*(*ecx + 8))(ecx)

return 0
