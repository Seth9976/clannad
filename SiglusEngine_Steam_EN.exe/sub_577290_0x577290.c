// 函数: sub_577290
// 地址: 0x577290
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f || *(arg1 * 0x3920 + 0xf89b40) == 0)
    return 

int32_t edx_1 = *(arg1 * 0x2d0 + 0x8fcd80)
int32_t eax_2 = *(arg1 * 0x2d0 + 0x8fcd84)
int32_t var_18_1 = *(arg1 * 0x3920 + 0xf89b30)
int32_t var_30_1 = edx_1
void* var_1c_1 = *(arg1 * 0x3920 + 0xf89b34)
int32_t eax_5 = sub_576c30(arg1)
int32_t ebx_1 = *(arg1 * 0x1d4 + &data_1090b58)
int32_t var_2c_1
int32_t var_28_1
int32_t var_24_1
int32_t var_20_1
int32_t var_14_1
int32_t var_c_1
int32_t var_8_1
int32_t eax_6
int32_t ecx_1

if (ebx_1 == 0xffffffff)
    eax_6 = *(arg1 * 0x3920 + 0xf89b30)
    var_14_1 = eax_2
    var_2c_1 = eax_2
    ecx_1 = edx_1
    var_20_1 = 0
    var_24_1 = 0
    var_8_1 = edx_1
    var_c_1 = *(arg1 * 0x3920 + 0xf89b34)
    var_28_1 = edx_1
else if (*((ebx_1 << 2) + &data_12997e4) != 5)
    int32_t var_58
    sub_576db0(eax_5, eax_5, ebx_1, edx_1, eax_2, *(arg1 * 0x3920 + 0xf89b30), 
        *(arg1 * 0x3920 + 0xf89b34), &var_58)
    void* var_34
    var_1c_1 = var_34
    int32_t var_3c
    var_2c_1 = var_3c
    int32_t var_40
    var_28_1 = var_40
    int32_t var_38
    var_18_1 = var_38
    int32_t var_4c
    var_14_1 = var_4c
    int32_t var_50
    ecx_1 = var_50
    int32_t var_54
    var_24_1 = var_54
    int32_t var_44
    var_c_1 = var_44
    int32_t var_48
    eax_6 = var_48
    var_8_1 = ecx_1
    var_20_1 = var_58
else
    var_20_1 = 0
    var_24_1 = 0
    var_8_1 = edx_1
    var_14_1 = eax_2
    int32_t eax_7
    
    if (*((ebx_1 << 2) + &data_1bffec0) != 0xffffffff)
        eax_7 = *((ebx_1 << 2) + &data_1bffdc0)
        var_c_1 = eax_7
    
    if (*((ebx_1 << 2) + &data_1bffec0) == 0xffffffff || eax_7 == 0xffffffff)
        eax_6 = *(arg1 * 0x3920 + 0xf89b30)
        var_c_1 = *(arg1 * 0x3920 + 0xf89b34)
        edx_1 = var_30_1
    else
        eax_6 = *((ebx_1 << 2) + &data_1bffec0)
    
    var_2c_1 = eax_2
    int32_t ecx_3 = *((ebx_1 << 2) + &data_1bffec0)
    var_28_1 = edx_1
    void* edx_3
    
    if (ecx_3 != 0xffffffff)
        edx_3 = *((ebx_1 << 2) + &data_1bffdc0)
    
    if (ecx_3 == 0xffffffff || edx_3 == 0xffffffff)
        var_18_1 = *(arg1 * 0x3920 + 0xf89b30)
        var_1c_1 = *(arg1 * 0x3920 + 0xf89b34)
        ecx_1 = var_8_1
    else
        var_18_1 = ecx_3
        ecx_1 = var_8_1
        var_1c_1 = edx_3

int32_t ecx_11 = ecx_1 - *(arg1 * 0x3920 + 0xf89d90) - *(arg1 * 0x1d4 + 0x1090b38)
int32_t edx_11 = var_c_1 - *(arg1 * 0x3920 + 0xf89d94) - *(arg1 * 0x1d4 + 0x1090b3c) + var_14_1
bool cond:1_1 = *(arg1 * 0x1d4 + 0x1090b54) == 0
*(arg1 * 0x3920 + 0xf89f8c) = var_c_1
int32_t ebx_4 = *(arg1 * 0x1d4 + &data_1090b58)
*(arg1 * 0x3920 + 0xf89f88) = eax_6

if (not(cond:1_1))
    int32_t edi_3 = *(arg1 * 0x3920 + 0xf89f90)
    
    if (eax_6 s> edi_3 && (ebx_4 == 0xffffffff || *((ebx_4 << 2) + &data_12997e4) != 5))
        ecx_11 += eax_6 - edi_3

*(arg1 * 0x3920 + 0xf89f70) = var_30_1 - ecx_11
*(arg1 * 0x3920 + 0xf89f74) = eax_2 - edx_11
*(arg1 * 0x3920 + 0xf89f78) = var_20_1
*(arg1 * 0x3920 + 0xf89f7c) = var_24_1
*(arg1 * 0x3920 + 0xf89f80) = var_8_1 - ecx_11
*(arg1 * 0x3920 + 0xf89f84) = var_14_1 - edx_11
*(arg1 * 0x3920 + 0xf89f98) = var_28_1 - ecx_11
*(arg1 * 0x3920 + 0xf89f9c) = var_2c_1 - edx_11
*(arg1 * 0x3920 + 0xf89fa0) = var_18_1
*(arg1 * 0x3920 + 0xf89fa4) = var_1c_1
