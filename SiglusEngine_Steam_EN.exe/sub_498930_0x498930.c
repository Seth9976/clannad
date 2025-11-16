// 函数: sub_498930
// 地址: 0x498930
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg2

if (esi == 0 || *esi == 0)
    return 

*(arg1 + 0x114) -= 1

while (true)
    int32_t eax
    eax.b = *esi
    
    if (eax.b == 0)
        break
    
    if (eax.b u>= 0x80 && (eax.b u< 0xa0 || eax.b u> 0xdf) && eax.b u< 0xfe)
        int32_t edx = *(arg1 + 0x114)
        
        if (edx s>= 0x1fe)
            break
        
        *(edx + arg1 + 0x118) = eax.b
        *(arg1 + 0x114) += 1
        eax.b = esi[1]
        esi = &esi[2]
        *(*(arg1 + 0x114) + arg1 + 0x118) = eax.b
        *(arg1 + 0x114) += 1
        continue
    
    int32_t edx_2 = *(arg1 + 0x114)
    
    if (edx_2 s>= 0x1ff)
        break
    
    *(edx_2 + arg1 + 0x118) = eax.b
    esi = &esi[1]
    *(arg1 + 0x114) += 1

*(arg1 + *(arg1 + 0x114) + 0x118) = 0
*(arg1 + 0x114) += 1
