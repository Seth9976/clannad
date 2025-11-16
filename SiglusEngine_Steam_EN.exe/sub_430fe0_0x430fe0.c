// 函数: sub_430fe0
// 地址: 0x430fe0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi_1 = arg1 << 7
char* result = edi_1 + 0x1305c70
void* esi_1 = arg1 * 0x2c8 + &data_1392720

if (*result != 0)
    int32_t ebx_1 = *(esi_1 + 4)
    
    if (ebx_1 u<= 0x1ff)
        arg1 = ebx_1 * 0x6c + &data_1382f60
        *(arg1 + 0x28) -= 1
        
        if (*(arg1 + 0x28) s<= 0)
            sub_428300(arg1 + 0x2c)
            arg1 = sub_428710(ebx_1)
            result = edi_1 + 0x1305c70
    
    result, arg1 = sub_428820(arg1, result)
    *(esi_1 + 4) = result

if (*(edi_1 + &data_1305c94) != 0)
    int32_t edi_2 = *esi_1
    
    if (edi_2 u<= 0x1ff)
        arg1 = edi_2 * 0x74 + &data_1374760
        *(arg1 + 0x4c) -= 1
        
        if (*(arg1 + 0x4c) s<= 0)
            sub_4d6c40(arg1 + 0x50, arg1 + 0x54)
            result, arg1 = sub_425320(edi_2)
    
    int32_t var_10_1 = 0
    result = sub_4254a0(result, edi_1 + &data_1305c94, arg1, 0xffffffff, 0, 1, 0, 0)
    *esi_1 = result

*(esi_1 + 0x38) += 1
return result
