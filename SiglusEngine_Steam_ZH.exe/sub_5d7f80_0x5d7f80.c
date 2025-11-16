// 函数: sub_5d7f80
// 地址: 0x5d7f80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x1d5) == 0)
    return 

int32_t eax = *(data_bac4e4 + 0x15c)

if (eax == 0 || eax == 1 || *(arg1 + 0x1f8) == 0xffffffff || *(arg1 + 0x1fc) == 0)
    *(arg1 + 0x1d7) = 1
    sub_5d8310(arg1)
    bool cond:0_1 = *(arg1 + 0x218) s>= 0
    *(arg1 + 0x200) = 0xffffffff
    
    if (not(cond:0_1))
        int32_t i = 0
        
        if ((*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0 s> 0)
            int32_t edi_2 = 0
            
            do
                edi_2 += 0x1c0
                i += 1
                *(edi_2 + *(arg1 + 0x228) - 0x18) = 1
            while (i s< (*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0)
        
    label_5d80d7:
        sub_5d85b0(arg1)
        eax = sub_5d95e0(arg1)
        
        if (eax.b == 0)
            *(arg1 + 0x1d5) = eax.b
else
    bool cond:1_1 = *(arg1 + 0x218) s>= 0
    *(arg1 + 0x1d6) = 0
    *(arg1 + 0x200) = 0xffffffff
    *(arg1 + 0x20c) = 0xffffffff
    
    if (not(cond:1_1))
        int32_t i_1 = 0
        
        if ((*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0 s> 0)
            int32_t edi_1 = 0
            
            do
                edi_1 += 0x1c0
                i_1 += 1
                *(edi_1 + *(arg1 + 0x228) - 0x18) = 1
            while (i_1 s< (*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0)
        
        goto label_5d80d7
