// 函数: sub_60b570
// 地址: 0x60b570
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = *(arg1 + 0xc8) == 0xffffffff
*(arg1 + 0xc0) = *(arg1 + 0xac)

if (not(cond:0))
    sub_5c1b40(arg1 + 0xa8)

bool cond:1 = *(arg1 + 0xf4) == 0xffffffff
*(arg1 + 0xec) = *(arg1 + 0xd8)

if (not(cond:1))
    sub_5c1b40(arg1 + 0xd4)

bool cond:2 = *(arg1 + 0x120) == 0xffffffff
*(arg1 + 0x118) = *(arg1 + 0x104)

if (not(cond:2))
    sub_5c1b40(arg1 + 0x100)

bool cond:3 = *(arg1 + 0x14c) == 0xffffffff
*(arg1 + 0x144) = *(arg1 + 0x130)

if (not(cond:3))
    sub_5c1b40(arg1 + 0x12c)

bool cond:4 = *(arg1 + 0x178) == 0xffffffff
*(arg1 + 0x170) = *(arg1 + 0x15c)

if (not(cond:4))
    sub_5c1b40(arg1 + 0x158)

bool cond:5 = *(arg1 + 0x1a4) == 0xffffffff
*(arg1 + 0x19c) = *(arg1 + 0x188)

if (not(cond:5))
    sub_5c1b40(arg1 + 0x184)

bool cond:6 = *(arg1 + 0x1d0) == 0xffffffff
*(arg1 + 0x1c8) = *(arg1 + 0x1b4)

if (not(cond:6))
    sub_5c1b40(arg1 + 0x1b0)

bool cond:7 = *(arg1 + 0x1fc) == 0xffffffff
*(arg1 + 0x1f4) = *(arg1 + 0x1e0)

if (not(cond:7))
    sub_5c1b40(arg1 + 0x1dc)

bool cond:8 = *(arg1 + 0x228) == 0xffffffff
int32_t result = *(arg1 + 0x20c)
*(arg1 + 0x220) = result

if (not(cond:8))
    result = sub_5c1b40(arg1 + 0x208)

if (*(arg1 + 0x248) == 0xffffffff)
    return result

return sub_60b290(arg1) __tailcall
