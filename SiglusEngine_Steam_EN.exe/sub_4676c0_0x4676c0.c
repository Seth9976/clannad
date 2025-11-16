// 函数: sub_4676c0
// 地址: 0x4676c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_14 = *(arg3 + 0x10)
int32_t var_10 = *(arg3 + 0x14)
int32_t var_20 = *(arg3 + 4)
int32_t var_1c = *(arg3 + 8)
int32_t var_18 = *(arg3 + 0xc)
int32_t esi = *(arg3 + 0x18)
int32_t var_c = esi
int32_t* eax_7

switch (*(arg3 + 0x1c) + 1)
    case 0
        eax_7 = data_131d2c8
    case 2
        eax_7 = 1
    case 3
        eax_7 = 2
    default
        eax_7 = nullptr

if (esi s< 0 || esi s>= 0x100)
    eax_7 = nullptr

return sub_4a50d0(eax_7, arg2, &var_20, arg4, nullptr, arg5, arg6, arg7, arg8, 1, eax_7, nullptr)
