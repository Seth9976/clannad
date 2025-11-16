// 函数: sub_52b7e0
// 地址: 0x52b7e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg2
void* esi = arg1
arg2.b = 1
arg1.b = 0
sub_57fcf0(arg1, arg2.b)
uint32_t eax = *(esi + 0x13b3c)

if (eax s< 0 || eax s>= 0x40)
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax, data_72d6ac, data_719b6c, 0x61e830, nullptr), data_72d6ac, 
                data_719b6c, 0x61e830, nullptr), 
            data_72d6ac, data_719b6c, 0x61e830, nullptr)
        eax = sub_4a1e40(3)
    
    *edi = 1
else
    void* esi_2 = eax * 0x2d0 + &data_8fcadc
    
    if (eax u<= 0x3f)
        *(eax * 0x3920 + 0xf8d328) = 0
        *(eax * 0x3920 + 0xf8d330) = 0
        *(eax * 0x3920 + 0xf8d32c) = 0
    
    eax = data_1bfdd30 - 0x136
    
    if (eax u<= 0xc)
        eax = zx.d(lookup_table_52b9e4[eax])
        
        switch (eax)
            case 0
                sub_4ef190(eax, &edi[8], edi[8], "$$", &data_1b8a720)
                *(esi_2 + 0x30) = data_1b8a720
                int32_t eax_5 = data_1b8a734
                *(esi_2 + 0x34) = eax_5
                return eax_5
            case 1
                sub_4ef190(eax, &edi[8], edi[8], U"$", &data_1b8a720)
                int32_t eax_6 = data_1b8a720
                *(esi_2 + 0x30) = eax_6
                return eax_6
            case 2
                sub_4ef190(eax, &edi[8], edi[8], U"$", &data_1b8a720)
                int32_t eax_7 = data_1b8a720
                *(esi_2 + 0x34) = eax_7
                return eax_7
            case 3
                sub_4ef190(eax, &edi[8], edi[8], "$$", &data_1b8a720)
                *(esi_2 + 0x30) += data_1b8a720
                int32_t eax_9 = data_1b8a734
                *(esi_2 + 0x34) += eax_9
                return eax_9
            case 4
                sub_4ef190(eax, &edi[8], edi[8], U"$", &data_1b8a720)
                int32_t eax_10 = data_1b8a720
                *(esi_2 + 0x30) += eax_10
                return eax_10
            case 5
                sub_4ef190(eax, &edi[8], edi[8], U"$", &data_1b8a720)
                int32_t eax_11 = data_1b8a720
                *(esi_2 + 0x34) += eax_11
                return eax_11

return eax
