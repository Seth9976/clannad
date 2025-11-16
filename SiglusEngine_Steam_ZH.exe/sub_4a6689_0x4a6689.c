// 函数: sub_4a6689
// 地址: 0x4a6689
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
sub_4a39e3(arg1)
int32_t i = 0

if (*(arg1 + 8) u> 0)
    do
        int32_t* eax_2 = *(*(arg1 + 0x14) + (i << 2))
        void* esi_1 = *(*(arg1 + 0x10) + (eax_2[1] << 2))
        *eax_2 &= 0xffffffdf
        int16_t edx_2 = (*(esi_1 + 4)).w
        
        if ((edx_2.b & 0x10) != 0 && (edx_2:1.b & 2) == 0)
            *eax_2 |= 0x20
        
        if ((*(esi_1 + 5) & 8) != 0)
            *eax_2 |= 0x20
        
        i += 1
    while (i u< *(arg1 + 8))

int32_t i_1 = 0

if (*(arg1 + 0xc) u> 0)
    do
        int32_t* esi_2 = *(*(arg1 + 0x18) + (i_1 << 2))
        int32_t eax_4 = *esi_2
        int32_t ecx_5 = eax_4 & 0xfff00000
        
        if (ecx_5 != 0)
            if (ecx_5 == 0x50100000 || ecx_5 == 0x11000000 || ecx_5 == 0x11200000
                    || (eax_4 & 0xf0000000) == 0x60000000)
                int32_t j = 0
                
                if (esi_2[3] u> 0)
                    do
                        int32_t* eax_37 = *(*(arg1 + 0x14) + (*(esi_2[4] + (j << 2)) << 2))
                        *eax_37 |= 0x20
                        j += 1
                    while (j u< esi_2[3])
            else if (ecx_5 == 0x10f00000 || ecx_5 == 0x11100000 || ecx_5 == 0x11400000)
                int32_t j_1 = 0
                
                if (esi_2[3] u> 0)
                    do
                        int32_t* eax_34 = *(*(arg1 + 0x14) + (*(esi_2[4] + (j_1 << 2)) << 2))
                        *eax_34 |= 0x20
                        j_1 += 1
                    while (j_1 u< esi_2[3])
            else
                int32_t j_2 = 0
                
                if (esi_2[3] u> 0)
                    do
                        void* eax_8 = *(*(arg1 + 0x14) + (*(esi_2[4] + (j_2 << 2)) << 2))
                        
                        if ((*(*(*(arg1 + 0x10) + (*(eax_8 + 4) << 2)) + 5) & 0x10) != 0
                                && sub_49ff77(arg1, *(eax_8 + 0x14)) != 0)
                            int32_t* eax_12 = *(*(arg1 + 0x14) + (*(esi_2[4] + (j_2 << 2)) << 2))
                            *eax_12 |= 0x20
                        
                        j_2 += 1
                    while (j_2 u< esi_2[3])
                
                int32_t ecx_11 = *esi_2
                int32_t eax_14 = ecx_11 & 0xf0000000
                
                if (eax_14 u< 0x10000000 || eax_14 u> 0x40000000)
                    int32_t j_3 = 0
                    
                    if (esi_2[1] u> 0)
                        int32_t* ebx_2 = esi_2[2]
                        
                        do
                            if (sub_49ff77(arg1, *ebx_2) != 0)
                                int32_t k = 0
                                
                                if (esi_2[3] u> 0)
                                    do
                                        int32_t* eax_31 =
                                            *(*(arg1 + 0x14) + (*(esi_2[4] + (k << 2)) << 2))
                                        *eax_31 |= 0x20
                                        k += 1
                                    while (k u< esi_2[3])
                                
                                break
                            
                            j_3 += 1
                            ebx_2 = &ebx_2[1]
                        while (j_3 u< esi_2[1])
                else
                    uint32_t temp0_1 = divu.dp.d(0:(esi_2[1]), ecx_11 & 0xfffff)
                    int32_t var_8_1 = 0
                    int32_t eax_17 = esi_2[3]
                    
                    if (eax_17 u> 0)
                        do
                            int32_t var_10_1 = 0
                            
                            if (temp0_1 u> 0)
                                int32_t* ebx_1 = esi_2[2] + (var_8_1 << 2)
                                
                                do
                                    if (sub_49ff77(arg1, *ebx_1) != 0)
                                        int32_t* eax_26 =
                                            *(*(arg1 + 0x14) + (*((var_8_1 << 2) + esi_2[4]) << 2))
                                        *eax_26 |= 0x20
                                        break
                                    
                                    var_10_1 += 1
                                    ebx_1 = &ebx_1[eax_17]
                                while (var_10_1 u< temp0_1)
                            
                            var_8_1 += 1
                            eax_17 = esi_2[3]
                        while (var_8_1 u< eax_17)
        
        i_1 += 1
    while (i_1 u< *(arg1 + 0xc))

int32_t i_2 = 0

if (*(arg1 + 8) u> 0)
    do
        int32_t* eax_40 = *(*(arg1 + 0x14) + (i_2 << 2))
        
        if ((*(*(*(arg1 + 0x10) + (eax_40[1] << 2)) + 4) & 0x20) != 0)
            *eax_40 |= 0x20
        
        i_2 += 1
    while (i_2 u< *(arg1 + 8))

return 0
