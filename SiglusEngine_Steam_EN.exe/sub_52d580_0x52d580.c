// 函数: sub_52d580
// 地址: 0x52d580
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 + 0x13b3c)

if (result s< 0 || result s>= 0x40)
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(result, data_72d6ac, data_719b6c, 0x61e830, nullptr), 
                data_72d6ac, data_719b6c, 0x61e830, nullptr), 
            data_72d6ac, data_719b6c, 0x61e830, nullptr)
        result = sub_4a1e40(3)
    
    *arg2 = 1
    return result

int32_t eax = data_1af4e84
char** eax_2

if (eax == 0)
    eax_2 = sub_4ef190(eax, &arg2[8], arg2[8], U"SMDB", &data_1b8a720)
    data_1b8a734 = 0
else
    eax_2 = eax - 1
    
    if (eax == 1)
        eax_2 = sub_4ef190(eax_2, &arg2[8], arg2[8], "S$", &data_1b8a720)

char* edx_2 = data_1b8a728
int32_t ecx_2 = 0xffffffff
char* esi_1 = edx_2
int32_t var_c = 0xffffffff

if (esi_1 != 0 && *esi_1 != 0)
    do
        eax_2.b = *esi_1
        
        if (eax_2.b u< 0x80)
        label_52d61b:
            
            if (eax_2.b == 0x3f)
                eax_2 = sub_542610(&esi_1[1], &var_c)
                ecx_2 = var_c
                *esi_1 = 0
                edx_2 = data_1b8a728
                goto label_52d652
            
            esi_1 = &esi_1[1]
        else if (eax_2.b u< 0xa0)
            if (eax_2.b u>= 0xfe)
                goto label_52d61b
            
            esi_1 = &esi_1[2]
        else
            if (eax_2.b u<= 0xdf || eax_2.b u>= 0xfe)
                goto label_52d61b
            
            esi_1 = &esi_1[2]
    while (*esi_1 != 0)

if (data_703850:0xc != 0)
    ecx_2 = data_703860

label_52d652:
return sub_57ef70(eax_2, data_1b8a734, *(arg1 + 0x13b3c), edx_2, ecx_2, 0, 1)
