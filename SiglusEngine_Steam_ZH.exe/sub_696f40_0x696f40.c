// 函数: sub_696f40
// 地址: 0x696f40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* result = data_bac490
bool cond:0_1

if (arg1 != 0x100)
    if (arg1 != 0x101)
        result.b = 0
        return result
    
    if (*(result + 0x58) == 0 && *(result + 0x970) == 0)
        cond:0_1 = *(result + 0x1d20) != 0
        goto label_696f8d
else if (*(result + 8) == 0 && *(result + 0x510) == 0)
    cond:0_1 = *(result + 0x1c80) != 0
label_696f8d:
    
    if (not(cond:0_1))
        return 1
return 0
