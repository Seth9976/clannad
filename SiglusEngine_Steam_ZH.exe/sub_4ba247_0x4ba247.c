// 函数: sub_4ba247
// 地址: 0x4ba247
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *(arg1 + 0x230)
int32_t var_20 = 0x12
int32_t i_3 = 6
int32_t i

do
    int32_t* edx_1 = *eax
    
    if (edx_1 != 0 && (*edx_1 & 0xfff00000) != 0x11000000)
        var_20 -= 3
    
    eax = &eax[1]
    i = i_3
    i_3 -= 1
while (i != 1)
int32_t i_4 = *(arg1 + 0x220)
int32_t var_1c = 0

if (i_4 u> 0)
    int32_t* var_14_1 = *(arg1 + 0x22c)
    int32_t i_2 = i_4
    int32_t edi
    int32_t var_38_1 = edi
    int32_t i_1
    
    do
        void* eax_2 = *var_14_1
        
        if (eax_2 != 0)
            int32_t eax_3 = *(eax_2 + 0xc)
            int32_t var_10_1 = 0
            
            if (eax_3 u> 0)
                int32_t eax_4 = *(arg1 + 0xc)
                
                do
                    int32_t j = 0
                    
                    if (eax_4 u> 0)
                        int32_t* var_18_1 = *(arg1 + 0x18)
                        
                        do
                            int32_t* edx_5 = *var_18_1
                            
                            if (edx_5[0xa] != 1)
                                int32_t eax_9 = sub_4b4917(*edx_5 & 0xfff00000)
                                
                                if (eax_9 == 0)
                                    int32_t var_8 = var_8 & eax_9
                                    int32_t eax_10 = edx_5[1]
                                    
                                    if (eax_10 u> 0)
                                        int32_t eax_14 = *(*(*var_14_1 + 0x10) + (var_10_1 << 2))
                                        int32_t* edx_6 = edx_5[2]
                                        
                                        do
                                            int32_t edi_2 = *edx_6
                                            
                                            if (*(*(*(arg1 + 0x14) + (edi_2 << 2)) + 0x38)
                                                    == eax_14)
                                                break
                                            
                                            if (edi_2 == eax_14)
                                                break
                                            
                                            var_8 += 1
                                            edx_6 = &edx_6[1]
                                        while (var_8 u< eax_10)
                                    
                                    if (var_8 != eax_10)
                                        break
                            
                            j += 1
                            var_18_1 = &var_18_1[1]
                        while (j u< *(arg1 + 0xc))
                    
                    eax_4 = *(arg1 + 0xc)
                    
                    if (j != eax_4)
                        var_1c += 1
                    
                    var_10_1 += 1
                while (var_10_1 u< eax_3)
        
        var_14_1 = &var_14_1[1]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    
    if (var_1c u> var_20)
        return 1

return 0
