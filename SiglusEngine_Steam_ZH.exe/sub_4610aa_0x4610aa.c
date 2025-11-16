// 函数: sub_4610aa
// 地址: 0x4610aa
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x40)

if (eax == 0)
    int32_t var_8_2
    __builtin_strncpy(&var_8_2, "xof ", 4)
    sub_4822c9(arg1)
    int32_t var_8_3
    __builtin_strncpy(&var_8_3, "0303", 4)
    sub_4822c9(arg1)
    int32_t var_8_4
    __builtin_strncpy(&var_8_4, "bin ", 4)
    sub_4822c9(arg1)
    int32_t var_8_5
    __builtin_strncpy(&var_8_5, "0032", 4)
    sub_4822c9(arg1)
else if (eax == 1)
    char const* const var_8_1 = "0303"
    sub_4605e0(arg1, "xof %stxt ")
    sub_460594(arg1, "0032")

return 0
