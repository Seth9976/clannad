// 函数: sub_4ae250
// 地址: 0x4ae250
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_703058

if (eax s< 0x40)
    int32_t eax_1 = eax * 9
    
    if (*((eax_1 << 2) + &data_12a651c) != 0)
        int32_t eax_2 = data_1bfe2d0
        
        if (data_703054 == 1)
            eax_2 = 1
        
        bool cond:1 = data_703050 != 0x38e
        data_1bfe2d0 = eax_2
        int32_t eax_3
        int32_t edx_1
        
        if (cond:1)
            int32_t var_c
            edx_1 = var_c
            eax_3 = var_c
        else
            edx_1 = data_7030ac
            eax_3 = data_7030b0
            data_1bfe2d4 = 2
        
        sub_459170(eax_3, edx_1, &data_1bfe2a4, eax_3, (eax_1 << 2) + &data_12a651c)
        int32_t eax_4 = data_703064
        int32_t ecx_2
        
        if (eax_4 s>= 2)
            ecx_2 = 0x40
            
            if (eax_4 s< 0x40)
                ecx_2 = eax_4
        else
            ecx_2 = 1
        
        int32_t temp0_1 = divs.dp.d(sx.q(data_7030bc), ecx_2)
        sub_4a8d50(temp0_1, temp0_1, &data_1bfe2bc, divs.dp.d(sx.q(data_7030c0), ecx_2))
        int32_t eax_11 = data_70305c
        int32_t ecx_3 = data_7030c4
        data_1bff9e0 = ecx_3
        int32_t eax_13 = eax_11 * 0xa
        
        if (data_1bfe2d0 != 0)
            data_1bff9b8 = 4
            data_1bff9d8 = eax_13
            data_1bff9dc = 0
        else
            data_1bff9b8 = 3
            data_1bff9d8 = 0
            data_1bff9dc = eax_13
        
        int32_t eax_14 = data_703060 * 0xe10
        data_1bffce4 = 0
        data_1bffcec = ecx_3
        data_1bffce8 = eax_14
        return eax_14

int32_t var_14_2 = data_703050
char* eax_15 = sub_4c84d0(&data_7027c0, 0x61c044)

if (data_702fc0 != 0)
    sub_55f390(
        sub_55f1e0(sub_55ef70(eax_15, data_72d6ac, data_719b6c, &data_7027c0, 0x61c068), 
            data_72d6ac, data_719b6c, &data_7027c0, 0x61c068), 
        data_72d6ac, data_719b6c, &data_7027c0, 0x61c068)
    sub_4a1e40(3)

int32_t eax_18 = data_7030c4
data_703050 = 0x32
data_1bff8a0 = 0
data_1bff8a4 = 0xff
data_1bff8a8 = eax_18
return eax_18
