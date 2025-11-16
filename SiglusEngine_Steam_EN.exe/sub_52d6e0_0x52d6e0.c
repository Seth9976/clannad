// 函数: sub_52d6e0
// 地址: 0x52d6e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1
char** eax = *(arg1 + 0x13b3c)

if (eax s< 0 || eax s>= 0x40)
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax, data_72d6ac, data_719b6c, 0x61e830, nullptr), data_72d6ac, 
                data_719b6c, 0x61e830, nullptr), 
            data_72d6ac, data_719b6c, 0x61e830, nullptr)
        eax = sub_4a1e40(3)
    
    *arg2 = 1
else
    int32_t eax_1 = data_1af4e84
    
    if (eax_1 == 0)
        eax = sub_4ef190(eax_1, &arg2[8], arg2[8], U"$", &data_1b8a720)
    else
        eax = eax_1 - 1
        
        if (eax_1 == 1)
            data_1b8a720 = eax
    
    int32_t edi_1 = *(arg1 + 0x13b3c)
    int32_t edx_1 = data_1b8a720
    
    if (edi_1 u<= 0x3f && edx_1 u<= 7)
        int32_t ecx_1 = edi_1 * 0x2d0
        void* ebx_1 = (edx_1 << 6) + &data_8fcb48 + ecx_1
        int32_t* esi_2 = edx_1 * 0x128 + 0xf8c79c + edi_1 * 0x3920
        
        if (*(ecx_1 + &data_8fcb1c) != 0 || *(ecx_1 + &data_8fcb18) != 0)
            return sub_57ee30(ebx_1, esi_2)
        
        sub_57ee30(ebx_1, esi_2)
        int32_t eax_7 = sub_580560(edi_1)
        esi_2[0x1e] += 1
        return eax_7

return eax
