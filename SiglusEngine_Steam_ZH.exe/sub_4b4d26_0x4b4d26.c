// 函数: sub_4b4d26
// 地址: 0x4b4d26
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1
int32_t* eax = *(ebx + 0x100)
int32_t ecx_1 = *eax & 0xfffff
int32_t edi
int32_t var_3c = edi
void* var_28 = ebx

if (ecx_1 != 4 || eax[1] != ecx_1)
    sub_4a4100(ebx, eax[0xf], 0x12d4, "internal error: malformed clip found")
label_4b4fa4:
    return 0x80004005

void* esi_1 = eax[2]
int32_t i_1 = *(esi_1 + 0xc)
void* eax_3 = *(*(ebx + 0x100) + 8)
int32_t var_8_1 = 0
void* var_c_1 = eax_3

while (true)
    if (*var_c_1 == *(eax_3 + 0xc))
    label_4b4eb5:
        *eax = 0x11000003
        break
    
    var_8_1 += 1
    var_c_1 += 4
    
    if (var_8_1 u>= 3)
        int32_t edx_2 = *(*(*(ebx + 0x14) + (i_1 << 2)) + 0x48)
        int32_t var_20_1 = 0xffffffff
        
        if (edx_2 != 0xffffffff)
            int32_t* eax_6 = *(*(ebx + 0x18) + (edx_2 << 2))
            
            if ((*eax_6 & 0xfff00000) == 0x10000000)
                int32_t i = 0
                
                if (eax_6[3] u> 0)
                    do
                        if (i_1 == eax_6[4][i])
                            var_20_1 = *((i << 2) + eax_6[2])
                        
                        i += 1
                    while (i u< eax_6[3])
        
        int32_t ecx_2 = 0
        void* eax_7 = esi_1
        
        while (true)
            if (*eax_7 == var_20_1)
                goto label_4b4eb5
            
            ecx_2 += 1
            eax_7 += 4
            
            if (ecx_2 u>= 3)
                int32_t var_20_2 = 0
                void* var_c_2 = esi_1
                
                while (true)
                    int32_t edx_10 = *(*(*(ebx + 0x14) + (*var_c_2 << 2)) + 0x48)
                    
                    if (edx_10 != 0xffffffff)
                        int32_t eax_11 = *(ebx + 0x18)
                        int32_t* edi_4 = *(eax_11 + (edx_2 << 2))
                        int32_t* esi_2 = *(eax_11 + (edx_10 << 2))
                        int32_t edx_11 = *edi_4
                        int32_t eax_12 = *esi_2
                        
                        if (((edx_11 ^ eax_12) & 0xfff00000) == 0)
                            int32_t edx_12 = edx_11 & 0xfffff
                            int32_t eax_13 = eax_12 & 0xfffff
                            
                            if (edx_12 != 0 && eax_13 != 0)
                                uint32_t i_4 = divu.dp.d(0:(edi_4[1]), edx_12)
                                
                                if (i_4 == divu.dp.d(0:(esi_2[1]), eax_13) && edx_12 == edi_4[3])
                                    int32_t edx_16 = esi_2[3]
                                    
                                    if (eax_13 == edx_16)
                                        int32_t var_18_1 = 0xffffffff
                                        int32_t var_8_2 = 0
                                        
                                        if (edx_16 u> 0)
                                            int32_t* ecx_7 = esi_2[4]
                                            
                                            do
                                                if (*ecx_7 == *var_c_2)
                                                    var_18_1 = var_8_2
                                                    break
                                                
                                                var_8_2 += 1
                                                ecx_7 = &ecx_7[1]
                                            while (var_8_2 u< edx_16)
                                        
                                        int32_t eax_23 = 0
                                        
                                        if (edx_16 u> 0)
                                            int32_t* ecx_8 = edi_4[4]
                                            
                                            while (*ecx_8 != i_1)
                                                eax_23 += 1
                                                ecx_8 = &ecx_8[1]
                                                
                                                if (eax_23 u>= esi_2[3])
                                                    goto label_4b4f31
                                            
                                            if (eax_23 != 0xffffffff && var_18_1 != 0xffffffff)
                                                int32_t var_8_3 = 1
                                                
                                                if (i_4 u> 0)
                                                    int32_t* edx_19 = edi_4[2] + (eax_23 << 2)
                                                    int32_t* eax_25 = esi_2[2] + (var_18_1 << 2)
                                                    uint32_t i_3 = i_4
                                                    uint32_t i_2
                                                    
                                                    do
                                                        if (*edx_19 != *eax_25)
                                                            var_8_3 = 0
                                                        
                                                        eax_25 = &eax_25[eax_13]
                                                        edx_19 = &edx_19[edx_12]
                                                        i_2 = i_3
                                                        i_3 -= 1
                                                    while (i_2 != 1)
                                                    ebx = var_28
                                                
                                                if (i_4 u<= 0 || var_8_3 != 0)
                                                    **(ebx + 0x100) = 0x11000003
                                                    *(*(ebx + 0x100) + 4) = 3
                                                    *(*(ebx + 0x100) + 0xc) = 3
                                                    break
                    
                label_4b4f31:
                    var_20_2 += 1
                    var_c_2 += 4
                    
                    if (var_20_2 u>= 3)
                        uint32_t var_40_1 = zx.d((*(ebx + 0xc8)).b)
                        sub_4a4100(ebx, eax[0xf], 0x11c0, "Clip must be from a 3 vector in ps_1_%i")
                        goto label_4b4fa4
                
                break
        
        break

return 0
