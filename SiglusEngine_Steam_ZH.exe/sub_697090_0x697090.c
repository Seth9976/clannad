// 函数: sub_697090
// 地址: 0x697090
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* result = data_bac490
bool cond:0_1

if (arg1 != 0x100)
    if (arg1 != 0x101)
        result.b = 0
        return result
    
    if (*(result + 0x64) != 2 && *(result + 0x97c) != 2)
        cond:0_1 = *(result + 0x1d2c) == 2
        goto label_6970dd
else if (*(result + 0x14) != 2 && *(result + 0x51c) != 2)
    cond:0_1 = *(result + 0x1c8c) == 2
label_6970dd:
    
    if (not(cond:0_1))
        return 0
return 1
