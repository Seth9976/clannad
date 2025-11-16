// 函数: sub_55df40
// 地址: 0x55df40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1af0adc == 0 || data_1321eb0 == 0)
    return 

int32_t ecx = data_1321eac

if (ecx s<= 0 || data_1321ebc == 0 || data_1321eb8 s<= 0)
    return 

int32_t* eax = data_1321eb4
int32_t i = 0
char* esi_1 = data_20c54c4
int32_t* var_8_1 = eax

if (ecx s<= 0)
    return 

do
    int32_t edx_1 = *(data_1321ec0 + *eax * 0x3c + 0x20)
    int32_t var_c
    int32_t eax_4
    
    if (edx_1 != 0xffffffff)
        int32_t ecx_4 = 0
        
        if (data_12dc4bc != 0)
            ecx_4 = 0x1a
        
        eax_4 = sub_4e76e0(&var_c, edx_1, ecx_4 + 0x19, &var_c, &data_704898)
    
    if (edx_1 == 0xffffffff || eax_4 == 0)
        if (arg1 != 0 || *esi_1 != 2)
            sub_55df10(i, &data_61c90c)
            *esi_1 = 2
    else if (var_c == 0)
        if (arg1 != 0 || *esi_1 != arg1.b)
            sub_55df10(i, &data_6201e8)
            *esi_1 = 0
    else if (arg1 != 0 || *esi_1 != 1)
        sub_55df10(i, &data_61fd0c)
        *esi_1 = 1
    
    i += 1
    eax = &var_8_1[0xb]
    esi_1 = &esi_1[1]
    var_8_1 = eax
while (i s< data_1321eac)
