// 函数: sub_7327b0
// 地址: 0x7327b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = arg1
void* edi = *(ecx + 0x1a0)
int32_t edx_1 = *(ecx + 0x144) - 1
int32_t eax_1 = *(ecx + 0x128) - 1
void* var_1c = edi
int32_t i = *(edi + 0x18)
int32_t var_34 = edx_1
int32_t i_1 = i

while (i s< *(edi + 0x1c))
    int32_t esi_1 = *(edi + 0x14)
    int32_t var_10_1 = esi_1
    
    if (esi_1 u<= edx_1)
        void* edi_1 = edi + 0x20
        void* var_40_1 = edi_1
        
        do
            if (*(ecx + 0x190) != 0)
                _memset(*edi_1, 0, *(ecx + 0x14c) << 7)
                ecx = arg1
            
            if ((*(*(ecx + 0x1b0) + 4))(ecx, edi_1) == 0)
                *(var_1c + 0x14) = esi_1
                *(var_1c + 0x18) = i
                return 0
            
            ecx = arg1
            int32_t j = 0
            int32_t edi_2 = 0
            int32_t j_1 = 0
            int32_t var_8_1 = 0
            
            if (*(ecx + 0x130) s> 0)
                void* esi_2 = ecx + 0x134
                void* var_30_1 = esi_2
                
                do
                    void* esi_3 = *esi_2
                    
                    if (*(esi_3 + 0x34) != 0)
                        int32_t edx_2 = *(esi_3 + 4)
                        int32_t eax_8 = *(*(ecx + 0x1b4) + (edx_2 << 2) + 4)
                        int32_t eax_10
                        
                        if (var_10_1 u>= var_34)
                            eax_10 = *(esi_3 + 0x48)
                        else
                            eax_10 = *(esi_3 + 0x38)
                        
                        int32_t ebx_1 = *(esi_3 + 0x44) * var_10_1
                        int32_t var_28_1 = ebx_1
                        int32_t edx_3 = *(arg2 + (edx_2 << 2)) + ((*(esi_3 + 0x28) * i) << 2)
                        ecx = arg1
                        int32_t k = 0
                        int32_t var_c_1 = edx_3
                        int32_t k_1 = 0
                        
                        if (*(esi_3 + 0x3c) s> 0)
                            do
                                int32_t edi_4 = var_8_1
                                
                                if (*(ecx + 0x80) u< eax_1 || k + i_1 s< *(esi_3 + 0x4c))
                                    if (eax_10 s> 0)
                                        int32_t var_24_1 = eax_10
                                        void* edi_5 = var_1c + 0x20 + (edi_4 << 2)
                                        edx_3 = var_c_1
                                        int32_t temp0_1
                                        
                                        do
                                            eax_8(ecx, esi_3, *edi_5, edx_3, ebx_1)
                                            ebx_1 += *(esi_3 + 0x24)
                                            edi_5 += 4
                                            ecx = arg1
                                            temp0_1 = var_24_1
                                            var_24_1 -= 1
                                            edx_3 = var_c_1
                                        while (temp0_1 != 1)
                                        edi_4 = var_8_1
                                    
                                    ebx_1 = var_28_1
                                
                                edi_2 = edi_4 + *(esi_3 + 0x38)
                                var_8_1 = edi_2
                                edx_3 += *(esi_3 + 0x28) << 2
                                k = k_1 + 1
                                var_c_1 = edx_3
                                k_1 = k
                            while (k s< *(esi_3 + 0x3c))
                        
                        i = i_1
                        j = j_1
                    else
                        edi_2 += *(esi_3 + 0x40)
                        var_8_1 = edi_2
                    
                    j += 1
                    esi_2 = var_30_1 + 4
                    j_1 = j
                    var_30_1 = esi_2
                while (j s< *(ecx + 0x130))
                
                esi_1 = var_10_1
            
            edx_1 = var_34
            esi_1 += 1
            edi_1 = var_40_1
            var_10_1 = esi_1
        while (esi_1 u<= edx_1)
        
        edi = var_1c
    
    i += 1
    *(edi + 0x14) = 0
    i_1 = i

*(ecx + 0x80) += 1
*(ecx + 0x88) += 1

if (*(ecx + 0x80) u>= *(ecx + 0x128))
    (*(*(ecx + 0x1a8) + 0xc))(ecx)
    return 4

sub_7326d0(ecx)
return 3
