// 函数: sub_5d7d30
// 地址: 0x5d7d30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1

if (*(arg1 + 0x1d5) == 0)
    return 

int32_t eax_2 = *(data_bac4e4 + 0x15c)

if (eax_2 == 0 || eax_2 == 1 || *(arg1 + 0x1f8) == 0xffffffff || *(arg1 + 0x1fc) == 0)
    *(arg1 + 0x1d7) = 1
    sub_5d8310(arg1)
    
    if (*(arg1 + 0x200) == 0xffffffff && *(arg1 + 0x218) == 0xffffffff)
        if (*(arg1 + 0x19a4) != *(arg1 + 0x19a8))
            sub_5e0fc0(arg1 + 0x1928)
        
        int32_t i_2 = 0
        
        if ((*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0 s> 0)
            int32_t ebx_1 = 0
            int32_t i
            
            do
                int32_t eax_17 = *(arg1 + 0x228)
                
                if (*(eax_17 + ebx_1 + 0x1a8) == 0)
                    *(eax_17 + ebx_1 + 0x1a8) = 1
                    *(*(arg1 + 0x228) + ebx_1 + 0x190) = *(arg1 + 0x1d0)
                
                int32_t edi_2 = *(arg1 + 0x228)
                
                if ((*(edi_2 + ebx_1 + 0x1b0) - *(edi_2 + ebx_1 + 0x1ac)) s/ 0x3b4
                        s> *(edi_2 + ebx_1 + 0x188))
                    int32_t edi_4
                    
                    do
                        int32_t eax_23 = sub_6210e0()
                        int32_t edx_13 = *(arg1 + 0x228)
                        int32_t edi_3 = *(edx_13 + ebx_1 + 0x190)
                        
                        if (*(arg1 + 0x1d0) - edi_3 - eax_23 s< 0)
                            break
                        
                        *(edx_13 + ebx_1 + 0x190) = eax_23 + edi_3
                        sub_5de3d0(*(arg1 + 0x228) + ebx_1)
                        edi_4 = *(arg1 + 0x228)
                    while ((*(edi_4 + ebx_1 + 0x1b0) - *(edi_4 + ebx_1 + 0x1ac)) s/ 0x3b4
                        s> *(edi_4 + ebx_1 + 0x188))
                
                ebx_1 += 0x1c0
                i = i_2 + 1
                i_2 = i
            while (i s< (*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0)
else
    *(arg1 + 0x1d7) = 0
    sub_5d8380(arg1)
    
    if (*(arg1 + 0x20c) == 0xffffffff)
        int32_t i_1 = 0
        
        if ((*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0 s> 0)
            int32_t edi_1 = 0
            
            do
                edi_1 += 0x1c0
                i_1 += 1
                *(*(arg1 + 0x228) + edi_1 - 0x18) = 1
            while (i_1 s< (*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0)
        
        sub_5d85b0(arg1)

char eax = sub_5d95e0(arg1)

if (eax == 0)
    *(arg1 + 0x1d5) = eax
