// 函数: sub_4a6290
// 地址: 0x4a6290
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = data_1372c28

if (esi u<= 0x1ff)
    *(esi * 0x74 + &data_13747ac) -= 1
    
    if (*(esi * 0x74 + &data_13747ac) s<= 0)
        sub_4d6c40(esi * 0x74 + 0x13747b0, esi * 0x74 + 0x13747b4)
        sub_425320(esi)

int32_t esi_1 = data_1372c2c

if (esi_1 u<= 0x1ff)
    *(esi_1 * 0x74 + &data_13747ac) -= 1
    
    if (*(esi_1 * 0x74 + &data_13747ac) s<= 0)
        sub_4d6c40(esi_1 * 0x74 + 0x13747b0, esi_1 * 0x74 + 0x13747b4)
        sub_425320(esi_1)

for (int128_t* i = &data_1372c30; i s< &data_1372c58; i += 4)
    int32_t edi_1 = *i
    
    if (edi_1 u<= 0x1ff)
        *(edi_1 * 0x74 + &data_13747ac) -= 1
        
        if (*(edi_1 * 0x74 + &data_13747ac) s<= 0)
            sub_4d6c40(edi_1 * 0x74 + 0x13747b0, edi_1 * 0x74 + 0x13747b4)
            sub_425320(edi_1)

for (void* i_1 = &data_1372c58; i_1 s< 0x1372d58; )
    int32_t j_1 = 8
    int32_t j_2 = 8
    int32_t j
    
    do
        BOOL hMem = *i_1
        
        if (hMem u<= 0x1ff)
            void* edi_2 = hMem * 0x74
            *(edi_2 + &data_13747ac) -= 1
            
            if (*(edi_2 + &data_13747ac) s<= 0)
                if (*(edi_2 + 0x13747b0) != 0)
                    int32_t eax_1 = data_1af413c
                    
                    if (eax_1 == 0)
                    label_4a63b5:
                        hMem = *(edi_2 + 0x13747b0)
                        
                        if (hMem != 0)
                            GlobalUnlock(hMem)
                            hMem = GlobalFree(*(edi_2 + 0x13747b0))
                            *(edi_2 + 0x13747b0) = 0
                        
                        goto label_4a63d4
                    
                    hMem = WaitForSingleObject(data_7027a8, 0xffffffff)
                    
                    if (*(edi_2 + 0x13747b0) == 0)
                    label_4a63d4:
                        *(edi_2 + 0x13747b4) = 0
                        
                        if (eax_1 != 0)
                            sub_4d6500()
                            hMem = ReleaseSemaphore(data_7027a8, 1, nullptr)
                    else
                        hMem = sub_4d6b80(edi_2 + 0x13747b0)
                        
                        if (hMem.b != 0)
                            goto label_4a63b5
                else
                    *(edi_2 + 0x13747b4) = 0
                
                *(edi_2 + &data_1374760) = 0
                sub_4d1ba0(hMem, 0x24, edi_2 + 0x1374764, 0)
                j_1 = j_2
                *(edi_2 + 0x137478c) = 0xffffffff
                *(edi_2 + &data_13747ac) = 0
                *(edi_2 + 0x13747cc) = 0
                *(edi_2 + 0x13747d0) = 0
                *(edi_2 + 0x13747b0) = 0
                *(edi_2 + 0x13747b4) = 0
        
        i_1 += 4
        j = j_1
        j_1 -= 1
        j_2 = j_1
    while (j != 1)

data_1372c20 = 0xffffffff
data_1372c24 = 0
__builtin_memset(&data_1372c28, 0xff, 0x30)
__builtin_memset(&data_1372c58, 0xffffffff, 0x100)
return 0xffffffff
