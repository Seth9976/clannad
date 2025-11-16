// 函数: sub_4254a0
// 地址: 0x4254a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_c = ecx
int32_t eax = arg4

if (eax != 0)
    eax = 1

int32_t* eax_1 = sub_425810(eax, arg3, arg2, eax, 0, arg7)

if (eax_1 != 0xffffffff)
    if (arg5 != 0)
        sub_425430(eax_1, arg7)
    
    return eax_1

int32_t edi_1 = 0
void* eax_3 = &data_13747ac

while (true)
    if (*eax_3 != 0)
        edi_1 += 1
        eax_3 += 0x74
        
        if (edi_1 s< 0x200)
            continue
    else if (edi_1 != 0xffffffff)
        if (edi_1 u> 0x1ff)
            break
        
        void* ebx_2 = edi_1 * 0x74
        int32_t eax_9 = sub_427370(ebx_2 + 0x13747cc, arg2, ebx_2 + 0x13747b0, arg3, eax, arg5, 
            arg6, ebx_2 + 0x13747cc, arg7, arg8)
        
        if (eax_9 == 0)
            *(ebx_2 + &data_13747ac) -= 1
            sub_4d6c40(ebx_2 + 0x13747b0, ebx_2 + 0x13747b4)
            sub_425320(edi_1)
            return 0xffffffff
        
        char* esi_1 = ebx_2 + 0x1374764
        *(ebx_2 + &data_13747ac) = 1
        sub_4cfdf0(eax_9, arg2, esi_1, 0x24)
        
        if (esi_1 != 0)
            while (true)
                char eax_11 = *esi_1
                
                if (eax_11 u>= 0x80 && (eax_11 u< 0xa0 || eax_11 u> 0xdf) && eax_11 u< 0xfe)
                    esi_1 = &esi_1[2]
                    continue
                
                if (eax_11 == 0)
                    break
                
                if (eax_11 u>= 0x61 && eax_11 u<= 0x7a)
                    *esi_1 = eax_11 - 0x20
                
                esi_1 = &esi_1[1]
        
        *(ebx_2 + 0x1374788) = arg3
        *(ebx_2 + 0x13747a0) = eax
        int32_t eax_14
        eax_14.b = *(ebx_2 + 0x13747c4) == 3
        *(ebx_2 + 0x13747a4) = eax_14
        *(ebx_2 + 0x13747a8) = arg6
        return edi_1
    
    if (data_702fc0 == 0)
        break
    
    char* var_1c_1 = arg2
    char* eax_4 = sub_4c84d0(&data_7027c0, "%s")
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_4, data_72d6ac, data_719b6c, 0x6140b8, &data_7027c0), 
                data_72d6ac, data_719b6c, 0x6140b8, &data_7027c0), 
            data_72d6ac, data_719b6c, 0x6140b8, &data_7027c0)
        sub_4a1e40(3)
    
    break

return 0xffffffff
