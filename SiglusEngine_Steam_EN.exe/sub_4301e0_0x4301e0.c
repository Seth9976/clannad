// 函数: sub_4301e0
// 地址: 0x4301e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0

if (*(arg1 + 0x54) s<= 0)
    *(arg1 + 0x34) = 0
    return 0

int32_t* edx_1 = *(arg1 + 0x50) + 0x134

do
    sub_4d1c30(i, edx_1, &edx_1[7], 0x1c)
    *edx_1 = 0xffffffff
    i += 1
    edx_1[1] = 0xffffffff
    edx_1[2] = 0xffffffff
    edx_1[3] = 0xffffffff
    edx_1 = &edx_1[0x5e]
while (i s< *(arg1 + 0x54))

*(arg1 + 0x34) = 0
return i
