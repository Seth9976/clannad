// 函数: sub_40cac1
// 地址: 0x40cac1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg4
int32_t i = 0

if (*(arg1 + 0x23c) u> 0)
    do
        *(eax + (i << 2)) = 0xffffffff
        i += 1
    while (i u< *(arg1 + 0x23c))

int32_t i_1 = 0

if (*(arg1 + 0x264) u> 0)
    do
        *(arg3 + (i_1 << 2)) = i_1
        i_1 += 1
    while (i_1 u< *(arg1 + 0x264))

int32_t i_2 = 0
int32_t edi
int32_t var_1c = edi
int32_t i_5 = 0

if (*(arg1 + 0x264) u> 0)
    int32_t var_8_1 = 0
    
    do
        int32_t* edx_1 = *(arg1 + 0x24c) + var_8_1
        
        if (*edx_1 == 0xffffffff)
            *(arg2 + (i_2 << 2)) = 0xffffffff
        else
            *(arg2 + (i_2 << 2)) = i_5
            *(arg3 + (i_5 << 2)) = i_2
            i_5 += 1
            eax = arg4
            *(eax + (*edx_1 << 2)) = 1
            *(eax + (edx_1[1] << 2)) = 1
            *(eax + (edx_1[2] << 2)) = 1
        
        var_8_1 += 0xc
        i_2 += 1
    while (i_2 u< *(arg1 + 0x264))

int32_t i_3 = i_5

if (i_5 u< *(arg1 + 0x264))
    do
        *(arg3 + (i_3 << 2)) = 0xffffffff
        i_3 += 1
    while (i_3 u< *(arg1 + 0x264))

int32_t esi_3 = 0
int32_t i_4 = 0

if (*(arg1 + 0x23c) u> 0)
    do
        if (*(eax + (i_4 << 2)) != 0xffffffff)
            *(eax + (i_4 << 2)) = esi_3
            esi_3 += 1
        
        i_4 += 1
    while (i_4 u< *(arg1 + 0x23c))

if (i_5 != 0 && esi_3 != 0)
    return 0

return 0x88760b5a
