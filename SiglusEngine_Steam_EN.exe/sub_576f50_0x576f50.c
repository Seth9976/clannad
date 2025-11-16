// 函数: sub_576f50
// 地址: 0x576f50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f)
    return 

int32_t ebx_1 = *(arg1 * 0x2d0 + 0x8fcd80)
int32_t edx_3 = *(arg1 * 0x2d0 + 0x8fcd84)
int32_t edi_1 = *(arg1 * 0x1d4 + &data_1090b6c)
int32_t ebx_2 = *(arg1 * 0x3920 + 0xf89b08)
int32_t edx_4 = *(arg1 * 0x3920 + 0xf89b04)

if (edi_1 == 0xffffffff)
    *(arg1 * 0x3920 + 0xf89d88) = 0
    *(arg1 * 0x3920 + 0xf89d8c) = 0
    *(arg1 * 0x3920 + 0xf89d90) = ebx_1
    *(arg1 * 0x3920 + 0xf89d94) = edx_3
    *(arg1 * 0x3920 + 0xf89d98) = edx_4
    *(arg1 * 0x3920 + 0xf89d9c) = ebx_2
    *(arg1 * 0x3920 + 0xf89da0) = ebx_1
    *(arg1 * 0x3920 + 0xf89da4) = edx_3
    *(arg1 * 0x3920 + 0xf89da8) = edx_4
    *(arg1 * 0x3920 + 0xf89dac) = ebx_2
    *(arg1 * 0x3920 + 0xf89db0) = 0
    *(arg1 * 0x3920 + 0xf89db4) = 0
    return 

int32_t eax_4 = sub_576c30(arg1)

if (*((edi_1 << 2) + &data_12997e4) != 5)
    int32_t var_3c
    sub_576db0(&var_3c, eax_4, edi_1, ebx_1, edx_3, edx_4, ebx_2, &var_3c)
    *(arg1 * 0x3920 + 0xf89d88) = var_3c
    int32_t var_38
    *(arg1 * 0x3920 + 0xf89d8c) = var_38
    int32_t var_34
    *(arg1 * 0x3920 + 0xf89d90) = var_34
    int32_t var_30
    *(arg1 * 0x3920 + 0xf89d94) = var_30
    int32_t var_2c
    *(arg1 * 0x3920 + 0xf89d98) = var_2c
    int32_t var_28
    *(arg1 * 0x3920 + 0xf89d9c) = var_28
    int32_t var_24
    *(arg1 * 0x3920 + 0xf89da0) = var_24
    int32_t var_20
    *(arg1 * 0x3920 + 0xf89da4) = var_20
    int32_t var_1c
    *(arg1 * 0x3920 + 0xf89da8) = var_1c
    int32_t var_18
    *(arg1 * 0x3920 + 0xf89dac) = var_18
else
    bool cond:1_1 = *((edi_1 << 2) + &data_1bffec0) == 0xffffffff
    *(arg1 * 0x3920 + 0xf89d88) = 0
    *(arg1 * 0x3920 + 0xf89d8c) = 0
    *(arg1 * 0x3920 + 0xf89d90) = ebx_1
    *(arg1 * 0x3920 + 0xf89d94) = edx_3
    
    if (cond:1_1 || *((edi_1 << 2) + &data_1bffdc0) == 0xffffffff)
        *(arg1 * 0x3920 + 0xf89d98) = edx_4
        *(arg1 * 0x3920 + 0xf89d9c) = ebx_2
    else
        *(arg1 * 0x3920 + 0xf89d98) = *((edi_1 << 2) + &data_1bffec0)
        *(arg1 * 0x3920 + 0xf89d9c) = *((edi_1 << 2) + &data_1bffdc0)
        edx_4 = *(arg1 * 0x3920 + 0xf89b04)
    
    *(arg1 * 0x3920 + 0xf89da0) = ebx_1
    int32_t eax_8 = *((edi_1 << 2) + &data_1bffec0)
    *(arg1 * 0x3920 + 0xf89da4) = edx_3
    int32_t ecx_3
    
    if (eax_8 != 0xffffffff)
        ecx_3 = *((edi_1 << 2) + &data_1bffdc0)
    
    if (eax_8 == 0xffffffff || ecx_3 == 0xffffffff)
        *(arg1 * 0x3920 + 0xf89da8) = edx_4
        *(arg1 * 0x3920 + 0xf89dac) = ebx_2
    else
        *(arg1 * 0x3920 + 0xf89da8) = eax_8
        *(arg1 * 0x3920 + 0xf89dac) = ecx_3

*(arg1 * 0x3920 + 0xf89db0) = *((eax_4 + (edi_1 << 3)) * 0xff8 + 0x109b7c8)
*(arg1 * 0x3920 + 0xf89db4) = *((eax_4 + (edi_1 << 3)) * 0xff8 + 0x109b7cc)
