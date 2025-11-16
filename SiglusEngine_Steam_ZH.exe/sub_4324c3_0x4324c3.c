// 函数: sub_4324c3
// 地址: 0x4324c3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg1 + 0x32c)
int32_t ecx = arg2

if (ecx u>= edx)
    return 0

void* eax_2 = *(arg1 + 0x350)

while (true)
    ecx += 1
    
    if (ecx u>= edx)
        break
    
    eax_2 = *(eax_2 + 0x28)

return not.d(eax_2)
