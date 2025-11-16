// 函数: sub_40c352
// 地址: 0x40c352
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 + 0xc)
int32_t edx = 0
int32_t esi
int32_t var_8 = esi

if (result u<= 0)
label_40c374:
    result.b = 0
else
    int16_t* ecx = *(arg1 + 0x10)
    
    while (true)
        esi.w = *ecx
        
        if (esi.w == arg2)
            result.b = 1
            break
        
        edx += 1
        ecx = &ecx[1]
        
        if (edx u>= result)
            goto label_40c374

return result
