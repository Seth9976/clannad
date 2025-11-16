// 函数: sub_4b534e
// 地址: 0x4b534e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg1 + 0x224)
int32_t* esi = *(*(arg1 + 0x230) + (edx << 2) - 4)
int32_t edi
int32_t var_34 = edi
int32_t* var_14 = esi

if (esi != 0 && *esi == 0x10000004)
    int32_t eax_1 = *(arg1 + 0x14)
    int32_t* edi_1 = nullptr
    
    while (true)
        void* esi_3 = *(eax_1 + (*(edi_1 + esi[4]) << 2))
        
        if (*(esi_3 + 4) != *(arg1 + 0x84))
            break
        
        if (*(esi_3 + 0x3c) != 0)
            break
        
        if ((*(*(eax_1 + (*(edi_1 + var_14[2]) << 2)) + 0x3e) & 0x1f) != 0)
            break
        
        edi_1 = &edi_1[1]
        
        if (edi_1 u>= 0x10)
            int32_t var_c_1 = 0
            int32_t var_10_1 = 1
            int32_t var_8_1 = edx - 1
            int32_t* var_1c_1 = var_14[2]
            
            while (true)
                int32_t esi_8 = 0
                int32_t ebx_2 = 0
                
                if (var_8_1 u> 0)
                    int32_t* var_18_1 = *(arg1 + 0x230)
                    
                    do
                        int32_t* eax_8 = *var_18_1
                        
                        if (eax_8 != 0 && *eax_8 != 0)
                            int32_t i_4 = eax_8[3]
                            
                            if (i_4 u> 0)
                                int32_t* eax_9 = eax_8[4]
                                int32_t i
                                
                                do
                                    if (*eax_9 == *var_1c_1)
                                        ebx_2 = 1
                                    
                                    eax_9 = &eax_9[1]
                                    i = i_4
                                    i_4 -= 1
                                while (i != 1)
                            
                            if (ebx_2 != 0)
                                break
                        
                        var_18_1 = &var_18_1[1]
                        esi_8 += 1
                    while (esi_8 u< var_8_1)
                
                if (zx.d((*(arg1 + 0xc8)).w) != 0x104)
                    if (esi_8 u< *(arg1 + 0x4c))
                        var_10_1 = 0
                else if (esi_8 u< *(arg1 + 0x4c) && esi_8 != 0)
                    var_10_1 = 0
                
                if (ebx_2 == 0)
                    break
                
                if (esi_8 + 1 u< var_8_1)
                    int32_t* var_18_2 = *(arg1 + 0x230) + ((esi_8 + 1) << 2)
                    int32_t i_3 = var_8_1 - (esi_8 + 1)
                    int32_t i_1
                    
                    do
                        int32_t* eax_15 = *var_18_2
                        
                        if (eax_15 != 0 && *eax_15 != 0)
                            int32_t j_5 = eax_15[3]
                            
                            if (j_5 u> 0)
                                int32_t* esi_10 = eax_15[4]
                                int32_t j_3 = j_5
                                int32_t j
                                
                                do
                                    void* edx_5 = *(*(arg1 + 0x14) + (*esi_10 << 2))
                                    
                                    if (*(edx_5 + 4) == *(arg1 + 0x88) && *(edx_5 + 0x10) == var_c_1
                                            && *(edx_5 + 0xc) == 0)
                                        var_10_1 = 0
                                    
                                    esi_10 = &esi_10[1]
                                    j = j_3
                                    j_3 -= 1
                                while (j != 1)
                            
                            int32_t j_6 = eax_15[1]
                            
                            if (j_6 u> 0)
                                int32_t* eax_16 = eax_15[2]
                                int32_t j_4 = j_6
                                int32_t j_1
                                
                                do
                                    void* edx_7 = *(*(arg1 + 0x14) + (*eax_16 << 2))
                                    
                                    if (*(edx_7 + 4) == *(arg1 + 0x88) && *(edx_7 + 0x10) == var_c_1
                                            && *(edx_7 + 0xc) == 0)
                                        var_10_1 = 0
                                    
                                    eax_16 = &eax_16[1]
                                    j_1 = j_4
                                    j_4 -= 1
                                while (j_1 != 1)
                        
                        var_18_2 = &var_18_2[1]
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                
                var_c_1 += 1
                var_1c_1 = &var_1c_1[1]
                
                if (var_c_1 u>= 4)
                    int32_t* i_2 = nullptr
                    
                    if (var_10_1 != 0)
                        do
                            int32_t j_2 = 0
                            int32_t var_10_2 = 0
                            
                            if (var_8_1 u> 0)
                                int32_t eax_20
                                
                                do
                                    int32_t* eax_18 = *(*(arg1 + 0x230) + (var_10_2 << 2))
                                    
                                    if (eax_18 != 0 && *eax_18 != 0 && eax_18[3] u> 0)
                                        do
                                            int32_t edx_10 = *(eax_18[4] + (j_2 << 2))
                                            
                                            if (edx_10 == *(i_2 + var_14[2]))
                                                *(*(*(arg1 + 0x14) + (edx_10 << 2)) + 0xc) = 0
                                            
                                            j_2 += 1
                                        while (j_2 u< eax_18[3])
                                        
                                        j_2 = 0
                                    
                                    var_10_2 += 1
                                    eax_20 = *(arg1 + 0x224) - 1
                                    var_8_1 = eax_20
                                while (var_10_2 u< eax_20)
                            
                            i_2 = &i_2[1]
                        while (i_2 u< 0x10)
                        
                        *var_14 = 0
                    
                    break
            
            break
        
        esi = var_14

return 0
