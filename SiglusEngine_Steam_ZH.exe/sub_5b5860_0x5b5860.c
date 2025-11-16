// 函数: sub_5b5860
// 地址: 0x5b5860
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = data_bac460
int32_t eax = esi[0x2e]

if (arg1 s> eax)
    int32_t i_2 = arg1 - eax
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t eax_5
        int32_t i
        
        do
            esi[0x2e] += 1
            int32_t edi_1 = esi[0x2e]
            
            if ((esi[0x2a] - esi[0x29]) s/ 0x30c s>= edi_1)
                void* edi_4 = esi[0x29] - 0x30c + edi_1 * 0x30c
                sub_55b2b0(edi_4 + 0x158)
                sub_55b650(edi_4 + 0x210)
                eax_5 = sub_5b6500(edi_4 + 0xa0)
                *(edi_4 + 0x2c8) = 0
                *(edi_4 + 0x2cc) = 0
                *(edi_4 + 0x2d0) = 0
                *(edi_4 + 0x2d4) = 0
            else
                eax_5 = sub_5b6840(esi, edi_1)
            
            i = i_1
            i_1 -= 1
        while (i != 1)
        return eax_5
else if (arg1 s< eax)
    int32_t ecx_9 = eax - arg1
    
    if (ecx_9 s> 0)
        eax -= ecx_9
        esi[0x2e] = eax

return eax
