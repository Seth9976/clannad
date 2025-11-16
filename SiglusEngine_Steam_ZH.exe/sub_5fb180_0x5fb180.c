// 函数: sub_5fb180
// 地址: 0x5fb180
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = *(arg1 + 0xc0) == 0xffffffff
*(arg1 + 0xb8) = *(arg1 + 0xa4)

if (not(cond:0))
    sub_5c1b40(arg1 + 0xa0)

bool cond:1 = *(arg1 + 0xec) == 0xffffffff
*(arg1 + 0xe4) = *(arg1 + 0xd0)

if (not(cond:1))
    sub_5c1b40(arg1 + 0xcc)

bool cond:2 = *(arg1 + 0x118) == 0xffffffff
*(arg1 + 0x110) = *(arg1 + 0xfc)

if (not(cond:2))
    sub_5c1b40(arg1 + 0xf8)

bool cond:3 = *(arg1 + 0x144) == 0xffffffff
*(arg1 + 0x13c) = *(arg1 + 0x128)

if (not(cond:3))
    sub_5c1b40(arg1 + 0x124)

bool cond:4 = *(arg1 + 0x170) == 0xffffffff
*(arg1 + 0x168) = *(arg1 + 0x154)

if (not(cond:4))
    sub_5c1b40(arg1 + 0x150)

bool cond:5 = *(arg1 + 0x19c) == 0xffffffff
*(arg1 + 0x194) = *(arg1 + 0x180)

if (not(cond:5))
    sub_5c1b40(arg1 + 0x17c)

bool cond:6 = *(arg1 + 0x1c8) == 0xffffffff
*(arg1 + 0x1c0) = *(arg1 + 0x1ac)

if (not(cond:6))
    sub_5c1b40(arg1 + 0x1a8)

bool cond:7 = *(arg1 + 0x1f4) == 0xffffffff
*(arg1 + 0x1ec) = *(arg1 + 0x1d8)

if (not(cond:7))
    sub_5c1b40(arg1 + 0x1d4)

bool cond:8 = *(arg1 + 0x220) == 0xffffffff
*(arg1 + 0x218) = *(arg1 + 0x204)

if (not(cond:8))
    sub_5c1b40(arg1 + 0x200)

bool cond:9 = *(arg1 + 0x24c) == 0xffffffff
*(arg1 + 0x244) = *(arg1 + 0x230)

if (not(cond:9))
    sub_5c1b40(arg1 + 0x22c)

bool cond:10 = *(arg1 + 0x278) == 0xffffffff
*(arg1 + 0x270) = *(arg1 + 0x25c)

if (not(cond:10))
    sub_5c1b40(arg1 + 0x258)

bool cond:11 = *(arg1 + 0x2a4) == 0xffffffff
*(arg1 + 0x29c) = *(arg1 + 0x288)

if (not(cond:11))
    sub_5c1b40(arg1 + 0x284)

bool cond:12 = *(arg1 + 0x2d0) == 0xffffffff
*(arg1 + 0x2c8) = *(arg1 + 0x2b4)

if (not(cond:12))
    sub_5c1b40(arg1 + 0x2b0)

bool cond:13 = *(arg1 + 0x2fc) != 0xffffffff
int32_t result = *(arg1 + 0x2e0)
*(arg1 + 0x2f4) = result

if (cond:13)
    return sub_5c1b40(arg1 + 0x2dc) __tailcall

return result
