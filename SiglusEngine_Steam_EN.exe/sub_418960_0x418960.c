// 函数: sub_418960
// 地址: 0x418960
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t esi = 0
int32_t* eax = &arg2[1]

while (true)
    int32_t ecx = *(arg1 - arg2 + eax)
    int32_t edx = *eax
    
    if (ecx s> edx)
        break
    
    if (ecx s< edx)
        return 0xffffffff
    
    esi += 1
    eax = &eax[1]
    
    if (esi s>= 5)
        int32_t edx_1 = *arg2
        int32_t ecx_2 = *arg1
        
        if (ecx_2 s> edx_1)
            break
        
        int32_t eax_1
        eax_1.b = ecx_2 s>= edx_1
        return eax_1 - 1

return 1
