// 函数: sub_4e97a0
// 地址: 0x4e97a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_c = ecx

for (int32_t i = 0; i s< 0x14; i += 1)
    int32_t eax_1 = *((i << 2) + &data_612910)
    HWND ecx_1 = (&data_1af0a10)[eax_1]
    
    if (ecx_1 != 0)
        HWND var_14_1 = ecx_1
        int32_t edx = sub_560aa0(eax_1, edx, ecx_1, i)

sub_55bb60(0)
int32_t eax_2 = data_70486c

if (eax_2 s> 0)
    eax_2 -= 1
    data_70486c = eax_2

if (data_91e8fc s< 0x80)
    data_1c054d8 = 0
else if (data_1c054d8 == 0)
    int32_t var_14_2 = 0x80
    char* eax_3 = sub_4c84d0(&data_7027c0, 0x61e7b0)
    
    if (data_702fc0 != 0)
        eax_3 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_3 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_3 = nullptr
            
            if (data_1af174c == 0 && eax_3 != 0)
                eax_3 = sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_3, data_72d6ac, data_719b6c, &data_7027c0, 0x61e7e0), 
                        data_72d6ac, data_719b6c, &data_7027c0, 0x61e7e0), 
                    data_72d6ac, data_719b6c, &data_7027c0, 0x61e7e0)
    
    data_1c054d8 = 1
    return eax_3

return eax_2
