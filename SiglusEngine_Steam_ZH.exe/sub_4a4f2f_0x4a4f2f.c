// 函数: sub_4a4f2f
// 地址: 0x4a4f2f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_30 = edi
int32_t j = 0
int32_t var_18 = 0
sub_4a39e3(arg1)
int32_t i = 0

if (*(arg1 + 8) u> 0)
    do
        void* eax_2 = *(*(arg1 + 0x14) + (i << 2))
        int32_t edx_4 = *(*(*(arg1 + 0x10) + (*(eax_2 + 4) << 2)) + 4) & 0x10020
        int32_t edx_5 = neg.d(edx_4)
        i += 1
        *(eax_2 + 0x54) = sbb.d(edx_5, edx_5, edx_4 != 0) & 2
    while (i u< *(arg1 + 8))

int32_t i_1 = *(arg1 + 0xc)

while (i_1 u> 0)
    i_1 -= 1
    int32_t* eax_4 = *(*(arg1 + 0x18) + (i_1 << 2))
    
    if ((*eax_4 & 0xfff00000) == 0x20900000 && eax_4[3] u> 0)
        do
            void* ecx_4 = *(*(arg1 + 0x14) + (*(eax_4[4] + (j << 2)) << 2))
            
            if (*(ecx_4 + 0x54) != 2)
                *(ecx_4 + 0x54) = 1
            
            j += 1
        while (j u< eax_4[3])
    
    j = 0

int32_t i_2

