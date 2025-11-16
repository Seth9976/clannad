// 函数: sub_6c8510
// 地址: 0x6c8510
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_b0
sub_6c93f0(&var_b0)
char edx = *(arg1 + 0x34)
int32_t result = arg2
int32_t edi = *(arg1 + 0x58)
int32_t ebx = *(arg1 + 0x5c)
int32_t result_1 = result
int32_t var_3c = 0
int32_t var_38 = 0
int32_t var_34 = edi
int32_t var_30 = ebx
int32_t var_28 = 2
char var_a0 = 0
bool cond:0

if (edx == 0)
    result = *(arg1 + 0x38)
    cond:0 = result != *(arg1 + 0x3c)
else
    cond:0 = *(arg1 + 0x48) != 0

if (cond:0 == 0)
    return result

int32_t ecx_2

if (edx == 0)
    ecx_2 = *(arg1 + 0x38)
    
    if (ecx_2 == *(arg1 + 0x3c))
        ecx_2 = 0
else
    ecx_2 = *(arg1 + 0x44)

int32_t var_c4_1 = *(arg1 + 0x68)
int32_t var_c8_1 = *(arg1 + 0x64)
return sub_6c95e0(&var_b0, edi, ecx_2, ebx, &var_b0)
