// 函数: sub_425690
// 地址: 0x425690
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = arg1
int32_t* eax
int32_t* ecx_1
eax, ecx_1 = sub_4258e0(arg2)

if (eax != 0xffffffff)
    sub_425430(eax, 0)
    return eax

int32_t esi_1 = 0
void* eax_2 = &data_13747ac

while (true)
    if (*eax_2 != 0)
        esi_1 += 1
        eax_2 += 0x74
        
        if (esi_1 s< 0x200)
            continue
    else if (esi_1 != 0xffffffff)
        if (esi_1 u> 0x1ff)
            break
        
        void* edi = esi_1 * 0x74
        void* var_1c_2 = edi + &data_1374790
        
        if (sub_4a83f0(edi + 0x13747cc, arg2, edi + 0x13747b0, ecx_1, edi + 0x13747cc) != 0)
            *(edi + 0x137478c) = arg2
            *(edi + &data_13747ac) = 1
            return esi_1
        
        *(edi + &data_13747ac) -= 1
        sub_4d6c40(edi + 0x13747b0, edi + 0x13747b4)
        sub_425320(esi_1)
        return 0xffffffff
    
    if (data_702fc0 == 0)
        break
    
    int32_t var_1c_1 = arg2
    char* eax_3 = sub_4c84d0(&data_7027c0, 0x614100)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_3, data_72d6ac, data_719b6c, 0x6140b8, &data_7027c0), 
                data_72d6ac, data_719b6c, 0x6140b8, &data_7027c0), 
            data_72d6ac, data_719b6c, 0x6140b8, &data_7027c0)
        sub_4a1e40(3)
    
    break

return 0xffffffff
