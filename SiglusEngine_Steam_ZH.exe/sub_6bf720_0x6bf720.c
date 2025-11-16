// 函数: sub_6bf720
// 地址: 0x6bf720
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* ebx = arg2

if (arg3 == 0 || ebx == 0)
    return 1

if (arg3[0x18] != 0)
    arg3[0x19] = 3
    return 3

int32_t result = arg3[0x19]

if (result != 0)
    return result

int32_t i = arg4

do
    i -= 1
    
    if (arg3[0x19] != 0)
        break
    
    result.b = *ebx
    *(arg3[7] + arg3 + 0x20) = result.b
    arg3[7] += 1
    int32_t temp0_1 = arg3[5]
    arg3[5] += 8
    
    if (temp0_1 == 0xfffffff8)
        int32_t temp1_1 = arg3[6]
        arg3[6] += 1
        
        if (temp1_1 == 0xffffffff)
            arg3[0x19] = 1
    
    if (arg3[7] == 0x40)
        sub_6bf7a0(arg3)
    
    ebx = &ebx[1]
while (i != 0)

return 0
