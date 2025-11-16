// 函数: sub_4bf01b
// 地址: 0x4bf01b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t edi
int32_t var_24 = edi

if (arg1[3] u> 0)
    do
        *(*(arg1[6] + (i << 2)) + 0x28) = 0
        i += 1
    while (i u< arg1[3])

for (int32_t* i_1 = nullptr; i_1 u< 0x18; i_1 = &i_1[1])
    void* eax_1 = *(i_1 + arg1[0x8c])
    
    if (eax_1 != 0)
        sub_4c7aaf(arg1[6], eax_1, 1)
        sub_4c7af5(arg1[6], *(i_1 + arg1[0x8c]), 2)
    
    void* eax_4 = *(i_1 + arg1[0x8b])
    
    if (eax_4 != 0)
        *(eax_4 + 0x28) = 1

int32_t i_2 = 0

if (arg1[3] u> 0)
    do
        int32_t* edx_1 = *(arg1[6] + (i_2 << 2))
        int32_t ecx_5 = *edx_1 & 0xfff00000
        
        if (sub_4b4917(ecx_5) == 0 && ecx_5 != 0x72100000 && ecx_5 != 0x11000000)
            int32_t ecx_6 = arg1[0x88]
            
            if (ecx_6 u>= 0x200)
                return 0x80004005
            
            if (edx_1[0xa] == 1)
                *(arg1[0x8b] + (ecx_6 << 2)) = edx_1
                arg1[0x88] += 1
        
        i_2 += 1
    while (i_2 u< arg1[3])

int32_t* ecx_7 = arg1[0x8b]
int32_t var_10_1 = 1

if (ecx_7 != 0 && arg1[0x88] u> 0)
    int32_t i_5 = arg1[0x88]
    int32_t i_3
    
    do
        if (*ecx_7 != 0)
            var_10_1 = 0
        
        ecx_7 = &ecx_7[1]
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)

