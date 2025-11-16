// 函数: sub_5b8e40
// 地址: 0x5b8e40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0xc0) == 0)
    return 0xffffffff

int32_t edi = *(arg1 + 0xb4)

if (edi s> 0)
    int32_t* eax_2 = *(arg1 + 0xbc)
    int32_t ecx = 0
    
    do
        if (*eax_2 == arg2)
            if (ecx == 0xffffffff || *(*(arg1 + 0xbc) + (ecx << 3) + 4) != 0x56)
                break
            
            int32_t ebx = *(arg1 + 0xb0)
            int32_t edx_2 = 0
            
            if (ebx s> 0)
                int32_t* eax_6 = *(arg1 + 0xc0) + (ecx << 2)
                
                do
                    if (*eax_6 == arg3)
                        return *(*(arg1 + 0xb8) + (edx_2 << 2))
                    
                    edx_2 += 1
                    eax_6 = &eax_6[edi]
                while (edx_2 s< ebx)
            
            return 0xffffffff
        
        ecx += 1
        eax_2 = &eax_2[2]
    while (ecx s< edi)

return 0xffffffff
