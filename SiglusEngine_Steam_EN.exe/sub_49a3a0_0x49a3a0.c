// 函数: sub_49a3a0
// 地址: 0x49a3a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u> 0x3ff || *(arg3 * 0x2c + &data_8c52dc) == 0 || *(arg3 * 0x2c + &data_8c52b4) != 0
        || *(arg3 * 0x34 + &data_f2e6f8) == 0)
    return 

bool cond:0_1 = *(arg3 * 0x34 + 0xf2e704) != 0
BOOL var_c = 0
int32_t var_8 = 0
void var_18
void var_14
void var_10

if (not(cond:0_1))
    sub_427180(&var_8, *(arg3 * 0x34 + 0xf2e700), *(arg3 * 0x34 + &data_f2e6fc), &var_8, &var_c, 0, 
        nullptr, &var_18, &var_14, &var_10, "SERIALPDT_EXPAND_ONE", 1, arg3 * 0x2c + &data_8c52b8)
    *arg2 = var_8
    *arg4 = var_c
    return 

sub_4cf1e0(&var_c, &var_8, *(arg3 * 0x34 + &data_f2e6fc), &var_c, &var_18, &var_14, &var_10, 1)
*arg2 = var_8
*arg4 = var_c
