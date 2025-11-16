// 函数: sub_46bf34
// 地址: 0x46bf34
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t edx

if (sub_46b56e(arg1, arg2) != 0 && *(arg1 + 0x14) == *(arg2 + 0x14)
        && *(arg1 + 0x18) == *(arg2 + 0x18) && *(arg1 + 0x1c) == *(arg2 + 0x1c)
        && *(arg1 + 0x28) == *(arg2 + 0x28) && sub_46b727(arg2 + 0x30, edx, arg1 + 0x30) != 0
        && sub_46b589(*(arg1 + 0x10), *(arg2 + 0x10)) != 0
        && sub_46b589(*(arg1 + 0x20), *(arg2 + 0x20)) != 0
        && sub_46b589(*(arg1 + 0x24), *(arg2 + 0x24)) != 0)
    return 1

return 0
