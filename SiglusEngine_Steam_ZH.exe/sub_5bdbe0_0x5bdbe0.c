// 函数: sub_5bdbe0
// 地址: 0x5bdbe0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* var_c
char** var_120 = &var_c
int32_t var_8 = 0

if (sub_5bd960(data_bac418, arg2, &var_8, var_120) == 0)
    *(arg1 + 0x7c) = 0
    return arg1

char* var_88 = var_c
void var_10c
__builtin_memcpy(&var_10c, var_8 + 4, 0x80)
int32_t var_10 = 2
__builtin_memcpy(arg1, &var_10c, 0x80)
*(arg1 + (*(arg1 + 0x7c) << 2)) = 0xffffffff.q
*(arg1 + 0x7c) += 2
return arg1
