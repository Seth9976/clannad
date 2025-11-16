// 函数: sub_4822e8
// 地址: 0x4822e8
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

*(arg1[3] + (*arg1 << 2)) = fconvert.s(fconvert.t(*arg2))
*arg1 += 1
return *arg1
