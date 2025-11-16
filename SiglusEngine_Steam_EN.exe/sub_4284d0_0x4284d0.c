// 函数: sub_4284d0
// 地址: 0x4284d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1

if (*arg2 == 0x2710 && arg2[1] == 0x2710)
    int32_t i = arg2[2]
    void* edi_1 = &arg2[3]
    
    while (i != 0x4e20)
        if (i == 0x2774)
            int32_t eax_1 = *edi_1
            sub_4d1c30(eax_1, edi_1 + 4, &arg1[4], eax_1)
            arg1 = var_8
            edi_1 = edi_1 + 4 + eax_1
        
        i = *edi_1
        edi_1 += 4
    
    int32_t eax_2 = *edi_1
    void* edi_3 = edi_1 + 4
    arg1[0xf] = eax_2
    void* var_c = edi_3
    
    if (eax_2 s> 0)
        int32_t eax_3 = eax_2 << 4
        sub_4d6960(eax_3, &arg1[0xe], &arg1[0xd], eax_3, "G00ANM_SET")
        int32_t ebx_1 = 0
        void* esi_2 = arg1[0xe]
        
        if (var_8[0xf] s> 0)
            while (true)
                *esi_2 = 0
                *(esi_2 + 2) = 0
                *(esi_2 + 4) = 0
                *(esi_2 + 8) = 0
                *(esi_2 + 0xc) = 0
                sub_4283e0(&var_c, edi_3, esi_2, &var_c)
                ebx_1 += 1
                esi_2 += 0x10
                
                if (ebx_1 s>= var_8[0xf])
                    break
                
                edi_3 = var_c

return 1
