// 函数: sub_697020
// 地址: 0x697020
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* result = data_bac490
bool cond:0_1

if (arg1 != 0x100)
    if (arg1 != 0x101)
        result.b = 0
        return result
    
    if (*(result + 0x60) != 1 && *(result + 0x978) != 1)
        cond:0_1 = *(result + 0x1d28) == 1
        goto label_69706d
else if (*(result + 0x10) != 1 && *(result + 0x518) != 1)
    cond:0_1 = *(result + 0x1c88) == 1
label_69706d:
    
    if (not(cond:0_1))
        return 0
return 1
