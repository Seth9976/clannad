// 函数: sub_687030
// 地址: 0x687030
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg3
int32_t edi = arg2

while (true)
    void* ebx_1 = *arg1
    int32_t result = 0
    
    if (edi s< 0)
        edi = 0
    
    if (edx s< 0)
        edx = 0
    
    if (ebx_1 == 0)
        arg1[2] = result
        return result
    
    int32_t esi_1 = arg1[0xa]
    
    if (esi_1 s< 0)
        arg1[2] = 0
        return result
    
    result = (*(ebx_1 + 0x1c) - *(ebx_1 + 0x18)) s>> 4
    
    if (esi_1 s>= result)
        arg1[2] = 0
        return result
    
    int32_t* esi_3 = (esi_1 << 4) + *(ebx_1 + 0x18)
    result = *esi_3
    
    if (result == esi_3[1])
        arg1[2] = 0
        return result
    
    if (arg1[0xc].b == 0 || esi_3[3] s<= 0)
        arg1[2] = result
        return result
    
    if (*(arg1 + 0x31) == 0)
        if (*(arg1 + 0x33) == 0)
            arg1[9] += edi
        else
            arg1[9] += edx
    
    if (*(arg1 + 0x32) != 0 || arg1[9] s< esi_3[3])
        int32_t i = mods.dp.d(sx.q(arg1[9]), esi_3[3])
        arg1[9] = i
        result = *esi_3
        int32_t esi_4 = esi_3[1]
        
        if (result == esi_4)
            return result
        
        while (*(result + 0x18) s< i)
            result += 0x1c
            
            if (result == esi_4)
                return result
        
        arg1[2] = result
        return result
    
    if (arg1[0xd].b == 0)
        arg1[9] = esi_3[3]
        result = esi_3[1] - 0x1c
        arg1[2] = result
        return result
    
    sub_687000(arg1, arg1[0xb], *(arg1 + 0x35), *(arg1 + 0x36))
    int32_t eax_7 = esi_3[3] - arg1[9]
    edx += eax_7
    edi += eax_7
