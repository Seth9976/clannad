// 函数: sub_696fb0
// 地址: 0x696fb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* result = data_bac490
bool cond:0_1

if (arg1 != 0x100)
    if (arg1 != 0x101)
        result.b = 0
        return result
    
    if (*(result + 0x5c) != 1 && *(result + 0x974) != 1)
        cond:0_1 = *(result + 0x1d24) == 1
        goto label_696ffd
else if (*(result + 0xc) != 1 && *(result + 0x514) != 1)
    cond:0_1 = *(result + 0x1c84) == 1
label_696ffd:
    
    if (not(cond:0_1))
        return 0
return 1
