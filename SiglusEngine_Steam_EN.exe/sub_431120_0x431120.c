// 函数: sub_431120
// 地址: 0x431120
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_71929c
char var_5 = 0

if (eax == 0x22 || eax == 0x23 || eax == 0x24)
    var_5 = 1

int32_t edi = 0
int32_t result

for (void* i = &data_1392750; i s< 0x1392ce0; )
    if (*(i - 0x30) != 0xffffffff)
        if (*(i - 0x2c) == 0xffffffff)
            sub_431960(i - 0x30)
        else
            sub_431750(i - 0x30)
    
    char edx = *i
    char eax_1 = sub_4310a0(edi)
    
    if (edx == 0)
        if (eax_1 == 0)
            goto label_431240
        
        int32_t eax_2 = data_1392710
        *i = 0x101
        *(i + 2) = edx
        *(i + 4) = eax_2
        *(i + 0x38) = 1
    else if (eax_1 != 0)
        *(i + 0x38) = 1
    else
        int32_t eax_6 = data_1392710
        *i = 0
        *(i + 2) = 1
        *(i + 4) = eax_6
    label_431240:
        
        if (*(i + 2) != 0)
            *(i + 0x38) = 1
        else
            *(i + 0x38) = 0
    
    if ((&data_70488c)[edi] == 0 || data_131256c != 0 || var_5 != 0 || data_1311174 != 0
            || (data_139270c != 0xffffffff && data_1392708 != 0) || data_1392704 != 0)
        *(i + 0x38) = 0
    else if (data_1311178 != 0 && data_1311177 != 0)
        *(i + 0x38) = 0
    
    *(i + 0x1f4) = *(i + 8)
    result = sub_4312a0(i + 0x180, i + 0xc)
    int32_t eax_5
    
    if (*(i + 1) != 0)
        eax_5 = data_1392710 - *(i + 4)
        int32_t ecx_4 = *(i - 0x24)
        
        if (eax_5 s>= ecx_4)
            eax_5 = ecx_4
            *(i + 1) = 0
        
        result = sub_431480(eax_5, 0, edi, eax_5)
    else if (*(i + 2) != 0)
        int32_t ecx_6 = data_1392710 - *(i + 4)
        int32_t eax_7 = *(i - 0x10)
        
        if (ecx_6 s>= eax_7)
            ecx_6 = eax_7
            *(i + 2) = 0
        
        eax_5 = *(i - 0x24) - ecx_6
        result = sub_431480(eax_5, 1, edi, eax_5)
    i += 0x2c8
    edi += 1

return result
