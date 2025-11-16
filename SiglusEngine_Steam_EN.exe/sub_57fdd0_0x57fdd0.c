// 函数: sub_57fdd0
// 地址: 0x57fdd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u> 0x3f)
    return 

data_13701d8 = 0
data_137010c = 1

if (arg2 == 0 || *(arg3 * 0x3920 + 0xf8c784) != 0)
    sub_460dd0(arg3 * 0x3920 + &data_f8d35c)
else
    sub_460d60(arg3 * 0x3920 + &data_f8d35c)

if (*(arg3 * 0x3920 + 0xf89b0c) s< 0 || *(arg3 * 0x3920 + &data_f89b10) s< 0)
    return 

if (*(arg3 * 0x3920 + &data_f8d308) != 0)
    sub_576270(arg3 * 0x3920 + &data_f89afc)

int32_t eax_1 = arg2
*(arg3 * 0x3920 + &data_f8d308) = 0
*(arg3 * 0x3920 + 0xf8d318) = 0
*(arg3 * 0x3920 + 0xf8d31c) = 0
*(arg3 * 0x3920 + 0xf8d320) = 0
*(arg3 * 0x3920 + 0xf8d328) = 0
*(arg3 * 0x3920 + 0xf8d32c) = 0
*(arg3 * 0x3920 + 0xf8d330) = 0

if (eax_1 != 0)
    bool cond:0_1 = *(arg3 * 0x3920 + 0xf8c784) != 0
    *(arg3 * 0x3920 + &data_f8d30c) = 0
    
    if (not(cond:0_1))
        sub_57e8b0(arg3)
        eax_1 = arg2

*(arg3 * 0x3920 + 0xf8c784) = 0
*(arg3 * 0x3920 + &data_f8c794) = 0
int32_t edx

edx = eax_1 == 0 ? 1 : 0

sub_57f370(arg3, edx)

if (*(arg3 * 0x3920 + 0xf8d304) == 0 || arg4 != 0)
    sub_57f7d0(arg3)

*(arg3 * 0x3920 + 0xf8d304) = 0
*(arg3 * 0x2d0 + &data_8fcb18) = 0
*(arg3 * 0x2d0 + &data_8fcb1c) = 0
*(arg3 * 0x3920 + &data_f8d300) = 0
*(arg3 * 0x3920 + 0xf8d310) = 0
*(arg3 * 0x3920 + 0xf8d314) = 0
*(arg3 * 0x3920 + 0xf8d324) = 2
