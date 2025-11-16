// 函数: sub_6873f0
// 地址: 0x6873f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = *arg1
void* result = &arg1[1]

while (i != 0xf423f)
    if (i - 0x7594 u> 5)
        result.b = 0
        return result
    
    switch (i)
        case 0x7594
            *arg3 = *result
        case 0x7595
            arg3[1] = *result
        case 0x7596
            arg3[2] = *result
        case 0x7597
            arg3[5] = *result
        case 0x7598
            int32_t ecx_4
            ecx_4.b = *result
            arg3[4].b = ecx_4.b
        case 0x7599
            arg3[3] = *result
    
    i = *(result + 4)
    result += 8

*arg4 += arg3[5]
arg3[6] = *arg4
*arg2 = result
result.b = 1
return result
