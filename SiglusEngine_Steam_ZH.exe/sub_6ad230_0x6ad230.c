// 函数: sub_6ad230
// 地址: 0x6ad230
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = 0
int32_t edi = sx.d(*arg1)
void* ecx_1 = &arg1[-1]
int32_t esi = 0

while (true)
    if (ecx_1 u>= arg2 && ecx_1 u< arg3)
        int32_t edx_1 = sx.d(*ecx_1)
        
        if (edx_1 s>= edi)
            if (edx_1 s> edi)
                eax += 1
                
                if (eax s>= 3)
                    break
            
            goto label_6ad266
        
        eax -= 1
        
        if (eax s> 0xfffffffd)
        label_6ad266:
            esi += 1
            ecx_1 -= 2
            
            if (esi s< 0xa)
                continue
    
    if (eax s>= 3)
        break
    
    int32_t ecx_2
    ecx_2.b = eax s> 0xfffffffd
    return ecx_2 - 1

return 1
