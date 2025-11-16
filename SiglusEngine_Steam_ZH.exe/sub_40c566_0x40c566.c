// 函数: sub_40c566
// 地址: 0x40c566
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_34 = edi
int32_t eax_1 = arg5 & 0x10000000
int32_t temp1 = arg5 & 0x800000
int32_t result = 0
int32_t* var_c = nullptr
char* var_8 = nullptr
void* var_20 = nullptr
void* i_14
void* i_13
char* edi_1

if (temp1 == 0)
    int32_t result_1 = sub_40b96b(arg1, &var_8, &i_14)
    result = result_1
    
    if (result_1 s>= 0)
        i_13 = i_14
        edi_1 = var_8
        sub_761c30(edi_1, i_13, 4, sub_40b5fb)
    label_40c619:
        int32_t* eax_8 = sub_745f3f(i_13 << 4)
        var_c = eax_8
        
        if (eax_8 == 0)
            result = 0x8007000e
        else
            if (i_13 u> 0)
                void* i_11 = i_13
                void* i
                
                do
                    *eax_8 = 0
                    eax_8[2] = 0
                    eax_8 = &eax_8[4]
                    i = i_11
                    i_11 -= 1
                while (i != 1)
            
            int32_t i_1 = 0
            
            if (*(arg1 + 0x23c) u> 0)
                do
                    *(arg4 + (i_1 << 2)) = 0xffff
                    i_1 += 1
                while (i_1 u< *(arg1 + 0x23c))
            
            int32_t eax_9 = 0
            int32_t j_6 = 0
            
            if (i_13 u> 0)
                while (*(edi_1 + (eax_9 << 2)) != 0)
                    eax_9 += 1
                    
                    if (eax_9 u>= i_13)
                        break
            
            int32_t edi_2 = eax_9
            uint32_t i_2 = 0
            arg5 = 0
            
            if (*(arg1 + 0x264) u> 0)
                do
                    i_2.w = *(arg3 + (i_2 << 2))
                    
                    if (i_2.w != 0xffff)
                        uint32_t eax_10 = zx.d(i_2.w)
                        int32_t j = *(*(arg1 + 0x254) + (eax_10 << 2))
                        int32_t edx_3
                        
                        if (j != j_6)
                            edx_3 = 0
                            
                            if (i_13 u> 0)
                                while (*(var_8 + (edx_3 << 2)) != j)
                                    edx_3 += 1
                                    
                                    if (edx_3 u>= i_13)
                                        break
                            
                            j_6 = j
                            edi_2 = edx_3
                        else
                            edx_3 = edi_2
                        
                        uint32_t eax_12 = eax_10 * 6
                        int32_t j_5 = 3
                        int32_t j_1
                        
                        do
                            int32_t* ecx_10 = arg4 + (zx.d(*(*(arg1 + 0x24c) + eax_12)) << 2)
                            
                            if (*ecx_10 == 0xffff)
                                *ecx_10 = edi_2
                                var_c[edx_3 * 4 + 2] += 1
                            
                            eax_12 += 2
                            j_1 = j_5
                            j_5 -= 1
                        while (j_1 != 1)
                        i_13 = i_14
                        void* eax_15 = &var_c[edx_3 * 4]
                        *eax_15 += 1
                    
                    arg5 += 1
                    i_2 = zx.d(arg5.w)
                while (i_2 u< *(arg1 + 0x264))
            
            var_20 = *(arg1 + 0x25c)
            *(arg1 + 0x260) = i_13
            int32_t eax_19 = sub_745f3f(i_13 * 0x14)
            int32_t* ecx_14 = nullptr
            *(arg1 + 0x25c) = eax_19
            
            if (eax_19 == 0)
                result = 0x8007000e
            else
                int32_t var_14_1 = 0
                int32_t var_24_1 = 0
                arg5 = 0
                
                if (i_13 u> 0)
                    void* eax_21 = &var_c[2]
                    
                    do
                        char* edi_4 = var_8
                        *(eax_21 - 4) = var_14_1
                        *(ecx_14 + *(arg1 + 0x25c)) = *(edi_4 + (arg5 << 2))
                        *(*(arg1 + 0x25c) + ecx_14 + 4) = var_14_1
                        *(*(arg1 + 0x25c) + ecx_14 + 8) = *(eax_21 - 8)
                        ecx_14 = &ecx_14[5]
                        var_14_1 += *(eax_21 - 8)
                        *(eax_21 + 4) = var_24_1
                        *(*(arg1 + 0x25c) + ecx_14 - 8) = var_24_1
                        *(*(arg1 + 0x25c) + ecx_14 - 4) = *eax_21
                        int32_t edx_10 = var_24_1 + *eax_21
                        arg5 += 1
                        i_13 = i_14
                        eax_21 += 0x10
                        var_24_1 = edx_10
                    while (arg5 u< i_13)
                
                int32_t eax_22 = 0
                int32_t j_7 = 0
                
                if (i_13 u> 0)
                    while (*(var_8 + (eax_22 << 2)) != 0)
                        eax_22 += 1
                        
                        if (eax_22 u>= i_13)
                            break
                
                int32_t var_24_2 = eax_22
                arg5 = 0
                
                if (*(arg1 + 0x264) u> 0)
                    uint32_t i_3 = 0
                    
                    do
                        i_3.w = *(arg3 + (i_3 << 2))
                        
                        if (i_3.w != 0xffff)
                            uint32_t ecx_18 = zx.d(i_3.w) << 2
                            int32_t j_2 = *(ecx_18 + *(arg1 + 0x254))
                            int32_t eax_24
                            
                            if (j_2 != j_7)
                                eax_24 = 0
                                
                                if (i_13 u> 0)
                                    while (*(var_8 + (eax_24 << 2)) != j_2)
                                        eax_24 += 1
                                        
                                        if (eax_24 u>= i_13)
                                            break
                                
                                j_7 = j_2
                                var_24_2 = eax_24
                            else
                                eax_24 = var_24_2
                            
                            *(ecx_18 + arg2) = var_c[eax_24 * 4 + 1]
                            var_c[eax_24 * 4 + 1] += 1
                        
                        arg5 += 1
                        i_3 = zx.d(arg5.w)
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
                            int32_t* edx_13 = arg4 + (i_5 << 2)
                            int32_t eax_28 = *edx_13
                            
                            if (eax_28 != 0xffff)
                                *edx_13 = var_c[eax_28 * 4 + 3]
                                var_c[eax_28 * 4 + 3] += 1
                            
                            i_5 += 1
                        while (i_5 u< *(arg1 + 0x23c))
                
                int32_t ecx_20 = 0
                
                if (*(arg1 + 0x264) u> 0)
                    uint32_t i_6 = 0
                    
                    do
                        ecx_20 += 1
                        *(arg3 + (i_6 << 2)) = 0xffff
                        i_6 = zx.d(ecx_20.w)
                    while (i_6 u< *(arg1 + 0x264))
                
                int32_t edx_15 = 0
                
                if (*(arg1 + 0x264) u> 0)
                    uint32_t i_7 = 0
                    
                    do
                        int16_t* ecx_21
                        ecx_21.w = arg2[i_7 * 2]
                        
                        if (ecx_21.w != 0xffff)
                            *(arg3 + (zx.d(ecx_21.w) << 2)) = i_7
                        
                        edx_15 += 1
                        i_7 = zx.d(edx_15.w)
                    while (i_7 u< *(arg1 + 0x264))
                
                if (temp1 == 0)
                    if (i_13 u> 0)
                        void* i_15 = nullptr
                        i_14 = nullptr
                        void* i_10 = i_13
                        void* i_8
                        
                        do
                            void* edx_16 = i_15 + *(arg1 + 0x25c)
                            int32_t eax_34 = *(edx_16 + 4)
                            int32_t ecx_28 = *(arg4
                                + (zx.d(*(*(arg1 + 0x24c) + *(arg3 + (eax_34 << 2)) * 6)) << 2))
                            int32_t edi_18 = *(edx_16 + 8) + eax_34
                            arg5 = eax_34
                            uint32_t eax_35 = zx.d(eax_34.w)
                            int32_t var_1c_2 = ecx_28
                            int32_t eax_42
                            
                            if (eax_35 u>= edi_18)
                                eax_42 = var_1c_2
                            else
                                uint32_t ebx_10 = eax_35
                                
                                do
                                    arg2 = *(arg1 + 0x24c) + *(arg3 + (ebx_10 << 2)) * 6
                                    int32_t j_4 = 3
                                    int32_t j_3
                                    
                                    do
                                        int32_t ebx_13 = *(arg4 + (zx.d(*arg2) << 2))
                                        
                                        if (ebx_13 u< ecx_28)
                                            ecx_28 = ebx_13
                                        
                                        eax_42 = var_1c_2
                                        
                                        if (ebx_13 u> eax_42)
                                            eax_42 = ebx_13
                                            var_1c_2 = eax_42
                                        
                                        arg2 = &arg2[1]
                                        j_3 = j_4
                                        j_4 -= 1
                                    while (j_3 != 1)
                                    arg5 += 1
                                    ebx_10 = zx.d(arg5.w)
                                while (ebx_10 u< edi_18)
                            
                            *(edx_16 + 0xc) = ecx_28
                            void* i_16 = i_14
                            *(i_16 + *(arg1 + 0x25c) + 0x10) = eax_42 - ecx_28 + 1
                            i_15 = i_16 + 0x14
                            i_8 = i_10
                            i_10 -= 1
                            i_14 = i_15
                        while (i_8 != 1)
                else if (i_13 u> 0)
                    int32_t ecx_23 = 0
                    void* eax_32 = var_20 + 0x10
                    void* i_12 = i_13
                    void* i_9
                    
                    do
                        *(ecx_23 + *(arg1 + 0x25c) + 0xc) = *(eax_32 - 4)
                        *(ecx_23 + *(arg1 + 0x25c) + 0x10) = *eax_32
                        ecx_23 += 0x14
                        eax_32 += 0x14
                        i_9 = i_12
                        i_12 -= 1
                    while (i_9 != 1)
                
                *(arg1 + 0x218) |= 0x10
else
    i_13 = *(arg1 + 0x260)
    i_14 = i_13
    edi_1 = sub_745f3f(i_13 << 2)
    var_8 = edi_1
    
    if (edi_1 != 0)
        int32_t eax_5 = 0
        
        if (i_13 u> 0)
            int32_t* ecx_2 = nullptr
            
            do
                *(edi_1 + (eax_5 << 2)) = *(ecx_2 + *(arg1 + 0x25c))
                eax_5 += 1
                ecx_2 = &ecx_2[5]
            while (eax_5 u< i_13)
        
        goto label_40c619
    
    result = 0x8007000e
j__free(var_c)
j__free(var_8)
j__free(var_20)

if (result s< 0)
    *(arg1 + 0x218) &= 0xffffffef
    j__free(*(arg1 + 0x25c))
    *(arg1 + 0x25c) = 0

return result
