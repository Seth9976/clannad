// 函数: sub_6818c0
// 地址: 0x6818c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx

if (*(arg1 + 0x34) == 0)
    edx = *(arg1 + 0x38)
    
    if (edx == *(arg1 + 0x3c))
        edx = 0
else
    edx = *(arg1 + 0x44)

return *(arg1 + 0x4c) * arg3 + *(arg1 + 0x50) * arg2 + edx
