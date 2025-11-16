// 函数: sub_4ae000
// 地址: 0x4ae000
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_70305c

if (eax s< 0x40)
    int32_t eax_1 = eax * 9
    
    if (*((eax_1 << 2) + &data_12a651c) != 0)
        int32_t eax_2 = data_1bfe2d0
        int32_t esi = data_7030c4
        
        if (data_703054 == 1)
            eax_2 = 1
        
        data_1bfe2d0 = eax_2
        int32_t eax_3 = data_703058
        
        if (eax_3 s< 0)
            eax_3 = 0
        else if (eax_3 s> 8)
            eax_3 = 8
        
        data_1bff9a8 = 0xff
        data_1bfe2cc = 8 - eax_3
        data_1bff9a4 = 0xffffff01 << (8 - eax_3).b
        int32_t eax_6 = data_703050 - 0x384
        data_1bff9ac = esi
        int32_t var_c
        
        if (eax_6 u> 3)
            return sub_459170(var_c, var_c, &data_1bfe2a4, var_c, (eax_1 << 2) + &data_12a651c)
        
        switch (eax_6)
            case 0
                int32_t eax_7 = data_7030b0
                return sub_459170(eax_7, data_7030ac, &data_1bfe2a4, eax_7, 
                    (eax_1 << 2) + &data_12a651c)
            case 1
                int32_t eax_9 = data_703064
                return sub_459170(eax_9, data_703060, &data_1bfe2a4, eax_9, 
                    (eax_1 << 2) + &data_12a651c)
            case 2
                int32_t eax_11 = data_7030b0
                int32_t edx_3 = data_7030ac
                data_1bff8a0 = 0
                data_1bff8a4 = 0xff
                data_1bff8a8 = esi
                data_1bfe2d4 = 1
                return sub_459170(eax_11, edx_3, &data_1bfe2a4, eax_11, 
                    (eax_1 << 2) + &data_12a651c)
            case 3
                int32_t eax_13 = data_703064
                int32_t edx_4 = data_703060
                data_1bff8a0 = 0
                data_1bff8a4 = 0xff
                data_1bff8a8 = esi
                data_1bfe2d4 = 1
                return sub_459170(eax_13, edx_4, &data_1bfe2a4, eax_13, 
                    (eax_1 << 2) + &data_12a651c)

int32_t var_1c_5 = data_703050
char* eax_17 = sub_4c84d0(&data_7027c0, 0x61c044)

if (data_702fc0 != 0)
    sub_55f390(
        sub_55f1e0(sub_55ef70(eax_17, data_72d6ac, data_719b6c, &data_7027c0, 0x61c068), 
            data_72d6ac, data_719b6c, &data_7027c0, 0x61c068), 
        data_72d6ac, data_719b6c, &data_7027c0, 0x61c068)
    sub_4a1e40(3)

int32_t result = data_7030c4
data_703050 = 0x32
data_1bff8a0 = 0
data_1bff8a4 = 0xff
data_1bff8a8 = result
return result
