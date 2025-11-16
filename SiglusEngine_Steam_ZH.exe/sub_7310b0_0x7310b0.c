// 函数: sub_7310b0
// 地址: 0x7310b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1
int32_t esi = ebx[0x6c]

if (ebx[0x3f] != 0)
    if (*(esi + 0x34) == 0)
        sub_730db0(ebx)
    
    *(esi + 0x34) -= 1

if (*(esi + 0x10) != 0xffffffff)
    int32_t eax_1 = ebx[0x63]
    int32_t edi_2 = ebx[0x5e] - 1
    int32_t eax_3 = *arg2
    int32_t eax_5 = *(ebx[0x4d] + 0x18)
    void* eax_6 = esi + 0x78 + (eax_5 << 2)
    char* esi_3 = edi_2 * 3 + *eax_6
    
    if (sub_730c20(ebx, esi_3) == 0)
        while (true)
            int32_t edi_3 = edi_2 + 1
            int32_t var_8_1 = edi_3
            
            if (sub_730c20(ebx, &esi_3[1]) != 0)
            label_73117c:
                int32_t eax_9 = sub_730c20(ebx, esi + 0xb8)
                void* esi_4 = &esi_3[2]
                int32_t edi_4 = sub_730c20(ebx, esi_4)
                
                if (edi_4 == 0)
                label_7311ea:
                    int32_t edx_11 = edi_4
                    int32_t i = edi_4 s>> 1
                    arg1 = edx_11
                    
                    for (; i != 0; i s>>= 1)
                        edx_11 = arg1
                        
                        if (sub_730c20(ebx, esi_4 + 0xe) != 0)
                            edx_11 |= i
                            arg1 = edx_11
                    
                    int32_t edx_12 = edx_11 + 1
                    
                    if (eax_9 != 0)
                        edx_12 = neg.d(edx_12)
                    
                    edi_2 = var_8_1
                    edx_12.w <<= (ebx[0x61]).b
                    *(eax_3 + (*(eax_1 + (edi_2 << 2)) << 1)) = edx_12.w
                    
                    if (edi_2 s>= ebx[0x5f])
                        break
                    
                    esi_3 = edi_2 * 3 + *eax_6
                    
                    if (sub_730c20(ebx, esi_3) == 0)
                        continue
                    
                    int32_t eax_20
                    eax_20.b = 1
                    return eax_20
                else
                    if (sub_730c20(ebx, esi_4) == 0)
                        goto label_7311ea
                    
                    edi_4 *= 2
                    int32_t esi_5 = 0xd9
                    
                    if (var_8_1 s<= zx.d(*(eax_5 + ebx + 0xeb)))
                        esi_5 = 0xbd
                    
                    esi_4 = esi_5 + *eax_6
                    
                    if (sub_730c20(ebx, esi_4) == 0)
                        goto label_7311ea
                    
                    while (true)
                        edi_4 *= 2
                        
                        if (edi_4 == 0x8000)
                            break
                        
                        esi_4 += 1
                        
                        if (sub_730c20(ebx, esi_4) == 0)
                            goto label_7311ea
            else
                while (true)
                    esi_3 = &esi_3[3]
                    
                    if (edi_3 s>= ebx[0x5f])
                        break
                    
                    edi_3 += 1
                    var_8_1 = edi_3
                    
                    if (sub_730c20(ebx, &esi_3[1]) != 0)
                        goto label_73117c
            
            *(*ebx + 0x14) = 0x75
            (*(*ebx + 4))(ebx, 0xffffffff)
            *(esi + 0x10) = 0xffffffff
            break

int32_t eax
eax.b = 1
return eax
