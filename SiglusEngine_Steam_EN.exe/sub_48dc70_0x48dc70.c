// 函数: sub_48dc70
// 地址: 0x48dc70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
int32_t var_8 = 0

if (arg2 s> 0)
    int32_t edx_4
    
    do
        WPARAM ecx = *arg3
        
        if (ecx s<= 0)
            break
        
        int32_t* ecx_1 = sub_55c680(ecx)
        *arg3 -= 1
        HWND edx = data_1af0a4c
        WPARAM edi_1 = *arg3
        
        if (edx != 0 && edi_1 u<= 0x3f)
            int32_t var_18_1 = 1
            sub_4c1300(
                sub_55bf30(edi_1 * 0x4ec + 0x719ba8, edx, edi_1, ecx_1, edi_1 * 0x4ec + 0x719ba8), 
                data_1af0a4c, edi_1, 0x4f32, 0xffffffff)
        
        *arg3
        *arg4 = arg3[*arg3 * 0x13b + 4]
        edx_4 = var_8 + 1
        var_8 = edx_4
        *arg5 = arg3[*arg3 * 0x13b + 5]
        result = 1
    while (edx_4 s< arg2)

return result
