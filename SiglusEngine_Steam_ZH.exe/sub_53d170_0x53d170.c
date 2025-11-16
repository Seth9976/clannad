// 函数: sub_53d170
// 地址: 0x53d170
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HGDIOBJ ho = *(arg1 + 0x4bc)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0x4bc) = 0

bool cond:0 = *(arg1 + 0x4d4) u< 8
*(arg1 + 0x4d0) = 0

if (cond:0)
    *(arg1 + 0x4c0) = 0
    return 0

int16_t* result = *(arg1 + 0x4c0)
*result = 0
return result
