// 函数: sub_729940
// 地址: 0x729940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg3[6]
int32_t* var_8 = arg3
int32_t* var_c = esi
int32_t edi = esi[1]
char* ebx = *esi
*(arg3 + 0xc9) = arg4
arg3[0x32].b = arg2
*(arg3 + 0xca) = arg5

if (edi != 0)
    goto label_729994

if (esi[3](arg3) != 0)
    ebx = *esi
    edi = esi[1]
    arg3 = var_8
label_729994:
    void* ebx_1 = &ebx[1]
    uint32_t edx_1 = zx.d(*ebx) << 8
    arg4.d = edx_1
    int32_t edi_1 = edi - 1
    
    if (edi != 1)
        goto label_7299b6
    
    if (esi[3](arg3) != 0)
        ebx_1 = *esi
        edi_1 = esi[1]
        edx_1 = arg4.d
    label_7299b6:
        void* ebx_2 = ebx_1 + 1
        arg4.d = edx_1 + zx.d(*ebx_1)
        int32_t edi_2 = edi_1 - 1
        
        if (edi_1 != 1)
            goto label_7299d3
        
        if (esi[3](var_8) != 0)
            ebx_2 = *esi
            edi_2 = esi[1]
        label_7299d3:
            int32_t* edx_3 = var_8
            void* ebx_3 = ebx_2 + 1
            edx_3[0x30] = zx.d(*ebx_2)
            int32_t edi_3 = edi_2 - 1
            
            if (edi_2 != 1)
                goto label_7299fb
            
            if (esi[3](edx_3) != 0)
                ebx_3 = *esi
                edi_3 = esi[1]
                edx_3 = var_8
            label_7299fb:
                void* ebx_4 = ebx_3 + 1
                edx_3[8] = zx.d(*ebx_3) << 8
                int32_t edi_4 = edi_3 - 1
                
                if (edi_3 != 1)
                    goto label_729a21
                
                if (esi[3](edx_3) != 0)
                    ebx_4 = *esi
                    edi_4 = esi[1]
                    edx_3 = var_8
                label_729a21:
                    void* ebx_5 = ebx_4 + 1
                    edx_3[8] += zx.d(*ebx_4)
                    int32_t edi_5 = edi_4 - 1
                    
                    if (edi_4 != 1)
                        goto label_729a44
                    
                    if (esi[3](edx_3) != 0)
                        ebx_5 = *esi
                        edi_5 = esi[1]
                        edx_3 = var_8
                    label_729a44:
                        void* ebx_6 = ebx_5 + 1
                        edx_3[7] = zx.d(*ebx_5) << 8
                        int32_t edi_6 = edi_5 - 1
                        
                        if (edi_5 != 1)
                            goto label_729a6a
                        
                        if (esi[3](edx_3) != 0)
                            ebx_6 = *esi
                            edi_6 = esi[1]
                            edx_3 = var_8
                        label_729a6a:
                            void* ebx_7 = ebx_6 + 1
                            edx_3[7] += zx.d(*ebx_6)
                            int32_t edi_7 = edi_6 - 1
                            
                            if (edi_6 != 1)
                                goto label_729a8d
                            
                            if (esi[3](edx_3) != 0)
                                ebx_7 = *esi
                                edi_7 = esi[1]
                                edx_3 = var_8
                            label_729a8d:
                                int32_t edi_8 = edi_7 - 1
                                void* ecx = *edx_3
                                void* ebx_8 = ebx_7 + 1
                                edx_3[9] = zx.d(*ebx_7)
                                arg4.d -= 8
                                *(ecx + 0x18) = edx_3[0x65]
                                *(ecx + 0x1c) = edx_3[7]
                                *(ecx + 0x20) = edx_3[8]
                                *(ecx + 0x24) = edx_3[9]
                                *(*edx_3 + 0x14) = 0x66
                                (*(*edx_3 + 4))(edx_3, 1)
                                int32_t* edx_4 = var_8
                                
                                if (*(edx_4[0x6b] + 0xd) != 0)
                                    *(*edx_4 + 0x14) = 0x3d
                                    (**edx_4)(edx_4)
                                    edx_4 = var_8
                                
                                if (edx_4[8] u<= 0 || edx_4[7] u<= 0 || edx_4[9] s<= 0)
                                    *(*edx_4 + 0x14) = 0x21
                                    (**edx_4)(edx_4)
                                    edx_4 = var_8
                                
                                if (arg4.d != edx_4[9] * 3)
                                    *(*edx_4 + 0x14) = 0xc
                                    (**edx_4)(edx_4)
                                    edx_4 = var_8
                                
                                if (edx_4[0x31] == 0)
                                    int32_t eax_39 = (*edx_4[1])(edx_4, 1, edx_4[9] * 0x58)
                                    edx_4 = var_8
                                    edx_4[0x31] = eax_39
                                
                                arg4.d = 0
                                
                                if (edx_4[9] s> 0)
                                    int32_t i
                                    
                                    do
                                        if (edi_8 == 0)
                                            if (esi[3](edx_4) == 0)
                                                return 0
                                            
                                            ebx_8 = *esi
                                            edi_8 = esi[1]
                                            edx_4 = var_8
                                        
                                        uint32_t ecx_3 = zx.d(*ebx_8)
                                        int32_t j = 0
                                        void* esi_1 = edx_4[0x31]
                                        int32_t edi_9 = edi_8 - 1
                                        void* ebx_9 = ebx_8 + 1
                                        
                                        if (arg4.d s> 0)
                                            do
                                                if (ecx_3 == *esi_1)
                                                    int32_t* esi_2 = edx_4[0x31]
                                                    int32_t eax_41 = arg4.d
                                                    int32_t ecx_2 = *esi_2
                                                    esi_1 = &esi_2[0x16]
                                                    
                                                    if (eax_41 s> 1)
                                                        int32_t k_1 = eax_41 - 1
                                                        int32_t k
                                                        
                                                        do
                                                            if (*esi_1 s> ecx_2)
                                                                ecx_2 = *esi_1
                                                            
                                                            esi_1 += 0x58
                                                            k = k_1
                                                            k_1 -= 1
                                                        while (k != 1)
                                                        edx_4 = var_8
                                                    
                                                    ecx_3 = ecx_2 + 1
                                                    break
                                                
                                                j += 1
                                                esi_1 += 0x58
                                            while (j s< arg4.d)
                                        
                                        *esi_1 = ecx_3
                                        *(esi_1 + 4) = arg4.d
                                        int32_t* edx_5
                                        
                                        if (edi_9 != 0)
                                            edx_5 = var_c
                                        else
                                            if (var_c[3](edx_4) == 0)
                                                return 0
                                            
                                            edx_5 = var_c
                                            ebx_9 = *edx_5
                                            edi_9 = edx_5[1]
                                        
                                        uint32_t ecx_4 = zx.d(*ebx_9)
                                        void* ebx_10 = ebx_9 + 1
                                        *(esi_1 + 0xc) = ecx_4 & 0xf
                                        *(esi_1 + 8) = ecx_4 s>> 4 & 0xf
                                        int32_t edi_11 = edi_9 - 1
                                        
                                        if (edi_9 == 1)
                                            if (edx_5[3](var_8) == 0)
                                                return 0
                                            
                                            ebx_10 = *var_c
                                            edi_11 = var_c[1]
                                        
                                        edi_8 = edi_11 - 1
                                        ebx_8 = ebx_10 + 1
                                        *(esi_1 + 0x10) = zx.d(*ebx_10)
                                        void* ecx_6 = *var_8
                                        *(ecx_6 + 0x18) = *esi_1
                                        *(ecx_6 + 0x1c) = *(esi_1 + 8)
                                        *(ecx_6 + 0x20) = *(esi_1 + 0xc)
                                        *(ecx_6 + 0x24) = *(esi_1 + 0x10)
                                        *(*var_8 + 0x14) = 0x67
                                        (*(*var_8 + 4))(var_8, 1)
                                        edx_4 = var_8
                                        i = arg4.d + 1
                                        esi = var_c
                                        arg4.d = i
                                    while (i s< edx_4[9])
                                
                                *(edx_4[0x6b] + 0xd) = 1
                                void* result
                                result.b = 1
                                esi[1] = edi_8
                                *esi = ebx_8
                                return result

return 0
