// 函数: sub_40c3f3
// 地址: 0x40c3f3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 + 0xc)
int32_t edx = 0

if (result u<= 0)
label_40c414:
    result.b = 0
else
    int32_t* ecx = *(arg1 + 0x10)
    
    while (*ecx != arg2)
        edx += 1
        ecx = &ecx[1]
        
        if (edx u>= result)
            goto label_40c414
    
    result.b = 1

return result
