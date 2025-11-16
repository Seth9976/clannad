// 函数: sub_432568
// 地址: 0x432568
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx_1 = *(arg1 + 8)
int32_t edx = *(ecx_1 + 0x10)
long double x87_r7_1

if (edx == 0)
    int32_t edx_5
    edx_5.b = *(ecx_1 + 0x18) != 0
    x87_r7_1 = float.t(edx_5)
else if (edx == 1)
    x87_r7_1 = float.t(*(ecx_1 + 0x18))
else if (edx == 2)
    int32_t ecx_2 = *(ecx_1 + 0x18)
    x87_r7_1 = float.t(ecx_2)
    
    if (ecx_2 s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
else
    if (edx != 3)
        return 0x8876086c
    
    x87_r7_1 = fconvert.t(*(ecx_1 + 0x18))

*arg2 = fconvert.s(x87_r7_1)
return 0
