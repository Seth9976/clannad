// 函数: sub_6b1d70
// 地址: 0x6b1d70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 4) == 1)
    *(arg1 + 4) = 0

if (*(arg1 + 8) == 1)
    *(arg1 + 8) = 0

if (*(arg1 + 0xc) == 2)
    *(arg1 + 0xc) = 0

if (*(arg1 + 0x30) == 1)
    *(arg1 + 0x30) = 0

uint32_t result = timeGetTime()
int32_t edx = *(arg1 + 0x18)

if (edx == 0 || result - edx u>= 0xa)
    *(arg1 + 0x18) = result
    *(arg1 + 0x1c) = edx
    *(arg1 + 0x24) = *(arg1 + 0x20)
    *(arg1 + 0x2c) = *(arg1 + 0x28)
    *(arg1 + 0x20) = *(arg1 + 0x10)
    result = *(arg1 + 0x14)
    *(arg1 + 0x28) = result

return result
