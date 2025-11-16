// 函数: sub_5a7110
// 地址: 0x5a7110
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x18) = 7
*(arg1 + 0x14) = 0
*(arg1 + 4) = 0
bool cond:0 = *(arg1 + 0x18) u< 8
*(arg1 + 0x14) = 0
int16_t* edx

if (cond:0)
    edx = arg1 + 4
else
    edx = *(arg1 + 4)

*edx = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x2c) = 0
*(arg1 + 0x30) = 0
*(arg1 + 0x34) = 0
*(arg1 + 0x54) = 0
__builtin_memset(arg1 + 0x38, 0xff, 0x14)
*(arg1 + 0x4c) = 0xfffe7961
*(arg1 + 0x50) = 0xffffffff
return arg1
