// 函数: sub_428360
// 地址: 0x428360
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = *arg2
void* edx = &arg2[1]

while (i != 0xf423f)
    if (i - 0x7594 u<= 5)
        switch (i)
            case 0x7594
                *(arg3 + 0x10) = *edx
            case 0x7595
                *(arg3 + 0x14) = *edx
            case 0x7596
                *(arg3 + 0x18) = *edx
            case 0x7597
                *(arg3 + 0x1c) = *edx
            case 0x7598
                int32_t eax_4
                eax_4.b = *edx
                *(arg3 + 0x20) = eax_4.b
            case 0x7599
                *(arg3 + 0x24) = *edx
        
        edx += 4
    
    i = *edx
    edx += 4

*arg4 = edx
return 0
