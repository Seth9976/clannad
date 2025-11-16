// 函数: sub_5de760
// 地址: 0x5de760
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = *(data_bac510 + 0x10bd8) != 1
*(arg1 + 0x178) = 1
int32_t result

if (cond:0)
    result = *(arg1 + 0xe0)
else
    result = *(arg1 + 0xe4)

*(arg1 + 0x170) = result
result.w = arg2
*(arg1 + 0x174) = result.w
return result
