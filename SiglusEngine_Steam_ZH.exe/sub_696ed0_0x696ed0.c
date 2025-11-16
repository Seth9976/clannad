// 函数: sub_696ed0
// 地址: 0x696ed0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* result = data_bac490
bool cond:0_1

if (arg1 != 0x100)
    if (arg1 != 0x101)
        result.b = 0
        return result
    
    if (*(result + 0x58) != 1 && *(result + 0x970) != 1)
        cond:0_1 = *(result + 0x1d20) == 1
        goto label_696f1d
else if (*(result + 8) != 1 && *(result + 0x510) != 1)
    cond:0_1 = *(result + 0x1c80) == 1
label_696f1d:
    
    if (not(cond:0_1))
        return 0
return 1
