// 函数: sub_5fb810
// 地址: 0x5fb810
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_8_1 = arg1

if (arg3 s>= arg4)
    return 

int32_t eax = arg3 * 0x320
int32_t i_1 = arg4 - arg3
arg3 = eax
int32_t i

do
    int32_t eax_1 = *arg2
    
    if (eax_1 == arg2[1])
        eax_1 = 0
    
    __builtin_memcpy(*(arg1 + 0xa4) + eax + 0xa0, arg2[3] + eax_1, 0x280)
    arg2[3] += 0x280
    eax = arg3 + 0x320
    arg1 = var_8_1
    arg3 = eax
    i = i_1
    i_1 -= 1
while (i != 1)
