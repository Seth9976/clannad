// 函数: sub_57ae10
// 地址: 0x57ae10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg4
int32_t esi = result[0x22]

if (esi != 0xffffffff && (*(arg2 + 0x2c68) == 0 || data_12a2988 s>= 1))
    result = arg5
    int32_t ecx = result[3]
    
    if (ecx s>= 0 && ecx s< 8)
        int32_t eax_3 = *(arg2 + 0x2c58) + *(arg2 + 0x294)
        return sub_57ad20(eax_3, esi, arg3, ecx, eax_3, *(arg2 + 0x2c5c) + *(arg2 + 0x298), 
            *(arg2 + 0x29c), *(arg2 + 0x2a0))

return result
