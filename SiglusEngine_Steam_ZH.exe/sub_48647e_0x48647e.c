// 函数: sub_48647e
// 地址: 0x48647e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[1]

if (*arg1 == eax)
    int32_t ecx = arg1[2]
    
    if (eax u<= ecx)
        eax = ecx
    
    arg1[1] += eax
    int32_t result = _realloc(arg1[3], arg1[1] << 2)
    
    if (result == 0)
        return result
    
    arg1[3] = result

*(arg1[3] + (*arg1 << 2)) = *arg2
*arg1 += 1
return *arg1
