// 函数: sub_55f9e0
// 地址: 0x55f9e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

WPARAM result
int32_t ecx_1
result, ecx_1 = sub_4c1810(data_1af0a3c, 0x4f32)

if (result != 0xffffffff)
    int32_t edx_1 = data_20c71e4
    
    if (edx_1 s>= 0x100)
        result += data_20c71e0
        
        if (result s>= 0x100)
            result -= 0x100
        
        goto label_55fa25
    
    ecx_1 = 0x100 - edx_1
    
    if (result s>= ecx_1)
        result -= ecx_1
    label_55fa25:
        
        if (result != 0xffffffff)
            int32_t eax = result << 5
            int32_t var_8_1 = ecx_1
            return sub_4a5e00(*(eax + 0x20c71ec), *(eax + 0x20c71f0))

return result
