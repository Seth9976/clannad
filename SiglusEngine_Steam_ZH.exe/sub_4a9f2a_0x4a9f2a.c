// 函数: sub_4a9f2a
// 地址: 0x4a9f2a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_24 = 0
int32_t var_8 = 0
int32_t i_3 = *(arg1 + 8)
int32_t edi
int32_t var_34 = edi

if (i_3 u> 0)
    int32_t* edx_1 = *(arg1 + 0x14)
    int32_t i
    
    do
        void* ecx = *edx_1
        
        if (*(arg1 + 0x88) == *(ecx + 4))
            int32_t ecx_1 = *(ecx + 0xc)
            
            if (var_8 u<= ecx_1)
                var_8 = ecx_1 + 1
        
        edx_1 = &edx_1[1]
        i = i_3
        i_3 -= 1
    while (i != 1)

sub_4a39e3(arg1)
int32_t i_1 = 0
int32_t* var_1c

if (*(arg1 + 0xc) u> 0)
    do
        int32_t* ebx_1 = *(*(arg1 + 0x18) + (i_1 << 2))
        int32_t ecx_5 = *ebx_1
        int32_t* var_20_1 = ebx_1
        
        if ((ecx_5 & 0xfff00000) != 0)
            uint32_t temp0_1 = divu.dp.d(0:(ebx_1[1]), ecx_5 & 0xfffff)
            ebx_1[9] = 0
            int32_t var_14_1 = 0
            
            if (temp0_1 u> 0)
                do
                    int32_t eax_3 = sub_49e7de(ebx_1, var_14_1, &var_1c)
                    int32_t ecx_8 = *(arg1 + 0x14)
                    int32_t edx_4 = *(arg1 + 0x88)
                    void* edi_2 = *(ecx_8 + (*var_1c << 2))
                    
                    if (edx_4 == *(edi_2 + 4))
                        int32_t var_c_1 = 1
                        
                        if (eax_3 u> 1)
                            do
                                void* eax_8 = *(ecx_8 + (var_1c[var_c_1] << 2))
                                
                                if (edx_4 == *(eax_8 + 4) && *(eax_8 + 0x48) != *(edi_2 + 0x48))
                                    break
                                
                                var_c_1 += 1
                            while (var_c_1 u< eax_3)
                            
                            ebx_1 = var_20_1
                        
                        if (var_c_1 != eax_3)
                            int32_t ecx_9 = 0
                            
                            if (eax_3 u> 0)
                                do
                                    void* eax_14 = *(*(arg1 + 0x14) + (var_1c[ecx_9] << 2))
                                    
                                    if (*(arg1 + 0x88) == *(eax_14 + 4))
                                        *(*(*(arg1 + 0x18) + (*(eax_14 + 0x48) << 2)) + 0x24) = 1
                                    
                                    ecx_9 += 1
                                while (ecx_9 u< eax_3)
                    
                    var_14_1 += 1
                while (var_14_1 u< temp0_1)
        
        i_1 += 1
    while (i_1 u< *(arg1 + 0xc))

int32_t i_2 = 0

if (*(arg1 + 0xc) u> 0)
    do
        void* eax_20 = *(*(arg1 + 0x18) + (i_2 << 2))
        
        if ((*(eax_20 + 2) & 0xfff0) != 0 && *(eax_20 + 0x24) == 0)
            int32_t* ebx_3 = *(eax_20 + 0x10)
            int32_t edi_3 = *(arg1 + 0x14)
            
            if (*(arg1 + 0x88) == *(*(edi_3 + (*ebx_3 << 2)) + 4))
                int32_t edx_9 = *(eax_20 + 0xc)
                int32_t j_1 = 0
                
                if (arg2 == 0)
                    int32_t var_18 = 0
                    
                    if (edx_9 u> 0)
                        while (*(*(edi_3 + (*ebx_3 << 2)) + 0x10) != 0)
                            var_18 += 1
                            ebx_3 = &ebx_3[1]
                            
                            if (var_18 u>= edx_9)
                                break
                    
                    if (var_18 u>= edx_9)
                        int32_t j = 0
                        
                        if (edx_9 u> 0)
                            do
                                void* edx_18 =
                                    *(*(arg1 + 0x14) + (*(*(eax_20 + 0x10) + (j << 2)) << 2))
                                j += 1
                                *(edx_18 + 0xc) = var_8
                            while (j u< *(eax_20 + 0xc))
                        
                        var_8 += 1
                        var_24 = 1
                else
                    if (edx_9 u> 0)
                        var_1c = ebx_3
                        
                        while (j_1 == *(*(edi_3 + (*var_1c << 2)) + 0x10))
                            var_1c = &var_1c[1]
                            j_1 += 1
                            
                            if (j_1 u>= edx_9)
                                break
                    
                    if (j_1 != edx_9)
                        int32_t j_2 = 0
                        
                        if (edx_9 u> 0)
                            do
                                *(*(*(arg1 + 0x14) + (*(*(eax_20 + 0x10) + (j_2 << 2)) << 2))
                                    + 0xc) = var_8
                                *(*(*(arg1 + 0x14) + (*(*(eax_20 + 0x10) + (j_2 << 2)) << 2))
                                    + 0x10) = j_2
                                j_2 += 1
                            while (j_2 u< *(eax_20 + 0xc))
                        
                        var_8 += 1
                        var_24 = 1
        
        i_2 += 1
    while (i_2 u< *(arg1 + 0xc))

int32_t result
result.b = var_24 == 0
return result
