// 函数: sub_9aad80
// 地址: 0x9aad80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_1 = *(arg1 + 0x1c)
int32_t* result = _malloc(0x60)
*result = sub_742fa0(arg2, 8)
result[1] = sub_742fa0(arg2, 0x10)
result[2] = sub_742fa0(arg2, 0x10)
result[3] = sub_742fa0(arg2, 6)
result[4] = sub_742fa0(arg2, 8)
int32_t eax_8 = sub_742fa0(arg2, 4) + 1
bool cond:0 = *result s< 1
result[5] = eax_8

if (not(cond:0) && result[1] s>= 1 && result[2] s>= 1 && eax_8 s>= 1)
    int32_t esi_1 = 0
    
    if (eax_8 s<= 0)
        return result
    
    void* edi_1 = &result[6]
    
    while (true)
        int32_t eax_9 = sub_742fa0(arg2, 8)
        *edi_1 = eax_9
        
        if (eax_9 s< 0)
            break
        
        if (eax_9 s>= *(eax_1 + 0x18))
            break
        
        int32_t* eax_10 = *(eax_1 + (eax_9 << 2) + 0x720)
        
        if (eax_10[3] == 0)
            break
        
        if (*eax_10 s< 1)
            break
        
        esi_1 += 1
        edi_1 += 4
        
        if (esi_1 s>= result[5])
            return result

_memset(result, 0, 0x60)
_free(result)
return 0
