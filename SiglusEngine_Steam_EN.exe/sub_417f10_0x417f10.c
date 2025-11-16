// 函数: sub_417f10
// 地址: 0x417f10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_14 = edi

if (*arg2 == 0x2710 && *(arg2 + 4) == 0x2710)
    int32_t i = *(arg2 + 8)
    void* edx = arg2 + 0xc
    
    while (i != 0x4e20)
        if (i == 0x2774)
            int32_t esi_1 = *(edx + 4)
            int32_t edi_2 = *edx
            int32_t eax_2 = esi_1 * edi_2
            sub_4d1c30(eax_2, edx + 8, &data_1320e94, eax_2)
            data_1321e94 = edi_2
            data_1321e98 = esi_1
            edx = edx + 8 + eax_2
        
        i = *edx
        edx += 4
    
    int32_t eax_3 = *edx
    data_1320e90 = eax_3
    void* var_8 = edx + 4
    
    if (eax_3 s> 0)
        uint32_t eax_4 = eax_3 * 0xa8
        sub_4d6960(eax_4, &data_1320e8c, &data_1320e88, eax_4, "BUSTSHOT_SET")
        void* esi_2 = data_1320e8c
        int32_t edi_3 = 0
        
        if (data_1320e90 s> 0)
            void* edx_3 = edx + 4
            
            while (true)
                *(esi_2 + 2) = 0
                *(esi_2 + 0x27) = 0
                *(esi_2 + 0x4b) = 0
                *(esi_2 + 0x70) = 0xc8
                *(esi_2 + 0x74) = 0x50
                *(esi_2 + 0x78) = 0
                *(esi_2 + 0x9c) = 0xc8
                *(esi_2 + 0xa0) = 0xa0
                *(esi_2 + 0xa4) = 0xffffffff
                sub_417da0(&var_8, edx_3, esi_2, &var_8)
                edi_3 += 1
                esi_2 += 0xa8
                
                if (edi_3 s>= data_1320e90)
                    break
                
                edx_3 = var_8

return 1
