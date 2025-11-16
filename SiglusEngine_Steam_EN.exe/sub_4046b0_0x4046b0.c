// 函数: sub_4046b0
// 地址: 0x4046b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x18)
void* edx = *(arg1 + 4)

if (eax s<= 0xffffffff || eax s>= *(arg1 + 0x14))
    return 0

if (arg2 != 0)
    int32_t i = 0
    
    if (*(edx + 4) s> 0)
        do
            int32_t edi_3 = *(*(arg1 + 8) + (i << 2))
            i += 1
            *(*(arg1 + 0xc) + (i << 2) - 4) = edi_3 + (*(arg1 + 0x18) << 2)
        while (i s< *(edx + 4))
    
    *arg2 = *(arg1 + 0xc)

return *(arg1 + 0x14) - *(arg1 + 0x18)
