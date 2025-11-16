// 函数: sub_4b9b10
// 地址: 0x4b9b10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

int32_t eax_1 = *(arg1 + 0x34)
int32_t eax_2

if (*(arg1 + 0x2c) == 0)
    *(arg1 + 0x54) = eax_1 + *(arg2 + 4)
    eax_2 = *(arg1 + 0x3c) + *(arg2 + 4)
else
    *(arg1 + 0x54) = eax_1
    eax_2 = *(arg1 + 0x3c)

bool cond:1_1 = *(arg1 + 0x30) == 0
*(arg1 + 0x5c) = eax_2
int32_t eax_5 = *(arg1 + 0x38)
int32_t eax_6

if (cond:1_1)
    *(arg1 + 0x58) = eax_5 + *(arg2 + 8)
    eax_6 = *(arg1 + 0x40) + *(arg2 + 8)
else
    *(arg1 + 0x58) = eax_5
    eax_6 = *(arg1 + 0x40)

*(arg1 + 0x60) = eax_6
int32_t eax = *(arg2 + 0x78)

if (eax == 0xffffffff && *(arg2 + 0x7c) == eax && *(arg2 + 0x80) == eax && *(arg2 + 0x84) == eax)
    return 

if (*(arg1 + 0x54) s< eax)
    *(arg1 + 0x54) = eax

int32_t eax_9 = *(arg2 + 0x80)

if (*(arg1 + 0x5c) s> eax_9)
    *(arg1 + 0x5c) = eax_9

int32_t eax_10 = *(arg2 + 0x7c)

if (*(arg1 + 0x58) s< eax_10)
    *(arg1 + 0x58) = eax_10

eax = *(arg2 + 0x84)

if (*(arg1 + 0x60) s> eax)
    *(arg1 + 0x60) = eax
