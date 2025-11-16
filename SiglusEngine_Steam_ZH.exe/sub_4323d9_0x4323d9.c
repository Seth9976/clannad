// 函数: sub_4323d9
// 地址: 0x4323d9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg1 + 0x324)
int32_t ecx = arg2

if (ecx u>= edx)
    return 0

void* eax_2 = *(arg1 + 0x348)

while (true)
    ecx += 1
    
    if (ecx u>= edx)
        break
    
    eax_2 = *(eax_2 + 0x34)

return not.d(eax_2)
