// 函数: sub_5dac30
// 地址: 0x5dac30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* edx = *arg2

if (edx == arg2[1])
    edx = nullptr

*arg1 = *(edx + arg2[3])
arg2[3] += 4
sub_5daca0(arg1)
int32_t* ecx = *arg2

if (ecx == arg2[1])
    ecx = nullptr

arg1[2] = *(ecx + arg2[3])
arg2[3] += 4
int32_t ecx_1 = *arg2
int32_t* edx_1 = arg2[3]

if (ecx_1 == arg2[1])
    ecx_1 = 0

arg1[3] = *(edx_1 + ecx_1)
int32_t result = *(edx_1 + ecx_1 + 4)
arg1[4] = result
arg2[3] += 8
return result
