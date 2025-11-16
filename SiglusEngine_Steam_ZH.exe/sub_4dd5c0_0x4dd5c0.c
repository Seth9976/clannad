// 函数: sub_4dd5c0
// 地址: 0x4dd5c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1
void* eax = *(ebx + 0x1b0)
int32_t i = 0
int32_t edi
int32_t var_44 = edi
int32_t var_38[0x4]

if (*(ebx + 0x14c) s> 0)
    void* var_c_1 = ebx + 0x150
    
    do
        void* eax_2 = *var_c_1
        int32_t ecx_2 = *(eax_2 + 0xc)
        var_38[i] = (*(*(ebx + 4) + 0x20))(ebx, *(eax + (*(eax_2 + 4) << 2) + 0x48), 
            *(ebx + 0x98) * ecx_2, ecx_2, 1)
        i += 1
        var_c_1 += 4
    while (i s< *(ebx + 0x14c))

void* eax_7 = eax
int32_t i_1 = *(eax_7 + 0x18)
int32_t i_2 = i_1

while (i_1 s< *(eax_7 + 0x1c))
    int32_t j = *(eax_7 + 0x14)
    int32_t j_1 = j
    
    if (j u< *(ebx + 0x160))
        do
            int32_t eax_8 = *(ebx + 0x14c)
            int32_t edx_3 = 0
            int32_t var_10_1 = 0
            int32_t var_1c_1 = 0
            
            if (eax_8 s> 0)
                void* var_14_1 = ebx + 0x150
                
                do
                    void* ecx_8 = *var_14_1
                    int32_t k_2 = *(ecx_8 + 0x34)
                    int32_t ecx_9 = *(ecx_8 + 0x38)
                    
                    if (ecx_9 s> 0)
                        int32_t var_18_1 = ecx_9
                        int32_t* edi_4 = var_38[edx_3] + (i_2 << 2)
                        bool cond:10_1
                        
                        do
                            int32_t eax_15 = *edi_4 + ((k_2 * j) << 7)
                            
                            if (k_2 s> 0)
                                void* ecx_11 = eax + (var_10_1 << 2) + 0x20
                                int32_t k_1 = k_2
                                var_10_1 += k_2
                                void* ecx_12 = ecx_11
                                int32_t k
                                
                                do
                                    *ecx_12 = eax_15
                                    ecx_12 += 4
                                    eax_15 += 0x80
                                    k = k_1
                                    k_1 -= 1
                                while (k != 1)
                                ebx = arg1
                            
                            edi_4 = &edi_4[1]
                            cond:10_1 = var_18_1 != 1
                            var_18_1 -= 1
                        while (cond:10_1)
                        j = j_1
                        edx_3 = var_1c_1
                    
                    edx_3 += 1
                    var_1c_1 = edx_3
                    var_14_1 += 4
                while (edx_3 s< eax_8)
            
            if ((*(*(ebx + 0x1c0) + 4))(ebx, eax + 0x20) == 0)
                *(eax + 0x14) = j
                *(eax + 0x18) = i_2
                return 0
            
            j += 1
            j_1 = j
        while (j u< *(ebx + 0x160))
        
        i_1 = i_2
    
    eax_7 = eax
    *(eax_7 + 0x14) = 0
    i_1 += 1
    i_2 = i_1

int32_t edx_7 = *(ebx + 0x144)
int32_t ecx_17 = *(ebx + 0x98) + 1
*(ebx + 0x98) = ecx_17

if (ecx_17 u>= edx_7)
    (*(*(ebx + 0x1b8) + 0xc))(ebx)
    return 4

void* eax_23 = *(ebx + 0x1b0)

if (*(ebx + 0x14c) s> 1)
    *(eax_23 + 0x1c) = 1
    *(eax_23 + 0x14) = 0
    *(eax_23 + 0x18) = 0
    return 3

void* ecx_18 = *(ebx + 0x150)
int32_t edx_10

if (ecx_17 u>= edx_7 - 1)
    edx_10 = *(ecx_18 + 0x48)
else
    edx_10 = *(ecx_18 + 0xc)

*(eax_23 + 0x1c) = edx_10
*(eax_23 + 0x14) = 0
*(eax_23 + 0x18) = 0
return 3
