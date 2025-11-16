// 函数: sub_40b60c
// 地址: 0x40b60c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 0

uint32_t ecx_1
ecx_1.w = *arg1
char edx = 0

if (ecx_1.w == 0xff)
    return 1

void* eax_1 = &arg1[1]

while (true)
    if (ecx_1.w != 0)
        return 0
    
    if (*(eax_1 + 3) != ecx_1.b)
        ecx_1.w = zx.w(edx)
        
        if (*eax_1 u< ecx_1.w)
            return 0
        
        edx = *(zx.d(*(eax_1 + 2)) + 0xab6978) + *eax_1
    
    ecx_1.w = *(eax_1 + 6)
    eax_1 += 8
    
    if (ecx_1.w == 0xff)
        return 1
