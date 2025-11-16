// 函数: sub_578010
// 地址: 0x578010
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_1 = *(arg1 + 0x294) + *(arg1 + 0x2c58)
int32_t ecx_1 = *(arg1 + 0x298) + *(arg1 + 0x2c5c)
*(arg1 + 0xc8) = *(arg1 + 0x29c) - 1 + esi_1
int32_t eax_4 = *(arg1 + 0x2a0) - 1
*(arg1 + 0xc4) = ecx_1
int32_t eax_5 = eax_4 + ecx_1
*(arg1 + 0xc0) = esi_1
*(arg1 + 0xcc) = eax_5

if (sub_4d1be0(eax_5, arg1 + 0x5c, arg1 + 0xe8, 0x8c) != 0)
    int32_t edx_1 = *(arg1 + 0x150)
    int32_t var_10_1 = edx_1
    int32_t var_14_1 = *(arg1 + 0x154)
    sub_494c90(*(arg1 + 0x14c), edx_1)
    int32_t edx_2 = *(arg1 + 0x158)
    int32_t var_18_1 = edx_2
    int32_t var_1c_1 = *(arg1 + 0x154)
    sub_494c90(*(arg1 + 0x14c), edx_2)
    int32_t var_20_1 = *(arg1 + 0x158)
    int32_t ecx_5 = *(arg1 + 0x14c)
    int32_t var_24_1 = ecx_5
    sub_494c90(ecx_5, *(arg1 + 0x150))
    int32_t var_28_1 = *(arg1 + 0x158)
    int32_t ecx_6 = *(arg1 + 0x154)
    int32_t var_2c_1 = ecx_6
    sub_494c90(ecx_6, *(arg1 + 0x150))
    int32_t edx_5 = *(arg1 + 0xc4)
    int32_t var_30_1 = edx_5
    int32_t var_34_1 = *(arg1 + 0xc8)
    sub_494c90(*(arg1 + 0xc0), edx_5)
    int32_t edx_6 = *(arg1 + 0xcc)
    int32_t var_38_1 = edx_6
    int32_t var_3c_1 = *(arg1 + 0xc8)
    sub_494c90(*(arg1 + 0xc0), edx_6)
    int32_t var_40_1 = *(arg1 + 0xcc)
    int32_t ecx_9 = *(arg1 + 0xc0)
    int32_t var_44_1 = ecx_9
    sub_494c90(ecx_9, *(arg1 + 0xc4))
    int32_t var_48_1 = *(arg1 + 0xcc)
    int32_t ecx_10 = *(arg1 + 0xc8)
    int32_t var_4c_1 = ecx_10
    sub_494c90(ecx_10, *(arg1 + 0xc4))

int32_t edx_10 = *(arg1 + 0x484) + *(arg1 + 0x2c58)
int32_t ecx_12 = *(arg1 + 0x488) + *(arg1 + 0x2c5c)
*(arg1 + 0x1e0) = *(arg1 + 0x48c) - 1 + edx_10
int32_t eax_11 = *(arg1 + 0x490) - 1
*(arg1 + 0x1d8) = edx_10
int32_t eax_12 = eax_11 + ecx_12
*(arg1 + 0x1dc) = ecx_12
*(arg1 + 0x1e4) = eax_12
int32_t result = sub_4d1be0(eax_12, arg1 + 0x174, arg1 + 0x200, 0x8c)

if (result == 0)
    return result

int32_t edx_12 = *(arg1 + 0x268)
int32_t var_10_2 = edx_12
int32_t var_14_2 = *(arg1 + 0x26c)
sub_494c90(*(arg1 + 0x264), edx_12)
int32_t edx_13 = *(arg1 + 0x270)
int32_t var_18_2 = edx_13
int32_t var_1c_2 = *(arg1 + 0x26c)
sub_494c90(*(arg1 + 0x264), edx_13)
int32_t var_20_2 = *(arg1 + 0x270)
int32_t ecx_16 = *(arg1 + 0x264)
int32_t var_24_2 = ecx_16
sub_494c90(ecx_16, *(arg1 + 0x268))
int32_t var_28_2 = *(arg1 + 0x270)
int32_t ecx_17 = *(arg1 + 0x26c)
int32_t var_2c_2 = ecx_17
sub_494c90(ecx_17, *(arg1 + 0x268))
int32_t edx_16 = *(arg1 + 0x1dc)
int32_t var_30_2 = edx_16
int32_t var_34_2 = *(arg1 + 0x1e0)
sub_494c90(*(arg1 + 0x1d8), edx_16)
int32_t edx_17 = *(arg1 + 0x1e4)
int32_t var_38_2 = edx_17
int32_t var_3c_2 = *(arg1 + 0x1e0)
sub_494c90(*(arg1 + 0x1d8), edx_17)
int32_t var_40_2 = *(arg1 + 0x1e4)
int32_t ecx_20 = *(arg1 + 0x1d8)
int32_t var_44_2 = ecx_20
sub_494c90(ecx_20, *(arg1 + 0x1dc))
int32_t var_48_2 = *(arg1 + 0x1e4)
int32_t ecx_21 = *(arg1 + 0x1e0)
int32_t var_4c_2 = ecx_21
return sub_494c90(ecx_21, *(arg1 + 0x1dc))
