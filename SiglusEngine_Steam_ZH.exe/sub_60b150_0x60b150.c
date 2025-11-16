// 函数: sub_60b150
// 地址: 0x60b150
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0xc8) != 0xffffffff)
    if (*(arg1 + 0xd0) != 0)
        *(arg1 + 0xb0) += arg3
    else
        *(arg1 + 0xb0) += arg2

if (*(arg1 + 0xf4) != 0xffffffff)
    if (*(arg1 + 0xfc) != 0)
        *(arg1 + 0xdc) += arg3
    else
        *(arg1 + 0xdc) += arg2

if (*(arg1 + 0x120) != 0xffffffff)
    if (*(arg1 + 0x128) != 0)
        *(arg1 + 0x108) += arg3
    else
        *(arg1 + 0x108) += arg2

if (*(arg1 + 0x14c) != 0xffffffff)
    if (*(arg1 + 0x154) != 0)
        *(arg1 + 0x134) += arg3
    else
        *(arg1 + 0x134) += arg2

if (*(arg1 + 0x178) != 0xffffffff)
    if (*(arg1 + 0x180) != 0)
        *(arg1 + 0x160) += arg3
    else
        *(arg1 + 0x160) += arg2

if (*(arg1 + 0x1a4) != 0xffffffff)
    if (*(arg1 + 0x1ac) != 0)
        *(arg1 + 0x18c) += arg3
    else
        *(arg1 + 0x18c) += arg2

if (*(arg1 + 0x1d0) != 0xffffffff)
    if (*(arg1 + 0x1d8) != 0)
        *(arg1 + 0x1b8) += arg3
    else
        *(arg1 + 0x1b8) += arg2

if (*(arg1 + 0x1fc) != 0xffffffff)
    if (*(arg1 + 0x204) != 0)
        *(arg1 + 0x1e4) += arg3
    else
        *(arg1 + 0x1e4) += arg2

if (*(arg1 + 0x228) != 0xffffffff)
    if (*(arg1 + 0x230) == 0)
        *(arg1 + 0x210) += arg2
        *(arg1 + 0x23c) += arg2
        return arg2
    
    *(arg1 + 0x210) += arg3

*(arg1 + 0x23c) += arg2
return arg2
