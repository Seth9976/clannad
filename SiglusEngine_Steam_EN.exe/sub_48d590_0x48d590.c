// 函数: sub_48d590
// 地址: 0x48d590
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
int32_t* var_c = arg3
LRESULT result = *arg3

if (result s< 0x40)
    result = arg4
    arg3[result * 0x13b + 1] = arg2
    HWND edx = data_1af0a4c
    arg3[result * 0x13b + 2] = result
    WPARAM esi_2 = *arg3
    
    if (edx != 0 && esi_2 u<= 0x3f)
        int32_t var_14_1 = 1
        return sub_4c1300(
            sub_55bf30(esi_2 * 0x4ec + 0x719ba8, edx, esi_2, arg3, esi_2 * 0x4ec + 0x719ba8), 
            data_1af0a4c, esi_2, 0x4f32, 0xffffffff)

return result
