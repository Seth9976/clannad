// 函数: sub_468e63
// 地址: 0x468e63
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = *(arg1 + 0x4c) == 0
*(arg1 + 0x54) = arg2
int32_t result = arg3
*(arg1 + 0x50) = result

if (not(cond:0))
    *(arg1 + 0x4c) = 0
    sub_46693e(arg1, "It's an error to set both read_data_fn and write_data_fn in the ")
    result = sub_46693e(arg1, "same structure.  Resetting write_data_fn to NULL.")

*(arg1 + 0x120) = 0
return result
