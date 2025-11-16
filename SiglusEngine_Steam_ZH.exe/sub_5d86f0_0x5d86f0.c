// 函数: sub_5d86f0
// 地址: 0x5d86f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *(arg1 + 0x1e0)

if (ecx s< 0 || (*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0 s<= ecx)
    return 

void* ecx_2 = ecx * 0x1c0 + *(arg1 + 0x228)
bool cond:0_1 = *(data_bac510 + 0x10bd8) != 1
*(ecx_2 + 0x178) = 1

if (not(cond:0_1))
    *(ecx_2 + 0x170) = *(ecx_2 + 0xe4)
    *(ecx_2 + 0x174) = 0
    return 

*(ecx_2 + 0x170) = *(ecx_2 + 0xe0)
*(ecx_2 + 0x174) = 0
