// 函数: sub_42f480
// 地址: 0x42f480
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = 0
int32_t eax_1 = arg2 - *(arg1 + 0x24)
bool cond:0 = *(arg1 + 0x54) s<= 0
void* esi = *(arg1 + 0x50)
*(arg1 + 0x28) = eax_1

if (cond:0)
    *(arg1 + 0x24) = arg2
    *(arg1 + 0x30) = 0
    return eax_1

int32_t i

do
    void* edi_1 = *(esi + 0x170)
    
    if (edi_1 != 0)
        int32_t ecx = *(esi + 8)
        int32_t edx = *(arg1 + 0x2c)
        
        if (ecx s> edx || *(arg1 + 0x30) != 0)
            if (edx s<= *(esi + 0x18))
                goto label_42f7da
            
            edx = *(esi + 0x18)
        label_42f7da:
            *(esi + 0xc) = 0xffffffff
            *(esi + 8) = edx
            *(esi + 0x34) = 0
            *(esi + 0x2c) = 0
            *(esi + 0x28) = 1
            *(esi + 0x24) = 1
            *(esi + 0x20) = 0
            *(esi + 0x14c) += 1
            sub_42ef50(esi)
        else
            int32_t eax_2 = *(esi + 0xc)
            bool cond:1_1
            
            if (eax_2 s< 0 || eax_2 s>= *(esi + 0x174))
                cond:1_1 = ecx s>= edx
            label_42f778:
                *(esi + 0xc) = 0xffffffff
                *(esi + 0x34) = 0
                *(esi + 0x2c) = 0
                *(esi + 0x28) = 1
                *(esi + 0x24) = 1
                *(esi + 0x20) = 0
                
                if (not(cond:1_1))
                    ecx += 1
                
                if (ecx s> *(esi + 0x18))
                    ecx = *(esi + 0x18)
                
                *(esi + 8) = ecx
                *(esi + 0x14c) += 1
                sub_42ef50(esi)
            else
                void* edi_2 = edi_1 + eax_2 * 0x30
                
                if (*(esi + 0x28) != 0)
                    *(esi + 0x10) = 0
                    *(esi + 0x28) = 0
                
                int32_t eax_5 = *(edi_2 + 0x18)
                
                if (eax_5 == 0)
                    if (ecx s< *(arg1 + 0x2c))
                    label_42f528:
                        edx = ecx + 1
                        
                        if (edx s> *(esi + 0x18))
                            edx = *(esi + 0x18)
                        
                        if (edx != ecx)
                            goto label_42f7da
                    else if (*(esi + 0x14) != 0)
                        *(esi + 0x14c) += 1
                        *(esi + 0x14) = 0
                else if (eax_5 == 1)
                    int32_t eax_9 = *(esi + 0x14)
                    
                    if (eax_9 s< 0 || eax_9 s>= *(edi_2 + 0x2c))
                        cond:1_1 = ecx s>= *(arg1 + 0x2c)
                        goto label_42f778
                    
                    int32_t eax_10 = *(edi_2 + 0x1c)
                    int32_t edx_1 = *(arg1 + 0x28)
                    
                    if (eax_10 == 2 || eax_10 == 3)
                        if (data_12dc610 == 0 && data_1392700 != 0)
                        label_42f6a5:
                            int32_t var_8_3 = 0
                            
                            if (ecx s< *(arg1 + 0x2c))
                                int32_t edx_7 = ecx + 1
                                
                                if (edx_7 s> *(esi + 0x18))
                                    edx_7 = *(esi + 0x18)
                                
                                if (edx_7 != ecx)
                                    *(esi + 0x14c) += 1
                                    *(esi + 0x20) = 0
                                    *(esi + 0x24) = 1
                                    *(esi + 0x28) = 1
                                    *(esi + 0x2c) = 0
                                    *(esi + 0x34) = 0
                                    *(esi + 8) = edx_7
                                    *(esi + 0xc) = 0xffffffff
                                    ecx = sub_42ef50(esi)
                            
                            if (*(edi_2 + 0x1c) == 3 && *(edi_2 + 0x14) != 0)
                                do
                                    ecx = sub_42f2e0(ecx, esi)
                                while (*(edi_2 + 0x14) != 0)
                            
                            int32_t eax_20 = *(edi_2 + 0x2c) - 1
                            
                            if (*(esi + 0x14) != eax_20)
                                *(esi + 0x14c) += 1
                                *(esi + 0x14) = eax_20
                                *(esi + 0x2c) = 1
                            
                            edx_1 = 0
                        else if (*(arg1 + 0x3c) != 0 && data_1313c7c == 0)
                            goto label_42f6a5
                    else if (data_12dc610 == 0 && data_1392700 != 0)
                    label_42f58c:
                        int32_t var_8_1 = 0
                        
                        if (ecx s>= *(arg1 + 0x2c))
                            edx_1 = 0
                        else
                            int32_t edx_2 = ecx + 1
                            
                            if (edx_2 s> *(esi + 0x18))
                                edx_2 = *(esi + 0x18)
                            
                            if (edx_2 != ecx)
                                *(esi + 0x14c) += 1
                                *(esi + 0x20) = 0
                                *(esi + 0x24) = 1
                                *(esi + 0x28) = 1
                                *(esi + 0x2c) = 0
                                *(esi + 0x34) = 0
                                *(esi + 8) = edx_2
                                *(esi + 0xc) = 0xffffffff
                                sub_42ef50(esi)
                            
                            edx_1 = 0
                    else if (*(arg1 + 0x3c) != 0 && data_1313c7c == 0)
                        goto label_42f58c
                    
                    int32_t var_8_2 = *(esi + 0x10) + edx_1
                    
                    if (*(esi + 0xc) s< 0)
                    label_42f761:
                        *(esi + 0x10) = 0
                    else
                        while (true)
                            int32_t eax_13 = *(esi + 0xc)
                            
                            if (eax_13 s>= *(esi + 0x174))
                                goto label_42f761
                            
                            int32_t eax_14 = *(esi + 0x14)
                            void* edi_5 = eax_13 * 0x30 + *(esi + 0x170)
                            
                            if (eax_14 s< 0)
                                goto label_42f761
                            
                            if (eax_14 s>= *(edi_5 + 0x2c))
                                goto label_42f761
                            
                            int32_t eax_16 = sub_42f210(esi + 0x34, 
                                eax_14 * 0xb8 + 8 + *(edi_5 + 0x28), esi, esi + 0x34)
                            int32_t edx_6 = var_8_2
                            
                            if (edx_6 u< eax_16)
                                *(esi + 0x10) = edx_6
                                break
                            
                            int32_t eax_17 = *(esi + 0x14)
                            *(esi + 0x34) = 0
                            
                            if (eax_17 s>= *(edi_5 + 0x2c) - 1)
                                if (sub_42f320(arg1, esi) == 0)
                                    goto label_42f761
                                
                                edx_6 = var_8_2
                            else
                                *(esi + 0x14c) += 1
                                *(esi + 0x14) = eax_17 + 1
                            
                            if (*(arg1 + 0x40) == 0)
                                goto label_42f761
                            
                            var_8_2 = edx_6 - eax_16
                            
                            if (*(esi + 0xc) s< 0)
                                goto label_42f761
                else if (eax_5 == 2 && ecx s< *(arg1 + 0x2c))
                    goto label_42f528
    
    esi += 0x178
    i = i_1 + 1
    i_1 = i
while (i s< *(arg1 + 0x54))
*(arg1 + 0x24) = arg2
*(arg1 + 0x30) = 0
return arg2
