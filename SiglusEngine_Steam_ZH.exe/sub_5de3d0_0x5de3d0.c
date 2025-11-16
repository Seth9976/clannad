// 函数: sub_5de3d0
// 地址: 0x5de3d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = *(arg1 + 0x188)
int32_t i = (*(arg1 + 0x1b0) - *(arg1 + 0x1ac)) s/ 0x3b4

if (edi s< i)
    *(edi * 0x3b4 + *(arg1 + 0x1ac) + 0x20) = 1
    *(arg1 + 0x188) += 1
    int32_t edi_1 = *(arg1 + 0x188)
    
    for (i = (*(arg1 + 0x1b0) - *(arg1 + 0x1ac)) s/ 0x3b4; edi_1 s< i; 
            i = (*(arg1 + 0x1b0) - *(arg1 + 0x1ac)) s/ 0x3b4)
        i = *(arg1 + 0x1ac)
        int32_t edx_7 = edi_1 * 0x3b4
        
        if (*(edx_7 + i + 0x21) == 0)
            break
        
        *(edx_7 + i + 0x20) = 1
        *(arg1 + 0x188) += 1
        edi_1 = *(arg1 + 0x188)

return i
