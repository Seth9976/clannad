// 函数: sub_4686f0
// 地址: 0x4686f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s> arg2)
    arg1 = arg3
    arg3 = arg2
    arg2 = arg1

if (arg3 s< 0 || arg2 s>= data_7031bc)
    return 

void* i_1 = arg2 - arg3 + 1

if (i_1 s<= 0)
    return 

arg1 = (arg4 + (arg3 << 1)) * 0x650 + 0x72d900
void* i

do
    int32_t ecx = *(arg1 - 0x244)
    *(arg1 - 8) = 3
    *(arg1 - 4) = 1
    *arg1 = 0
    *(arg1 + 4) = 0
    *(arg1 + 0x1c) = 0xffffffff
    *(arg1 + 8) = 0
    *(arg1 + 0xc) = 0
    *(arg1 + 0x20) = 0xffffffff
    *(arg1 + 0x24) = 0
    *(arg1 + 0x28) = 0
    *(arg1 + 0x44) = 0xffffffff
    *(arg1 + 0x58) = 0
    *(arg1 + 0x48) = 0xffffffff
    *(arg1 - 0x2c) = 0
    *(arg1 - 0x28) = 0
    *(arg1 - 0x24) = 0xff
    *(arg1 - 0x20) = 0
    
    if (ecx == 2)
        *(arg1 + 0x38) = arg5
    else
        *(arg1 - 0x104) = arg5
    
    arg1 += 0xca0
    i = i_1
    i_1 -= 1
while (i != 1)