do
    int32_t j_4 = *(arg1 + 0xc)
    int32_t var_14_1 = 0
    int32_t j_1 = j_4
    
    if (j_4 u<= 0)
        break
    
    do
        j_1 -= 1
        int32_t* esi = *(*(arg1 + 0x18) + (j_1 << 2))
        int32_t ecx_6 = *esi
        
        if ((ecx_6 & 0xfff00000) != 0)
            int32_t eax_7 = ecx_6 & 0xf0000000
            
            if (eax_7 u< 0x10000000 || eax_7 u> 0x40000000)
                int32_t k_7 = esi[3]
                int32_t var_8_1 = 0
                
                if (k_7 u> 0)
                    int32_t* eax_17 = esi[4]
                    int32_t k_5 = k_7
                    int32_t k
                    
                    do
                        int32_t ebx_6 = *(*(*(arg1 + 0x14) + (*eax_17 << 2)) + 0x54)
                        
                        if (var_8_1 u< ebx_6)
                            var_8_1 = ebx_6
                        
                        eax_17 = &eax_17[1]
                        k = k_5
                        k_5 -= 1
                    while (k != 1)
                    
                    if (var_8_1 == 1)
                        var_14_1 = 1
                
                int32_t k_1 = 0
                
                if (k_7 u> 0)
                    do
                        sub_4a4ed1(arg1, *(esi[4] + (k_1 << 2)), var_8_1)
                        k_1 += 1
                    while (k_1 u< esi[3])
                
                int32_t k_2 = 0
                
                if (esi[1] u> 0)
                    do
                        sub_4a4ed1(arg1, *(esi[2] + (k_2 << 2)), var_8_1)
                        k_2 += 1
                    while (k_2 u< esi[1])
            else
                uint32_t temp0_1 = divu.dp.d(0:(esi[1]), ecx_6 & 0xfffff)
                int32_t k_3 = 0
                
                if (esi[3] u> 0)
                    do
                        int32_t eax_11 = *(esi[4] + (k_3 << 2))
                        int32_t ebx_3 = *(*(*(arg1 + 0x14) + (eax_11 << 2)) + 0x54)
                        
                        if (ebx_3 == 1)
                            var_14_1 = 1
                        
                        sub_4a4ed1(arg1, eax_11, ebx_3)
                        int32_t var_c_1 = 0
                        
                        if (temp0_1 u> 0)
                            do
                                sub_4a4ed1(arg1, *(esi[2] + ((esi[3] * var_c_1 + k_3) << 2)), ebx_3)
                                var_c_1 += 1
                            while (var_c_1 u< temp0_1)
                        
                        k_3 += 1
                    while (k_3 u< esi[3])
    while (j_1 u> 0)
    
    if (var_14_1 == 0)
        break
    
    i_2 = 0
    int32_t j_2 = 0
    
    if (*(arg1 + 0xc) u<= 0)
        break
    
    do
        int32_t* edx_10 = *(*(arg1 + 0x18) + (j_2 << 2))
        
        if ((*edx_10 & 0xfff00000) == 0x20900000)
            int32_t ecx_18 = edx_10[3]
            int32_t var_8_2 = 0
            
            if (ecx_18 u> 0)
                do
                    int32_t eax_23 = *(arg1 + 0x14)
                    void* esi_3 = *(eax_23 + (*(edx_10[4] + (var_8_2 << 2)) << 2))
                    
                    if (*(esi_3 + 0x54) == 1)
                        int32_t k_4 = *(edx_10[2] + ((ecx_18 + var_8_2) << 2))
                        
                        if (k_4 != 0xffffffff)
                            int32_t k_6 = *(*(eax_23 + (k_4 << 2)) + 0x38)
                            
                            if (k_6 != 0xffffffff)
                                k_4 = k_6
                        
                        int32_t var_10_1 = 0
                        void* ecx_22 = *(*(arg1 + 0x18) + (*(*(eax_23 + (k_4 << 2)) + 0x48) << 2))
                        
                        if (*(ecx_22 + 0xc) u> 0)
                            int32_t* esi_8 = *(ecx_22 + 0x10)
                            
                            while (*esi_8 != k_4)
                                var_10_1 += 1
                                
                                if (var_10_1 u>= *(ecx_22 + 0xc))
                                    break
                                
                                esi_8 = &esi_8[1]
                        
                        int32_t ecx_24 = *(*(ecx_22 + 8) + (var_10_1 << 2))
                        
                        if (ecx_24 != 0xffffffff)
                            int32_t esi_13 = *(*(eax_23 + (ecx_24 << 2)) + 0x38)
                            
                            if (esi_13 != 0xffffffff)
                                ecx_24 = esi_13
                        
                        int32_t eax_25 = *(*(eax_23 + (ecx_24 << 2)) + 0x54)
                        
                        if (eax_25 != 1)
                            *(esi_3 + 0x54) = eax_25
                            i_2 = 1
                    
                    var_8_2 += 1
                    ecx_18 = edx_10[3]
                while (var_8_2 u< ecx_18)
        
        j_2 += 1
    while (j_2 u< *(arg1 + 0xc))
while (i_2 != 0)
int32_t i_3 = 0

