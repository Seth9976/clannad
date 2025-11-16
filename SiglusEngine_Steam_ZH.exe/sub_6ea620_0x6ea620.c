// 函数: sub_6ea620
// 地址: 0x6ea620
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = arg1
int32_t i_1 = 0
int32_t* edi = *(result + 0xd0)
void* result_1 = result
*(result + 0x270) = 0
int32_t* var_1c = edi
int32_t* var_34 = edi
void* var_38 = result + 0x70
int32_t i

do
    int32_t esi_1 = *(result + 0x14)
    int32_t edx_1 = *(result + 0x18)
    int32_t ebx_2 = *(result + 0xc) + esi_1
    int32_t ecx_2 = *(result + 0x10) + edx_1
    int32_t var_20_1 = esi_1
    int32_t var_24_1 = ebx_2
    int32_t var_18_1 = edx_1
    int32_t var_8_1 = ecx_2
    
    if (i_1 s> 0)
        char eax = (*(result + 0x30)).b
        
        if ((eax & 1) == 0)
            esi_1 s>>= 1
            ebx_2 = (ebx_2 + 1) s>> 1
            var_20_1 = esi_1
            var_24_1 = ebx_2
        
        if ((eax & 2) == 0)
            edx_1 s>>= 1
            ecx_2 = (ecx_2 + 1) s>> 1
            var_18_1 = edx_1
            var_8_1 = ecx_2
    
    int32_t var_2c_1 = 0
    var_34 = &var_34[*(var_38 + 0xc)]
    int32_t* edi_3 = var_1c
    
    while (edi_3 u< var_34)
        void* eax_5 = &edi_3[*var_38]
        
        if (edi_3 u< eax_5)
            int32_t* eax_6 = var_1c
            int32_t edi_4 = 8
            int32_t var_28_1 = 8
            
            do
                if (edi_4 s<= esi_1)
                    *eax_6 |= 2
                else if (ebx_2 s<= edi_4 - 8 || var_2c_1 + 8 s<= edx_1 || ecx_2 s<= var_2c_1
                        || esi_1 s>= ebx_2 || edx_1 s>= ecx_2)
                    eax_6 = var_1c
                    *eax_6 |= 2
                else if ((edi_4 - 8 s>= esi_1 || esi_1 s>= edi_4)
                        && (edi_4 - 8 s>= ebx_2 || ebx_2 s>= edi_4)
                        && (var_2c_1 s>= edx_1 || edx_1 s>= var_2c_1 + 8)
                        && (var_2c_1 s>= ecx_2 || ecx_2 s>= var_2c_1 + 8))
                    eax_6 = var_1c
                    *eax_6 |= 0xf800
                else
                    int32_t eax_10 = var_2c_1
                    int32_t var_c_1 = 0
                    int32_t edx_2 = var_20_1
                    int64_t var_14_1 = 0
                    int32_t ebx_4 = 0
                    int32_t esi_2 = 0
                    int32_t j_1 = 0
                    var_14_1:4.d = 0
                    
                    for (int32_t j = 0; j s< 8; )
                        int32_t edi_5 = j << 3
                        int32_t edx_4
                        
                        if (edi_4 - 8 s< edx_2)
                            edx_4 = var_18_1
                        else
                            edx_4 = var_18_1
                            
                            if (edi_4 - 8 s< var_24_1 && eax_10 s>= edx_4 && eax_10 s< ecx_2)
                                int32_t esi_3 = 0
                                int32_t edx_5 = 1 << (edi_5 u% 0x20)
                                
                                if (edi_5 u>= 0x20)
                                    esi_3 = edx_5
                                
                                int32_t edx_6 = edx_5 ^ esi_3
                                
                                if (edi_5 u>= 0x40)
                                    esi_3 = edx_6
                                
                                var_14_1:4.d |= edx_6
                                ebx_4 |= esi_3
                                var_c_1 += 1
                                esi_2 = var_14_1:4.d
                                edx_4 = var_18_1
                        
                        int32_t edx_7
                        
                        if (var_28_1 - 7 s< var_20_1 || var_28_1 - 7 s>= var_24_1)
                            edx_7 = var_8_1
                        else
                            edx_7 = var_8_1
                            
                            if (eax_10 s>= edx_4 && eax_10 s< edx_7)
                                int32_t esi_5 = edi_5 | 1
                                int32_t edx_8 = 0
                                int32_t ecx_7 = 1 << (esi_5 u% 0x20)
                                
                                if (esi_5 u>= 0x20)
                                    edx_8 = ecx_7
                                
                                int32_t ecx_8 = ecx_7 ^ edx_8
                                
                                if (esi_5 u>= 0x40)
                                    edx_8 = ecx_8
                                
                                esi_2 = var_14_1:4.d | ecx_8
                                ebx_4 |= edx_8
                                var_14_1:4.d = esi_2
                                var_c_1 += 1
                                edx_7 = var_8_1
                        
                        if (var_28_1 - 6 s>= var_20_1 && var_28_1 - 6 s< var_24_1
                                && eax_10 s>= var_18_1 && eax_10 s< edx_7)
                            int32_t esi_8 = edi_5 | 2
                            int32_t edx_9 = 0
                            int32_t ecx_11 = 1 << (esi_8 u% 0x20)
                            
                            if (esi_8 u>= 0x20)
                                edx_9 = ecx_11
                            
                            int32_t ecx_12 = ecx_11 ^ edx_9
                            
                            if (esi_8 u>= 0x40)
                                edx_9 = ecx_12
                            
                            esi_2 = var_14_1:4.d | ecx_12
                            ebx_4 |= edx_9
                            var_14_1:4.d = esi_2
                            var_c_1 += 1
                        
                        int32_t edx_10 = var_8_1
                        
                        if (var_28_1 - 5 s>= var_20_1 && var_28_1 - 5 s< var_24_1
                                && eax_10 s>= var_18_1 && eax_10 s< edx_10)
                            int32_t edx_11 = 0
                            int32_t esi_11 = edi_5 | 3
                            int32_t ecx_15 = 1 << (esi_11 u% 0x20)
                            
                            if (esi_11 u>= 0x20)
                                edx_11 = ecx_15
                            
                            int32_t ecx_16 = ecx_15 ^ edx_11
                            
                            if (esi_11 u>= 0x40)
                                edx_11 = ecx_16
                            
                            esi_2 = var_14_1:4.d | ecx_16
                            ebx_4 |= edx_11
                            var_14_1:4.d = esi_2
                            var_c_1 += 1
                            edx_10 = var_8_1
                        
                        if (var_28_1 - 4 s>= var_20_1 && var_28_1 - 4 s< var_24_1
                                && eax_10 s>= var_18_1 && eax_10 s< edx_10)
                            int32_t esi_14 = edi_5 | 4
                            int32_t edx_12 = 0
                            int32_t ecx_19 = 1 << (esi_14 u% 0x20)
                            
                            if (esi_14 u>= 0x20)
                                edx_12 = ecx_19
                            
                            int32_t ecx_20 = ecx_19 ^ edx_12
                            
                            if (esi_14 u>= 0x40)
                                edx_12 = ecx_20
                            
                            esi_2 = var_14_1:4.d | ecx_20
                            ebx_4 |= edx_12
                            var_14_1:4.d = esi_2
                            var_c_1 += 1
                        
                        int32_t edx_13 = var_8_1
                        
                        if (var_28_1 - 3 s>= var_20_1 && var_28_1 - 3 s< var_24_1
                                && eax_10 s>= var_18_1 && eax_10 s< edx_13)
                            int32_t edx_14 = 0
                            int32_t esi_17 = edi_5 | 5
                            int32_t ecx_23 = 1 << (esi_17 u% 0x20)
                            
                            if (esi_17 u>= 0x20)
                                edx_14 = ecx_23
                            
                            int32_t ecx_24 = ecx_23 ^ edx_14
                            
                            if (esi_17 u>= 0x40)
                                edx_14 = ecx_24
                            
                            esi_2 = var_14_1:4.d | ecx_24
                            ebx_4 |= edx_14
                            var_14_1:4.d = esi_2
                            var_c_1 += 1
                            edx_13 = var_8_1
                        
                        if (var_28_1 - 2 s>= var_20_1 && var_28_1 - 2 s< var_24_1
                                && eax_10 s>= var_18_1 && eax_10 s< edx_13)
                            int32_t esi_20 = edi_5 | 6
                            int32_t edx_15 = 0
                            int32_t ecx_27 = 1 << (esi_20 u% 0x20)
                            
                            if (esi_20 u>= 0x20)
                                edx_15 = ecx_27
                            
                            int32_t ecx_28 = ecx_27 ^ edx_15
                            
                            if (esi_20 u>= 0x40)
                                edx_15 = ecx_28
                            
                            esi_2 = var_14_1:4.d | ecx_28
                            ebx_4 |= edx_15
                            var_14_1:4.d = esi_2
                            var_c_1 += 1
                        
                        edx_2 = var_20_1
                        
                        if (var_28_1 - 1 s< edx_2)
                            ecx_2 = var_8_1
                        else
                            ecx_2 = var_8_1
                            
                            if (var_28_1 - 1 s< var_24_1 && eax_10 s>= var_18_1 && eax_10 s< ecx_2)
                                int32_t edi_6 = edi_5 | 7
                                int32_t edx_16 = 0
                                int32_t ecx_31 = 1 << (edi_6 u% 0x20)
                                
                                if (edi_6 u>= 0x20)
                                    edx_16 = ecx_31
                                
                                int32_t ecx_32 = ecx_31 ^ edx_16
                                
                                if (edi_6 u>= 0x40)
                                    edx_16 = ecx_32
                                
                                esi_2 |= ecx_32
                                ebx_4 |= edx_16
                                var_14_1:4.d = esi_2
                                var_c_1 += 1
                                edx_2 = var_20_1
                                ecx_2 = var_8_1
                        
                        eax_10 += 1
                        j = j_1 + 1
                        j_1 = j
                    
                    int32_t ecx_33 = 0
                    int32_t edx_17 = *(result_1 + 0x270)
                    
                    if (edx_17 s<= 0)
                    label_6ea9b7:
                        *(result_1 + 0x270) = edx_17 + 1
                        int32_t eax_14 = ecx_33 * 2
                        *(result_1 + (eax_14 << 3) + 0x278) = esi_2
                        *(result_1 + (eax_14 << 3) + 0x27c) = ebx_4
                        *(result_1 + (ecx_33 + 0x28) * 0x10) = var_c_1
                    else
                        void* eax_11 = result_1 + 0x278
                        
                        while (*eax_11 != esi_2 || *(eax_11 + 4) != ebx_4)
                            ecx_33 += 1
                            eax_11 += 0x10
                            
                            if (ecx_33 s>= edx_17)
                                goto label_6ea9b7
                    
                    ebx_2 = var_24_1
                    esi_1 = var_20_1
                    edi_4 = var_28_1
                    eax_6 = var_1c
                    *var_1c ^= (ecx_33 << 0xb ^ *var_1c) & 0xf800
                    ecx_2 = var_8_1
                    edx_1 = var_18_1
                
                eax_6 = &eax_6[1]
                edi_4 += 8
                var_1c = eax_6
                var_28_1 = edi_4
            while (eax_6 u< eax_5)
            
            edi_3 = eax_6
        
        var_2c_1 += 8
    
    var_38 += 0x20
    i = i_1 + 1
    i_1 = i
    result = result_1
while (i s< 3)
return result
