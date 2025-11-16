// 函数: sub_428820
// 地址: 0x428820
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = arg1
int32_t eax = sub_428990(arg2, 0)

if (eax != 0xffffffff)
    return eax

int32_t edi_1 = 0
void* eax_1 = &data_1382f88

while (true)
    if (*eax_1 != 0)
        edi_1 += 1
        eax_1 += 0x6c
        
        if (edi_1 s< 0x200)
            continue
    else if (edi_1 != 0xffffffff)
        if (edi_1 u<= 0x1ff)
            void* esi_1 = edi_1 * 0x6c
            int32_t eax_6 = sub_4285d0(esi_1 + 0x1382f8c)
            
            if (eax_6 != 0)
                *(esi_1 + &data_1382f88) = 1
                char* esi_2 = esi_1 + 0x1382f64
                sub_4cfdf0(eax_6, arg2, esi_2, 0x24)
                
                if (esi_2 != 0)
                    while (true)
                        char eax_7 = *esi_2
                        
                        if (eax_7 u>= 0x80 && (eax_7 u< 0xa0 || eax_7 u> 0xdf) && eax_7 u< 0xfe)
                            esi_2 = &esi_2[2]
                            continue
                        
                        if (eax_7 == 0)
                            break
                        
                        if (eax_7 u>= 0x61 && eax_7 u<= 0x7a)
                            *esi_2 = eax_7 - 0x20
                        
                        esi_2 = &esi_2[1]
                
                return edi_1
            
            *(esi_1 + &data_1382f88) -= 1
            sub_428300(esi_1 + 0x1382f8c)
            sub_428710(edi_1)
        
        break
    
    if (data_702fc0 == 0)
        break
    
    char* var_1c_1 = arg2
    char* eax_2 = sub_4c84d0(&data_7027c0, "%s")
    
    if (data_702fc0 == 0)
        break
    
    sub_55f390(
        sub_55f1e0(sub_55ef70(eax_2, data_72d6ac, data_719b6c, 0x6141f0, &data_7027c0), 
            data_72d6ac, data_719b6c, 0x6141f0, &data_7027c0), 
        data_72d6ac, data_719b6c, 0x6141f0, &data_7027c0)
    sub_4a1e40(3)
    return 0xffffffff

return 0xffffffff
