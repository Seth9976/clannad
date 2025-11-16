// 函数: sub_57b260
// 地址: 0x57b260
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* result

for (void* i = &data_13931a0; i s< &data_13932a0; i += 4)
    void* esi_1 = *i
    result = &(&data_1090ae4)[esi_1 * 0x75]
    int32_t* result_1 = result
    
    if ((&data_1090ae4)[esi_1 * 0x75] != 2 && esi_1 u<= 0x3f && *result != 2 && data_131256c == 0
            && data_13125b4 == 0 && data_1311174 == 0 && *(esi_1 * 0x2d0 + &data_8fcd48) != 0
            && *(esi_1 * 0x3920 + &data_f89ba4) != 0 && *(esi_1 * 0x3920 + 0xf89ba0) != 0
            && (data_1311178 == 0 || *(esi_1 + 0x1b8c220) == 0))
        result = sub_57b0b0(result, esi_1 * 0x2d0 + &data_8fcadc, esi_1, 
            esi_1 * 0x3920 + &data_f89afc, result)
        
        if (data_12bda8c == 0)
            result = sub_57b1c0(result, esi_1 * 0x2d0 + &data_8fcadc, esi_1, 
                esi_1 * 0x3920 + &data_f89afc, result_1)

return result
