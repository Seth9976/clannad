// 函数: sub_5b8d70
// 地址: 0x5b8d70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = 0

if (*(arg1 + 0xc0) != 0)
    int32_t edx_1 = *(arg1 + 0xb0)
    
    if (edx_1 s> 0)
        int32_t* ecx = *(arg1 + 0xb8)
        
        do
            if (*ecx == arg2)
                if (eax != 0xffffffff)
                    return 1
                
                break
            
            eax += 1
            ecx = &ecx[1]
        while (eax s< edx_1)

return 0
