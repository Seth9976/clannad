// 函数: sub_442c74
// 地址: 0x442c74
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = *arg1
int32_t ecx = *(eax + 4)
int32_t edi
int32_t var_10 = edi

if (ecx s>= 0)
    if (ecx s<= 1)
        *arg1 = eax + 0x1c
        return 1
    
    if (ecx s> 3 && ecx != 4 && ecx == 5)
        int32_t edi_1 = *(eax + 0x14)
        int32_t ebx_1 = 0
        *arg1 = eax + 0x18
        
        if (edi_1 u> 0)
            while (true)
                if (sub_442c74(arg1) == 0)
                    return 0
                
                ebx_1 += 1
                
                if (ebx_1 u>= edi_1)
                    return 1
        
        return 1

return 0
