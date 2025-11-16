// 函数: sub_496c80
// 地址: 0x496c80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg2 + 0x4c) != 0 || *(arg2 + 0x130) != 0 || *(arg2 + 0x28) != 3 || *(arg2 + 0x24) != 3
        || *(arg2 + 0x2c) != 2 || *(arg2 + 0x78) != 3)
    return 0

void* ecx_1 = *(arg2 + 0xdc)

if (*(ecx_1 + 8) == 2 && *(ecx_1 + 0x5c) == 1 && *(ecx_1 + 0xb0) == 1 && *(ecx_1 + 0xc) s<= 2
        && *(ecx_1 + 0x60) == 1 && *(ecx_1 + 0xb4) == 1)
    int32_t edx = *(arg2 + 0x140)
    
    if (*(ecx_1 + 0x24) == edx && *(ecx_1 + 0x78) == edx && *(ecx_1 + 0xcc) == edx)
        return 1

return 0
