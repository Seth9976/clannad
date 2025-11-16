// 函数: sub_468200
// 地址: 0x468200
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = &data_72d6b0
void* var_8 = &data_98bf04
void* var_10 = &data_72d6b0
void* var_c = &data_b73f04
void* var_14 = &data_d08704
int32_t i_1 = 0

if (data_7031bc s> 0)
    void* eax_1 = &data_98bf04
    int32_t i
    
    do
        int32_t ecx_1 = data_131310c
        void* esi_1 = eax_1 + 0x3c
        int32_t j_1 = 2
        int32_t j
        
        do
            sub_4637f0(edi, eax_1)
            
            if (*(esi_1 - 8) != 0)
                int32_t ebx_1 = data_1af413c
                
                if (ebx_1 == 0)
                label_468298:
                    HGLOBAL hMem = *(esi_1 - 8)
                    
                    if (hMem != 0)
                        GlobalUnlock(hMem)
                        GlobalFree(*(esi_1 - 8))
                        *(esi_1 - 8) = 0
                    
                    *(esi_1 - 4) = 0
                    
                    if (ebx_1 != 0)
                        sub_4d6500()
                        ReleaseSemaphore(data_7027a8, 1, nullptr)
                else
                    WaitForSingleObject(data_7027a8, 0xffffffff)
                    
                    if (*(esi_1 - 8) == 0)
                        goto label_468298
                    
                    if (sub_4d6b80(esi_1 - 8) != 0)
                        goto label_468298
            else
                *(esi_1 - 4) = 0
            
            if (*esi_1 != 0)
                int32_t edi_1 = data_1af413c
                
                if (edi_1 == 0)
                label_468316:
                    HGLOBAL hMem_1 = *esi_1
                    
                    if (hMem_1 != 0)
                        GlobalUnlock(hMem_1)
                        GlobalFree(*esi_1)
                        *esi_1 = 0
                    
                    goto label_468331
                
                WaitForSingleObject(data_7027a8, 0xffffffff)
                
                if (*esi_1 == 0)
                label_468331:
                    *(esi_1 + 4) = 0
                    
                    if (edi_1 != 0)
                        sub_4d6500()
                        ReleaseSemaphore(data_7027a8, 1, nullptr)
                else if (sub_4d6b80(esi_1) != 0)
                    goto label_468316
            else
                *(esi_1 + 4) = 0
            
            if (*(esi_1 + 8) != 0)
                int32_t ebx_2 = data_1af413c
                
                if (ebx_2 == 0)
                label_468386:
                    HGLOBAL hMem_2 = *(esi_1 + 8)
                    
                    if (hMem_2 != 0)
                        GlobalUnlock(hMem_2)
                        GlobalFree(*(esi_1 + 8))
                        *(esi_1 + 8) = 0
                    
                    *(esi_1 + 0xc) = 0
                    
                    if (ebx_2 != 0)
                        sub_4d6500()
                        ReleaseSemaphore(data_7027a8, 1, nullptr)
                else
                    WaitForSingleObject(data_7027a8, 0xffffffff)
                    
                    if (*(esi_1 + 8) == 0)
                        goto label_468386
                    
                    if (sub_4d6b80(esi_1 + 8) != 0)
                        goto label_468386
            else
                *(esi_1 + 0xc) = 0
            
            *(esi_1 + 0x10) = 0
            *(esi_1 + 0x14) = 0
            
            if (*(esi_1 + 0x50) != 0)
                int32_t ebx_3 = data_1af413c
                
                if (ebx_3 == 0)
                label_4684ca:
                    HGLOBAL hMem_3 = *(esi_1 + 0x50)
                    
                    if (hMem_3 != 0)
                        GlobalUnlock(hMem_3)
                        GlobalFree(*(esi_1 + 0x50))
                        *(esi_1 + 0x50) = 0
                    
                    *(esi_1 + 0x54) = 0
                    
                    if (ebx_3 != 0)
                        sub_4d6500()
                        ReleaseSemaphore(data_7027a8, 1, nullptr)
                else
                    WaitForSingleObject(data_7027a8, 0xffffffff)
                    
                    if (*(esi_1 + 0x50) == 0)
                        goto label_4684ca
                    
                    if (sub_4d6b80(esi_1 + 0x50) != 0)
                        goto label_4684ca
            else
                *(esi_1 + 0x54) = 0
            
            *(esi_1 + 0x4c) = 0
            *(esi_1 + 0x50) = 0
            *(esi_1 + 0x54) = 0
            void* eax_5 = sub_4679d0(esi_1 + 0x238)
            sub_4631a0(esi_1 - 0x1c)
            int32_t* edi_2 = var_10
            sub_4d1c30(sub_4633c0(eax_5, var_8, edi_2, 1), var_c, edi_2, 0x650)
            sub_4d1c30(var_8, var_14, var_8, 0x7a0)
            eax_1 = var_8 + 0x7a0
            var_c += 0x650
            edi_2[0x98] = ecx_1
            edi = &edi_2[0x194]
            var_8 = eax_1
            esi_1 += 0x7a0
            var_10 = edi
            j = j_1
            j_1 -= 1
            var_14 += 0x7a0
        while (j != 1)
        i = i_1 + 1
        i_1 = i
    while (i s< data_7031bc)

return sub_467ce0()
