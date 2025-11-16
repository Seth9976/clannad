// 函数: sub_418410
// 地址: 0x418410
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
int32_t eax_3

if (arg4 == 0)
    int32_t eax_5
    eax_5.b = *(arg2 + 0x14) != 0xffffffff
    eax_3 = eax_5 - 1
    *(arg2 + 0x234) = eax_3
else
    if (arg4 == 1)
        if (*(arg2 + 0x18) == 0xffffffff)
            *(arg2 + 0x244) = 0xffffffff
            return arg4 - 1
        
        *(arg2 + 0x244) = 0
        int32_t eax_4 = sub_481a60(*(arg3 + 0x270))
        *(arg2 + 0x254) = eax_4
        *(arg3 + 0x270) = eax_4
        *(arg3 + 0x274) = 0
        return eax_4
    
    eax_3 = arg4 - 2
    
    if (arg4 == 2)
        if (*(arg2 + 0x1c) == 0xffffffff)
            *(arg2 + 0x25c) = 0xffffffff
            return eax_3
        
        *(arg2 + 0x25c) = eax_3
        *(arg2 + 0x26c) = 0x50
        *(arg3 + 0x278) = 0xffffffff

return eax_3