if (*(arg1 + 0xc) u> 0)
    do
        int32_t* ecx_26 = *(*(arg1 + 0x18) + (i_3 << 2))
        int32_t esi_15 = *ecx_26
        
        if ((esi_15 & 0xfff00000) != 0)
            int32_t eax_29 = esi_15 & 0xf0000000
            
            if (eax_29 u< 0x10000000 || eax_29 u> 0x40000000)
                int32_t esi_18 = 0
                int32_t temp4_1 = ecx_26[3]
                bool cond:5_1 = 0 != temp4_1
                
                if (0 u< temp4_1)
                    int32_t* eax_48 = ecx_26[4]
                    
                    while (*(*(*(arg1 + 0x14) + (*eax_48 << 2)) + 0x54) != 2)
                        esi_18 += 1
                        eax_48 = &eax_48[1]
                        
                        if (esi_18 u>= ecx_26[3])
                            break
                    
                    cond:5_1 = esi_18 != ecx_26[3]
                
                if (not(cond:5_1))
                    *ecx_26 = 0
                    ecx_26[3] = 0
                    ecx_26[1] = 0
                    var_18 = 1
            else
                uint32_t temp0_2 = divu.dp.d(0:(ecx_26[1]), esi_15 & 0xfffff)
                int32_t esi_17 = 0
                int32_t temp5_1 = ecx_26[3]
                bool cond:7_1 = 0 == temp5_1
                int32_t j_3 = 0
                
                if (0 u< temp5_1)
                    do
                        int32_t eax_32 = ecx_26[4]
                        int32_t edx_14 = *(eax_32 + (j_3 << 2))
                        
                        if (*(*(*(arg1 + 0x14) + (edx_14 << 2)) + 0x54) == 2)
                            int32_t var_10_2 = 0
                            *(eax_32 + (esi_17 << 2)) = edx_14
                            
                            if (temp0_2 u> 0)
                                do
                                    int32_t edx_16 = ecx_26[3] * var_10_2
                                    int32_t eax_33 = ecx_26[2]
                                    var_10_2 += 1
                                    *(eax_33 + ((edx_16 + esi_17) << 2)) =
                                        *(eax_33 + ((j_3 + edx_16) << 2))
                                while (var_10_2 u< temp0_2)
                            
                            esi_17 += 1
                        
                        j_3 += 1
                    while (j_3 u< ecx_26[3])
                    
                    cond:7_1 = esi_17 == ecx_26[3]
                
                if (not(cond:7_1))
                    int32_t eax_39
                    
                    if (esi_17 == 0)
                        eax_39 = 0
                    else
                        eax_39 = ((*ecx_26 ^ esi_17) & 0xfffff) ^ *ecx_26
                    
                    *ecx_26 = eax_39
                    int32_t var_8_3 = 1
                    
                    if (temp0_2 u> 1)
                        int32_t var_18_1 = esi_17 << 2
                        
                        do
                            int32_t var_10_3 = 0
                            
                            if (esi_17 u> 0)
                                int32_t edx_18 = var_18_1
                                
                                do
                                    int32_t eax_42 = ecx_26[2]
                                    int32_t ebx_17 =
                                        *(eax_42 + ((ecx_26[3] * var_8_3 + var_10_3) << 2))
                                    var_10_3 += 1
                                    *(edx_18 + eax_42) = ebx_17
                                    edx_18 += 4
                                while (var_10_3 u< esi_17)
                            
                            var_8_3 += 1
                            var_18_1 += esi_17 << 2
                        while (var_8_3 u< temp0_2)
                    
                    ecx_26[3] = esi_17
                    ecx_26[1] = esi_17 * temp0_2
                    var_18 = 1
        
        i_3 += 1
    while (i_3 u< *(arg1 + 0xc))

int32_t i_4 = 0

if (*(arg1 + 8) u> 0)
    do
        int32_t ecx_27 = *(arg1 + 0x14)
        void* eax_50 = *(ecx_27 + (i_4 << 2))
        int32_t i_5
        
        if (i_4 != 0xffffffff)
            i_5 = *(eax_50 + 0x38)
        
        if (i_4 == 0xffffffff || i_5 == 0xffffffff)
            i_5 = i_4
        
        if (*(*(ecx_27 + (i_5 << 2)) + 0x54) != 2)
            int32_t edx_20 = *(arg1 + 0x74)
            int32_t ecx_29 = *(eax_50 + 4)
            
            if (edx_20 != ecx_29 && (*(eax_50 + 8) != 0xffffffff
                    || (*(*(*(arg1 + 0x10) + (ecx_29 << 2)) + 5) & 4) == 0))
                int16_t ecx_31 = (*(*(*(arg1 + 0x10) + (ecx_29 << 2)) + 4)).w
                
                if ((ecx_31:1.b & 1) == 0 || (ecx_31:1.b & 8) == 0)
                    *(eax_50 + 4) = edx_20
                    var_18 = 1
        
        i_4 += 1
    while (i_4 u< *(arg1 + 8))

int32_t result
result.b = var_18 == 0
return result
