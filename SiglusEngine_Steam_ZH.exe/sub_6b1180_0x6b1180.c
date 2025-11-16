// 函数: sub_6b1180
// 地址: 0x6b1180
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg2
int32_t edi = arg3
int32_t i = (ebx - edi) s/ 0x11c

if (i s> 0x20)
    int32_t esi_1 = arg4
    
    do
        if (esi_1 s<= 0)
            if (i s<= 0x20)
                break
            
            int32_t eax_21 = (ebx - edi) s/ 0x11c
            
            if (eax_21 s> 1)
                eax_21 = sub_6b16f0(eax_21, ebx, edi, arg5)
            
            return sub_6b1860(eax_21, ebx, edi, arg5)
        
        int32_t var_10
        sub_6b12d0(i, edi, &var_10, ebx, arg5)
        int32_t eax_4
        int32_t edx_4
        edx_4:eax_4 = sx.q(esi_1)
        int32_t ecx_4 = (eax_4 - edx_4) s>> 1
        int32_t eax_7
        int32_t edx_5
        edx_5:eax_7 = sx.q(ecx_4)
        esi_1 = ecx_4 + ((eax_7 - edx_5) s>> 1)
        int32_t var_c
        
        if ((var_10 - edi) s/ 0x11c s>= (ebx - var_c) s/ 0x11c)
            sub_6b1180(esi_1, arg5)
            ebx = var_10
        else
            sub_6b1180(esi_1, arg5)
            edi = var_c
        
        i = (ebx - edi) s/ 0x11c
    while (i s> 0x20)

if (i s> 1 && edi != ebx)
    return sub_6b1960(i, ebx, edi, arg5)

return i
