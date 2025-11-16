// 函数: sub_6130f0
// 地址: 0x6130f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg1 + 0x120)
int32_t temp0 = *(arg2 + 0x120)
int32_t ebx

if (edx s< temp0 || (edx == temp0 && *(arg1 + 0x124) s< *(arg2 + 0x124)))
    ebx.b = 1
else
    ebx.b = 0

void arg_8
sub_5b4e70(&arg_8)
void arg_18
sub_5b4e70(&arg_18)
int32_t result
result.b = ebx.b
return result
