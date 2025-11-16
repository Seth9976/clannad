// 函数: sub_42a6d0
// 地址: 0x42a6d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

LRESULT result = data_91e8fc
data_13926ac = 0
data_13926a8 = 0xffffffff

if (result s< 0x80)
    int32_t* ecx_2 = sub_4d1c30(result, arg1, result * 0x2d4 + &data_907efc, 0x2d4)
    HWND edx_1 = data_1af0a48
    WPARAM esi_1 = data_91e8fc
    
    if (edx_1 != 0 && esi_1 u<= 0x7f)
        void* var_8_1 = esi_1 * 0x2d4 + &data_907efc
        result = sub_4c1300(sub_5655f0(esi_1 * 0x2d4 + &data_907efc, edx_1, esi_1, ecx_2), 
            data_1af0a48, esi_1, 0x4f32, 0xffffffff)
        esi_1 = data_91e8fc
    
    data_91e8fc = esi_1 + 1

return result
