// 函数: sub_7329e0
// 地址: 0x7329e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* esi = arg1
int32_t i = 0
void* var_24 = esi
void* ebx = *(esi + 0x1a0)
void* var_1c = ebx
int32_t var_18[0x4]

if (*(esi + 0x130) s> 0)
    void* ebx_1 = esi + 0x134
    
    do
        void* edx_1 = *ebx_1
        int32_t ecx_1 = *(edx_1 + 0xc)
        int32_t eax_7 = (*(*(esi + 4) + 0x20))(var_24, *(var_1c + (*(edx_1 + 4) << 2) + 0x48), 
            *(var_24 + 0x80) * ecx_1, ecx_1, 1)
        esi = var_24
        ebx_1 += 4
        var_18[i] = eax_7
        i += 1
    while (i s< *(esi + 0x130))
    
    ebx = var_1c

int32_t i_1 = *(ebx + 0x18)
int32_t i_2 = i_1

while (i_1 s< *(ebx + 0x1c))
    int32_t j_2 = *(ebx + 0x14)
    int32_t j_1 = j_2
    
    if (j_2 u< *(esi + 0x144))
        int32_t j
        
        do
            int32_t k = 0
            int32_t edi = 0
            int32_t k_1 = 0
            
            if (*(esi + 0x130) s> 0)
                void* ecx_3 = esi + 0x134
                void* var_38_1 = ecx_3
                
                do
                    void* ebx_2 = *ecx_3
                    int32_t var_2c_1 = 0
                    int32_t esi_2 = *(ebx_2 + 0x38)
                    
                    if (*(ebx_2 + 0x3c) s> 0)
                        int32_t edx_4 = (esi_2 * j_1) << 7
                        int32_t var_3c_1 = edx_4
                        int32_t* eax_10 = var_18[k] + (i_2 << 2)
                        int32_t ecx_5 = 0
                        int32_t* var_30_1 = eax_10
                        
                        do
                            int32_t eax_12 = *eax_10 + edx_4
                            int32_t edx_5 = 0
                            
                            if (esi_2 s> 0)
                                void* ecx_8 = var_1c + (edi << 2) + 0x20
                                
                                do
                                    *ecx_8 = eax_12
                                    ecx_8 += 4
                                    esi_2 = *(ebx_2 + 0x38)
                                    edx_5 += 1
                                    edi += 1
                                    eax_12 -= 0xffffff80
                                while (edx_5 s< esi_2)
                                
                                ecx_5 = var_2c_1
                            
                            ecx_5 += 1
                            edx_4 = var_3c_1
                            eax_10 = &var_30_1[1]
                            var_2c_1 = ecx_5
                            var_30_1 = eax_10
                        while (ecx_5 s< *(ebx_2 + 0x3c))
                        
                        k = k_1
                    
                    esi = var_24
                    k += 1
                    ecx_3 = var_38_1 + 4
                    k_1 = k
                    var_38_1 = ecx_3
                while (k s< *(esi + 0x130))
            
            if ((*(*(esi + 0x1b0) + 4))(esi, ebx + 0x20) == 0)
                *(var_1c + 0x18) = i_2
                *(var_1c + 0x14) = j_1
                sub_745f2b(eax_1 ^ &__saved_ebp)
                return 0
            
            j = j_1 + 1
            j_1 = j
        while (j u< *(esi + 0x144))
        ebx = var_1c
        i_1 = i_2
    
    i_1 += 1
    *(ebx + 0x14) = 0
    i_2 = i_1

*(esi + 0x80) += 1
int32_t edx_6 = *(esi + 0x80)
int32_t eax_17 = *(esi + 0x128)

if (edx_6 u>= eax_17)
    (*(*(esi + 0x1a8) + 0xc))(esi)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return 4

void* ecx_11 = *(esi + 0x1a0)

if (*(esi + 0x130) s<= 1)
    void* eax_21 = *(esi + 0x134)
    int32_t eax_22
    
    if (edx_6 u>= eax_17 - 1)
        eax_22 = *(eax_21 + 0x4c)
    else
        eax_22 = *(eax_21 + 0xc)
    
    *(ecx_11 + 0x1c) = eax_22
else
    *(ecx_11 + 0x1c) = 1

*(ecx_11 + 0x14) = 0
*(ecx_11 + 0x18) = 0
sub_745f2b(eax_1 ^ &__saved_ebp)
return 3
