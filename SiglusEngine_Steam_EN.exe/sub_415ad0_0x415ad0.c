// 函数: sub_415ad0
// 地址: 0x415ad0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i_2 = 0x10
int32_t* eax

if (data_131d2d0 != 0xffffffff)
    int32_t* esi_1 = &data_131d474
    int32_t i_3 = 0x10
    int32_t i
    
    do
        if (esi_1[-0x57] != 0xffffffff)
            if (esi_1[-6] != 0 && esi_1[-7].b != 0)
                int32_t* edi = data_131d304
                
                if (edi == 0xffffffff)
                    int32_t* edi_1 = data_131d308
                    
                    if (edi_1 != 0xffffffff && edi_1 u<= 0x1ff)
                        eax = sub_425430(edi_1, 1)
                        
                        if (*(edi_1 * 0x74 + 0x13747b0) != 0)
                            eax = sub_427c30(edi_1 * 0x74 + 0x13747b0, &esi_1[-0x19])
                    
                    i_2 = i_3
                else if (edi u> 0x1ff)
                label_415bfc:
                    int32_t* ecx_8 = data_131d308
                    
                    if (ecx_8 != 0xffffffff && ecx_8 s>= 0)
                        eax = sub_4259b0(eax, &esi_1[-0x19], ecx_8, nullptr)
                    
                    i_2 = i_3
                else
                    eax = sub_425430(edi, 1)
                    
                    if (*(edi * 0x74 + 0x13747b0) == 0)
                        goto label_415bfc
                    
                    eax = sub_427c30(edi * 0x74 + 0x13747b0, &esi_1[-0x19])
                    
                    if (eax == 0)
                        goto label_415bfc
                    
                    int32_t* ecx_7 = data_131d308
                    
                    if (ecx_7 == 0xffffffff)
                        i_2 = i_3
                    else
                        int32_t* var_18
                        int32_t var_14
                        int32_t var_10
                        int32_t var_c
                        eax = sub_425a20(&var_c, &esi_1[-0x19], ecx_7, &var_c, &var_10, &var_14, 
                            &var_18)
                        
                        if (eax == 0)
                            i_2 = i_3
                        else
                            int32_t eax_3 = var_c
                            
                            if (*esi_1 s> eax_3)
                                *esi_1 = eax_3
                            
                            int32_t eax_4 = var_10
                            
                            if (esi_1[1] s> eax_4)
                                esi_1[1] = eax_4
                            
                            int32_t eax_5 = var_14
                            
                            if (esi_1[2] s< eax_5)
                                esi_1[2] = eax_5
                            
                            eax = var_18
                            i_2 = i_3
                            
                            if (esi_1[3] s< eax)
                                esi_1[3] = eax
            
            if (esi_1[0x40] != 0 && esi_1[0x3f].b != 0 && esi_1[-0x53] != 0 && esi_1[-0x51] != 0)
                int32_t ecx_13 = esi_1[0x2e]
                int32_t edx_7 = esi_1[0x2f]
                esi_1[0x46] = ecx_13
                esi_1[0x47] = edx_7
                esi_1[0x48] = esi_1[-0x4e] - 1 + ecx_13
                eax = esi_1[-0x4d] - 1 + edx_7
                esi_1[0x49] = eax
        
        eax = sub_41cd30(sub_41cd30(eax, &esi_1[0xa], &esi_1[-0x19], nullptr, nullptr), 
            &esi_1[0x50], &esi_1[0x2d], nullptr, nullptr)
        esi_1 = &esi_1[0xed]
        i = i_2
        i_2 -= 1
        i_3 = i_2
    while (i != 1)
else
    void* esi = &data_131d410
    int32_t i_1
    
    do
        eax = sub_41cd30(sub_41cd30(eax, esi + 0x8c, esi, nullptr, nullptr), esi + 0x1a4, 
            esi + 0x118, nullptr, nullptr)
        esi += 0x3b4
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
int32_t* result = data_131d300

if (result == 0)
    return result

if (result == 2)
    result = sub_427c30(data_107efa0 * 0x28 + &data_1319240, &data_107efa8)

return sub_41cd30(result, 0x107f034, &data_107efa8, nullptr, nullptr)
