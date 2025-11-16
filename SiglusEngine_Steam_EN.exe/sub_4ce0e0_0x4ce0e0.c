// 函数: sub_4ce0e0
// 地址: 0x4ce0e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = sx.d(*arg3)
int32_t eax = 0
void* ecx = &arg3[-1]
int32_t esi = 0

while (true)
    if (ecx u>= arg2 && ecx u< arg4)
        int32_t edx = sx.d(*ecx)
        
        if (edx s>= edi)
            if (edx s> edi)
                eax += 1
                
                if (eax s>= 3)
                    break
            
            goto label_4ce112
        
        eax -= 1
        
        if (eax s> 0xfffffffd)
        label_4ce112:
            esi += 1
            ecx -= 2
            
            if (esi s< 0xa)
                continue
    
    if (eax s>= 3)
        break
    
    int32_t ecx_1
    ecx_1.b = eax s> 0xfffffffd
    return ecx_1 - 1

return 1
