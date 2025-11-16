// 函数: sub_678440
// 地址: 0x678440
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result

if (*arg1 == *arg2 && arg1[1] == arg2[1] && arg1[2] == arg2[2] && arg1[3] == arg2[3]
        && arg1[4] == arg2[4] && arg1[5] == arg2[5] && arg1[6] == arg2[6] && arg1[7] == arg2[7]
        && arg1[8] == arg2[8] && arg1[9] == arg2[9])
    void* ecx_1 = &arg2[0x10a]
    void* eax = &arg1[0x10a]
    
    while (true)
        int32_t* edx
        edx.w = *eax
        int16_t temp1_1 = *ecx_1
        bool c_1 = edx.w u< temp1_1
        
        if (edx.w == temp1_1)
            if (edx.w == 0)
                result = 0
                break
            
            edx.w = *(eax + 2)
            int16_t temp2_1 = *(ecx_1 + 2)
            c_1 = edx.w u< temp2_1
            
            if (edx.w == temp2_1)
                eax += 4
                ecx_1 += 4
                
                if (edx.w != 0)
                    continue
                
                result = 0
                break
        
        result = sbb.d(eax, eax, c_1) | 1
        break
    
    if (result == 0)
        result.b = 0
        return result

result.b = 1
return result