for (int32_t i_4 = 0; i_4 u< 2; i_4 += 1)
    int32_t j_1 = 0
    int32_t result = sub_4b9a45(arg1, &j_1)
    
    if (result s< 0)
        return result
    
    int32_t var_14
    sub_4bdf60(arg1, arg1[0x8b], 6, arg1[0x88], &var_14)
    int32_t j = 0
    int32_t ebx_2 = 0
    
    if (arg1[3] u> 0)
        do
            int32_t* edx_2 = *(arg1[6] + (j << 2))
            
            if (edx_2 != 0)
                int32_t eax_10 = edx_2[0xa]
                int32_t ecx_11 = *edx_2 & 0xfff00000
                
                if ((eax_10 == 2 || eax_10 == 0) && sub_4b4917(ecx_11) == 0 && ecx_11 != 0x11000000
                        && ecx_11 != 0x72100000)
                    *((ebx_2 << 2) + &data_b9a608) = edx_2
                    ebx_2 += 1
                
                if (ebx_2 u>= 0x200)
                label_4bf3f0:
                    return 0x8007000e
            
            j += 1
        while (j u< arg1[3])
    
    while (true)
        int32_t var_18
        sub_4bdf60(arg1, &data_b9a608, nullptr, ebx_2, &var_18)
        int32_t eax_12 = var_18
        
        if (j_1 + eax_12 u< 8)
            if (eax_12 u<= var_14)
                break
            
            if (i_4 != 0)
                break
            
            if (var_10_1 != 0)
                break
        
        j_1 = 0
        
        if (arg1[3] u> 0)
            do
                int32_t* edi_1 = *(arg1[6] + (j_1 << 2))
                int32_t edx_3 = 0
                
                if (edi_1[0xa] == 0)
                    int32_t ecx_17 = *edi_1 & 0xfff00000
                    
                    if (sub_4b4917(ecx_17) == 0 && ecx_17 != 0x72100000)
                        int32_t temp1_1 = edi_1[1]
                        bool cond:2_1 = 0 != temp1_1
                        
                        if (0 u< temp1_1)
                            int32_t* eax_15 = edi_1[2]
                            
                            while (*(*(arg1[5] + (*eax_15 << 2)) + 0x6c) != 1)
                                edx_3 += 1
                                eax_15 = &eax_15[1]
                                
                                if (edx_3 u>= edi_1[1])
                                    break
                            
                            cond:2_1 = edx_3 != edi_1[1]
                        
                        if (not(cond:2_1))
                            int32_t ecx_19 = 0
                            bool cond:3_1
                            
                            if (i_4 == 0)
                                int32_t temp2_1 = edi_1[3]
                                cond:3_1 = 0 != temp2_1
                                
                                if (0 u< temp2_1)
                                    int32_t* eax_16 = edi_1[4]
                                    
                                    while (*(*(arg1[5] + (*eax_16 << 2)) + 0x10) != 3)
                                        ecx_19 += 1
                                        eax_16 = &eax_16[1]
                                        
                                        if (ecx_19 u>= edi_1[3])
                                            break
                                    
                                    cond:3_1 = ecx_19 != edi_1[3]
                            
                            if ((i_4 != 0 || not(cond:3_1)) && (
                                    *(*(arg1[4] + (*(*(arg1[5] + (*edi_1[4] << 2)) + 4) << 2)) + 4)
                                    & 0x20) == 0)
                                edi_1[0xa] = 1
                                
                                if (sub_4ba247(arg1) == 0 && sub_4ba37b(arg1, edi_1) == 0)
                                    int32_t eax_25 = arg1[0x88]
                                    
                                    if (eax_25 u>= 0x200)
                                        goto label_4bf3f0
                                    
                                    *(arg1[0x8b] + (eax_25 << 2)) = edi_1
                                    arg1[0x88] += 1
                                    goto label_4bf2da
                                
                                edi_1[0xa] = 0
                
                j_1 += 1
            while (j_1 u< arg1[3])
        
    label_4bf2da:
        
        if (j_1 == arg1[3])
            break
        
        j_1 = 0
        result = sub_4b9a45(arg1, &j_1)
        
        if (result s< 0)
            return result
        
        sub_4bdf60(arg1, arg1[0x8b], 6, arg1[0x88], &var_14)
        int32_t j_2 = 0
        ebx_2 = 0
        
        if (arg1[3] u> 0)
            do
                int32_t* edx_5 = *(arg1[6] + (j_2 << 2))
                
                if (edx_5 != 0)
                    int32_t eax_28 = edx_5[0xa]
                    int32_t ecx_27 = *edx_5 & 0xfff00000
                    
                    if ((eax_28 == 2 || eax_28 == 0) && sub_4b4917(ecx_27) == 0
                            && ecx_27 != 0x11000000 && ecx_27 != 0x72100000)
                        *((ebx_2 << 2) + &data_b9a608) = edx_5
                        ebx_2 += 1
                    
                    if (ebx_2 u>= 0x200)
                        return 0x8007000e
                
                j_2 += 1
            while (j_2 u< arg1[3])

int32_t ebx_7 = 0

if (arg1[3] u<= 0)
    return 0

while (true)
    int32_t* ecx_28 = *(arg1[6] + (ebx_7 << 2))
    
    if (ecx_28[0xa] == 0)
        ecx_28[0xa] = 2
    
    int32_t edi_2 = arg1[0x89]
    
    if (edi_2 u>= 0x200)
        return 0x80004005
    
    int32_t edx_7 = *ecx_28 & 0xfff00000
    
    if (ecx_28[0xa] == 2 && sub_4b4917(edx_7) == 0 && edx_7 != 0x11000000 && edx_7 != 0x72100000)
        *(arg1[0x8c] + (edi_2 << 2)) = ecx_28
        arg1[0x89] += 1
    
    ebx_7 += 1
    
    if (ebx_7 u>= arg1[3])
        return 0
