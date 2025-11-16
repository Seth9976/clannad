// 函数: sub_6d8d30
// 地址: 0x6d8d30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = 0x400

if (*(arg3 + 0x80) != *(arg3 + 0x11c))
    *(arg3 + 0x9c) = "zstream unclaimed"
    return 0xfffffffe

*(arg3 + 0x90) = arg5
*(arg3 + 0x94) = 0
int32_t result

while (true)
    if (*(arg3 + 0x88) == 0)
        int32_t eax_2 = *arg4
        
        if (edi u> eax_2)
            edi = eax_2
        
        *arg4 = eax_2 - edi
        
        if (edi != 0)
            int32_t eax_4 = *(arg3 + 0x5c)
            
            if (eax_4 == 0)
                sub_6d42e0(arg3, "Call to NULL read function")
                noreturn
            
            sub_6caa70(eax_4(arg3, arg2, edi), arg2, arg3, edi)
        
        *(arg3 + 0x84) = arg2
        *(arg3 + 0x88) = edi
    
    if (*(arg3 + 0x94) == 0)
        int32_t ecx_2 = 0xffffffff
        int32_t eax_6 = *arg6
        
        if (eax_6 u< 0xffffffff)
            ecx_2 = eax_6
        
        *(arg3 + 0x94) = ecx_2
        *arg6 = eax_6 - ecx_2
    
    void* edx_2 = nullptr
    
    if (*arg4 u<= 0)
        edx_2.b = arg7 != 0
        edx_2 = (edx_2 << 1) + 2
    
    result = sub_724e00(arg3 + 0x84, edx_2)
    
    if (result != 0)
        break
    
    if (*arg6 u<= result)
        if (*(arg3 + 0x94) u<= result)
            break

*arg6 += *(arg3 + 0x94)
*(arg3 + 0x94) = 0
sub_6cb6b0(arg3, result)
return result
