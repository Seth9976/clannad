// 函数: sub_4b7820
// 地址: 0x4b7820
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* i = &data_109a7e4
int32_t esi = 0
void* i_1 = &data_109a7e4

do
    if (*((esi << 2) + &data_12997e4) == 5)
        *((esi << 2) + &data_1bffec0) = 0xffffffff
        int32_t j = 0
        *((esi << 2) + &data_1bffdc0) = 0xffffffff
        void* i_3 = i
        
        do
            void var_14
            void* i_2
            int32_t var_8
            
            if (*i_3 != 0)
                i = sub_4b7200(i, j, esi, nullptr)
                
                if (i == 1)
                    sub_411bf0(&var_8, &var_14, i_3, &var_8, &i_2)
                    int32_t eax_1 = *((esi << 2) + &data_1bffec0)
                    
                    if (eax_1 != 0xffffffff)
                        if (eax_1 == var_8)
                            i = *((esi << 2) + &data_1bffdc0)
                        
                        if (eax_1 != var_8 || i != i_2)
                            int32_t var_28_3 = 0
                            int32_t var_2c_3 = 0x61c544
                            MessageBoxA(data_7027bc, 0x61c568, 0x61c544, MB_OK)
                            break
                            break
                    else
                        *((esi << 2) + &data_1bffec0) = var_8
                        i = i_2
                        *((esi << 2) + &data_1bffdc0) = i
            
            if (*(i_3 + 0x24) != 0)
                i = sub_4b7360(i, j, esi, nullptr)
                
                if (i == 1)
                    sub_411bf0(&var_8, &var_14, i_3 + 0x24, &var_8, &i_2)
                    int32_t eax_4 = *((esi << 2) + &data_1bffec0)
                    
                    if (eax_4 != 0xffffffff)
                        if (eax_4 == var_8)
                            i = *((esi << 2) + &data_1bffdc0)
                        
                        if (eax_4 != var_8 || i != i_2)
                            int32_t var_28_4 = 0
                            int32_t var_2c_4 = 0x61c544
                            MessageBoxA(data_7027bc, 0x61c5b8, 0x61c544, MB_OK)
                            break
                            break
                    else
                        *((esi << 2) + &data_1bffec0) = var_8
                        i = i_2
                        *((esi << 2) + &data_1bffdc0) = i
            
            j += 1
            i_3 += 0xff8
        while (j s< 8)
        
        i = i_1
    
    i += 0x7fc0
    esi += 1
    i_1 = i
while (i s< &data_12997e4)

return i
