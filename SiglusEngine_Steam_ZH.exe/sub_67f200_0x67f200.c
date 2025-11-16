// 函数: sub_67f200
// 地址: 0x67f200
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = *arg1
void* edi = *arg2
int32_t* eax_2 = 0x20

while (true)
    int32_t ecx_1 = *(eax_2 + esi)
    int32_t edx_1 = *(eax_2 + edi)
    
    if (ecx_1 s>= edx_1)
        if (ecx_1 s> edx_1)
            break
        
        eax_2 = &eax_2[1]
        
        if (eax_2 s< 0x34)
            continue
        else if (*(esi + 0x34) s>= *(edi + 0x34))
            break
    
    return 1

return 0
