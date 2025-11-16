// 函数: sub_71d350
// 地址: 0x71d350
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1[3] = arg2
sub_5a0990(arg1, arg2 + 2)
int32_t ecx = arg1[3]
int32_t i = 0
arg1[4] = ecx
arg1[5] = ecx + 1

if (ecx != 0xfffffffe)
    int32_t edx_1 = 0
    
    do
        edx_1 += 0xc
        i += 1
        *(edx_1 + *arg1 - 0xc) = arg1[5]
        *(edx_1 + *arg1 - 8) = arg1[5]
        *(edx_1 + *arg1 - 4) = arg1[5]
    while (i u< arg1[3] + 2)

**arg1 = arg1[4]
*(*arg1 + arg1[4] * 0xc) = 0
int32_t result = *arg1
*(result + arg1[4] * 0xc + 8) = 0
return result
