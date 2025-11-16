// 函数: sub_4ec7c0
// 地址: 0x4ec7c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
void* result = arg3 * 0x1d4

if (*(result + 0x1090bd4) == 1 && *(arg3 * 0x3920 + 0xf8d32c) == 0)
    if (arg2 == 0x8175 || arg2 == 0x8177 || arg2 == 0x8169)
        *(arg3 * 0x3920 + 0xf8d32c) = 2
    else
        int32_t eax_1 = neg.d(arg4)
        result = sbb.d(eax_1, eax_1, arg4 != 0) + 2
        *(arg3 * 0x3920 + 0xf8d32c) = result
    
    if (*(arg3 * 0x3920 + 0xf8d328) != 0)
        result = *(arg3 * 0x3920 + 0xf8d32c)
        
        if (result != *(arg3 * 0x3920 + 0xf8d330))
            uint32_t eax_3 = sub_57fa80(arg3)
            
            if (eax_3 != 0)
                return sub_57f8f0(eax_3, 0, arg3, 1)
            
            return sub_57f8d0(arg3)

return result
