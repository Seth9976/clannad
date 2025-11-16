// 函数: sub_478480
// 地址: 0x478480
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_4 = arg1
int32_t result = *(arg1 + 4)

if (result != 0xffffffff)
    int32_t edx_1 = *(arg1 + 0x430)
    
    if (edx_1 != 0xffffffff)
        int32_t var_10_1 = 0
        sub_428ac0(result, edx_1, *(arg1 + 0x190), result, *(arg1 + 0x208), arg1 + 0x3cc, 
            arg1 + 0x2d0, edx_1, *(arg1 + 0x434), *(arg1 + 0x438), arg1, 0, *(arg1 + 0x43c))
        *(arg1 + 0x2d0) = *(arg1 + 0x3b8)
        *(arg1 + 0x3a8) = *(arg1 + 0x3bc)
        *(arg1 + 0x3ac) = *(arg1 + 0x3c0)
        int32_t eax_2
        eax_2.b = *(arg1 + 0x3c4)
        *(arg1 + 0x3b0) = eax_2.b
        result = *(arg1 + 0x3c8)
        *(arg1 + 0x3b4) = result
        *(arg1 + 0x430) = 0xffffffff
        *(arg1 + 0x3b8) = 0
        *(arg1 + 0x3bc) = 0
        *(arg1 + 0x3c0) = 0
        *(arg1 + 0x3c4) = 0xff
        *(arg1 + 0x3c8) = 0

return result
