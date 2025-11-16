// 函数: sub_731310
// 地址: 0x731310
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1
int32_t esi = ebx[0x6c]

if (ebx[0x3f] != 0)
    if (*(esi + 0x34) == 0)
        sub_730db0(ebx)
    
    *(esi + 0x34) -= 1

int32_t result

if (*(esi + 0x10) != 0xffffffff)
    char ecx_2 = (ebx[0x61]).b
    int32_t edx_1 = ebx[0x63]
    int32_t esi_1 = *arg2
    int32_t var_8_1 = edx_1
    int32_t eax_2 = 1 << ecx_2
    int32_t eax_3 = 0xffffffff << ecx_2
    int32_t ecx_3 = ebx[0x5f]
    
    while (*(esi_1 + (*(edx_1 + (ecx_3 << 2)) << 1)) == 0)
        int32_t temp0_1 = ecx_3
        ecx_3 -= 1
        
        if (temp0_1 == 1)
            break
    
    int32_t esi_3 = ebx[0x5e] - 1
    int32_t var_1c_1 = ecx_3
    void* eax_7 = esi + (*(ebx[0x4d] + 0x18) << 2) + 0x78
    void* var_20_1 = eax_7
    
    while (true)
        char* edi_3 = esi_3 * 3 + *eax_7
        
        if (esi_3 s>= ecx_3)
            if (sub_730c20(ebx, edi_3) != 0)
                break
            
            edx_1 = var_8_1
        
        int32_t eax_8 = *(edx_1 + (esi_3 << 2) + 4)
        esi_3 += 1
        arg1 = esi_1 + (eax_8 << 1)
        
        if (*(esi_1 + (eax_8 << 1)) != 0)
        label_73140a:
            
            if (sub_730c20(ebx, &edi_3[2]) != 0)
                uint32_t eax_14 = zx.d(*arg1)
                
                if (eax_14.w s>= 0)
                    result = eax_14 + eax_2
                else
                    result = eax_14 + eax_3
                
                *arg1 = result.w
        else
            while (true)
                if (sub_730c20(ebx, &edi_3[1]) != 0)
                    int16_t edx_7 = eax_2.w
                    
                    if (sub_730c20(ebx, esi + 0xb8) != 0)
                        edx_7 = eax_3.w
                    
                    *arg1 = edx_7
                    break
                
                edi_3 = &edi_3[3]
                
                if (esi_3 s>= ebx[0x5f])
                    *(*ebx + 0x14) = 0x75
                    (*(*ebx + 4))(ebx, 0xffffffff)
                    *(esi + 0x10) = 0xffffffff
                    goto label_73148a
                
                esi_3 += 1
                int32_t eax_12 = *(var_8_1 + (esi_3 << 2))
                arg1 = esi_1 + (eax_12 << 1)
                
                if (*(esi_1 + (eax_12 << 1)) != 0)
                    goto label_73140a
        
        if (esi_3 s>= ebx[0x5f])
            break
        
        edx_1 = var_8_1
        ecx_3 = var_1c_1
        eax_7 = var_20_1

label_73148a:
result.b = 1
return result
