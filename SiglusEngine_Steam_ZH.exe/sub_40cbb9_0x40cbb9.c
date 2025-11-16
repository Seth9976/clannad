// 函数: sub_40cbb9
// 地址: 0x40cbb9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_34 = edi
void* eax_1 = arg5 & 0x10000000
void* temp1 = arg5 & 0x800000
int32_t result_1 = 0
int32_t* var_c = nullptr
char* var_8 = nullptr
void* var_20 = nullptr
int32_t result
void* i_14
void* i_13

if (temp1 == 0)
    result = sub_40bd88(arg1, &var_8, &i_14)
    result_1 = result
    
    if (result s>= 0)
        i_13 = i_14
        sub_761c30(var_8, i_13, 4, sub_40b5fb)
    label_40cc6e:
        int32_t* eax_9 = sub_745f3f(i_13 << 4)
        var_c = eax_9
        
        if (eax_9 == 0)
            result = 0x8007000e
        else
            if (i_13 u> 0)
                void* i_11 = i_13
                void* i
                
                do
                    *eax_9 = 0
                    eax_9[2] = 0
                    eax_9 = &eax_9[4]
                    i = i_11
                    i_11 -= 1
                while (i != 1)
            
            int32_t i_1 = 0
            
            if (*(arg1 + 0x23c) u> 0)
                do
                    *(arg4 + (i_1 << 2)) = 0xffffffff
                    i_1 += 1
                while (i_1 u< *(arg1 + 0x23c))
            
            int32_t* eax_10 = nullptr
            int32_t j_6 = 0
            
            if (i_13 u> 0)
                while (*(var_8 + (eax_10 << 2)) != 0)
                    eax_10 += 1
                    
                    if (eax_10 u>= i_13)
                        break
            
            arg5 = eax_10
            int32_t i_2 = 0
            
            if (*(arg1 + 0x264) u> 0)
                do
                    int32_t eax_12 = *(arg3 + (i_2 << 2))
                    
                    if (eax_12 != 0xffffffff)
                        int32_t j = *(*(arg1 + 0x254) + (eax_12 << 2))
                        int32_t* edx_3
                        
                        if (j != j_6)
                            edx_3 = nullptr
                            
                            if (i_13 u> 0)
                                while (*(var_8 + (edx_3 << 2)) != j)
                                    edx_3 += 1
                                    
                                    if (edx_3 u>= i_13)
                                        break
                            
                            j_6 = j
                            arg5 = edx_3
                        else
                            edx_3 = arg5
                        
                        int32_t eax_14 = eax_12 * 0xc
                        int32_t j_4 = 3
                        int32_t j_1
                        
                        do
                            int32_t* ecx_11 = arg4 + (*(eax_14 + *(arg1 + 0x24c)) << 2)
                            
                            if (*ecx_11 == 0xffffffff)
                                *ecx_11 = arg5
                                var_c[edx_3 * 4 + 2] += 1
                            
                            eax_14 += 4
                            j_1 = j_4
                            j_4 -= 1
                        while (j_1 != 1)
                        void* eax_16 = &var_c[edx_3 * 4]
                        *eax_16 += 1
                    
                    i_2 += 1
                while (i_2 u< *(arg1 + 0x264))
            
            var_20 = *(arg1 + 0x25c)
            *(arg1 + 0x260) = i_13
            int32_t eax_21 = sub_745f3f(i_13 * 0x14)
            *(arg1 + 0x25c) = eax_21
            
            if (eax_21 == 0)
                result = 0x8007000e
            else
                int32_t var_18_1 = 0
                int32_t var_10_1 = 0
                arg5 = nullptr
                
                if (i_13 u> 0)
                    int32_t* ecx_16 = nullptr
                    void* eax_23 = &var_c[2]
                    
                    do
                        char* edi_6 = var_8
                        *(eax_23 - 4) = var_18_1
                        *(ecx_16 + *(arg1 + 0x25c)) = *(edi_6 + (arg5 << 2))
                        *(*(arg1 + 0x25c) + ecx_16 + 4) = var_18_1
                        *(*(arg1 + 0x25c) + ecx_16 + 8) = *(eax_23 - 8)
                        ecx_16 = &ecx_16[5]
                        var_18_1 += *(eax_23 - 8)
                        *(eax_23 + 4) = var_10_1
                        *(*(arg1 + 0x25c) + ecx_16 - 8) = var_10_1
                        *(*(arg1 + 0x25c) + ecx_16 - 4) = *eax_23
                        int32_t edx_10 = var_10_1 + *eax_23
                        arg5 += 1
                        i_13 = i_14
                        eax_23 += 0x10
                        var_10_1 = edx_10
                    while (arg5 u< i_13)
                
                int32_t j_7 = 0
                int32_t* eax_24 = nullptr
                
                if (i_13 u> 0)
                    while (*(var_8 + (eax_24 << 2)) != 0)
                        eax_24 += 1
                        
                        if (eax_24 u>= i_13)
                            break
                
                int32_t i_3 = 0
                arg5 = eax_24
                
                if (*(arg1 + 0x264) u> 0)
                    do
                        int32_t eax_26 = *(arg3 + (i_3 << 2))
                        
                        if (eax_26 != 0xffffffff)
                            int32_t ecx_19 = eax_26 << 2
                            int32_t j_2 = *(ecx_19 + *(arg1 + 0x254))
                            int32_t* eax_28
                            
                            if (j_2 != j_7)
                                eax_28 = nullptr
                                
                                if (i_13 u> 0)
                                    while (*(var_8 + (eax_28 << 2)) != j_2)
                                        eax_28 += 1
                                        
                                        if (eax_28 u>= i_14)
                                            break
                                
                                j_7 = j_2
                                arg5 = eax_28
                            else
                                eax_28 = arg5
                            
                            *(ecx_19 + arg2) = var_c[eax_28 * 4 + 1]
                            var_c[eax_28 * 4 + 1] += 1
                            i_13 = i_14
                        
                        i_3 += 1
                    while (i_3 u< *(arg1 + 0x264))
                
                if (eax_1 != 0)
                    int32_t i_4 = 0
                    
                    if (*(arg1 + 0x23c) u> 0)
                        do
                            *(arg4 + (i_4 << 2)) = i_4
                            i_4 += 1
                        while (i_4 u< *(arg1 + 0x23c))
                else
                    int32_t i_5 = 0
                    
                    if (*(arg1 + 0x23c) u> 0)
                        do
                            int32_t* edi_12 = arg4 + (i_5 << 2)
                            int32_t eax_32 = *edi_12
                            
                            if (eax_32 != 0xffffffff)
                                *edi_12 = var_c[eax_32 * 4 + 3]
                                var_c[eax_32 * 4 + 3] += 1
                            
                            i_5 += 1
                        while (i_5 u< *(arg1 + 0x23c))
                
                int32_t i_6 = 0
                
                if (*(arg1 + 0x264) u> 0)
                    do
                        *(arg3 + (i_6 << 2)) = 0xffffffff
                        i_6 += 1
                    while (i_6 u< *(arg1 + 0x264))
                
                int32_t i_7 = 0
                
                if (*(arg1 + 0x264) u> 0)
                    do
                        int32_t ecx_23 = *(arg2 + (i_7 << 2))
                        
                        if (ecx_23 != 0xffffffff)
                            *(arg3 + (ecx_23 << 2)) = i_7
                        
                        i_7 += 1
                    while (i_7 u< *(arg1 + 0x264))
                
                if (temp1 == 0)
                    if (i_13 u> 0)
                        void* i_15 = nullptr
                        i_14 = nullptr
                        void* i_10 = i_13
                        void* i_8
                        
                        do
                            void* edx_15 = i_15 + *(arg1 + 0x25c)
                            int32_t eax_38 = *(edx_15 + 4)
                            int32_t ecx_29 =
                                *(arg4 + (*(*(arg1 + 0x24c) + *(arg3 + (eax_38 << 2)) * 0xc) << 2))
                            int32_t edi_17 = *(edx_15 + 8) + eax_38
                            int32_t var_1c_2 = ecx_29
                            arg2 = eax_38
                            
                            if (eax_38 u< edi_17)
                                do
                                    arg5 = *(arg1 + 0x24c) + *(arg3 + (arg2 << 2)) * 0xc
                                    int32_t j_5 = 3
                                    int32_t j_3
                                    
                                    do
                                        int32_t eax_45 = *(arg4 + (*arg5 << 2))
                                        
                                        if (eax_45 u< var_1c_2)
                                            var_1c_2 = eax_45
                                        
                                        if (eax_45 u> ecx_29)
                                            ecx_29 = eax_45
                                        
                                        arg5 = &arg5[1]
                                        j_3 = j_5
                                        j_5 -= 1
                                    while (j_3 != 1)
                                    arg2 += 1
                                while (arg2 u< edi_17)
                            
                            *(edx_15 + 0xc) = var_1c_2
                            void* i_16 = i_14
                            *(i_16 + *(arg1 + 0x25c) + 0x10) = ecx_29 - var_1c_2 + 1
                            i_15 = i_16 + 0x14
                            i_8 = i_10
                            i_10 -= 1
                            i_14 = i_15
                        while (i_8 != 1)
                else if (i_13 u> 0)
                    int32_t ecx_24 = 0
                    void* eax_36 = var_20 + 0x10
                    void* i_12 = i_13
                    void* i_9
                    
                    do
                        *(ecx_24 + *(arg1 + 0x25c) + 0xc) = *(eax_36 - 4)
                        *(ecx_24 + *(arg1 + 0x25c) + 0x10) = *eax_36
                        ecx_24 += 0x14
                        eax_36 += 0x14
                        i_9 = i_12
                        i_12 -= 1
                    while (i_9 != 1)
                
                *(arg1 + 0x218) |= 0x10
                result = result_1
else
    i_13 = *(arg1 + 0x260)
    i_14 = i_13
    char* eax_4 = sub_745f3f(i_13 << 2)
    var_8 = eax_4
    
    if (eax_4 != 0)
        int32_t eax_5 = 0
        
        if (i_13 u> 0)
            int32_t* ecx_2 = nullptr
            
            do
                *(var_8 + (eax_5 << 2)) = *(ecx_2 + *(arg1 + 0x25c))
                eax_5 += 1
                ecx_2 = &ecx_2[5]
            while (eax_5 u< i_13)
        
        goto label_40cc6e
    
    result = 0x8007000e
j__free(var_c)
j__free(var_8)
j__free(var_20)

if (result s< 0)
    *(arg1 + 0x218) &= 0xffffffef
    j__free(*(arg1 + 0x25c))
    *(arg1 + 0x25c) = 0

return result
