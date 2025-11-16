// 函数: sub_7119e0
// 地址: 0x7119e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg2
void* edi = arg3
int32_t i = (ebx - edi) s/ 0x68

if (i s> 0x20)
    int32_t esi_1 = arg4
    
    do
        if (esi_1 s<= 0)
            if (i s<= 0x20)
                break
            
            int32_t eax_21 = (ebx - edi) s/ 0x68
            
            if (eax_21 s> 1)
                eax_21 = sub_712640(eax_21, ebx, edi, arg5)
            
            return sub_712700(eax_21, ebx, edi, arg5)
        
        void* var_10
        sub_711fc0(i, edi, &var_10, ebx, arg5)
        int32_t eax_4
        int32_t edx_3
        edx_3:eax_4 = sx.q(esi_1)
        int32_t ecx_4 = (eax_4 - edx_3) s>> 1
        int32_t eax_7
        int32_t edx_4
        edx_4:eax_7 = sx.q(ecx_4)
        esi_1 = ecx_4 + ((eax_7 - edx_4) s>> 1)
        void* var_c
        
        if ((var_10 - edi) s/ 0x68 s>= (ebx - var_c) s/ 0x68)
            sub_7119e0(esi_1, arg5)
            ebx = var_10
        else
            sub_7119e0(esi_1, arg5)
            edi = var_c
        
        i = (ebx - edi) s/ 0x68
    while (i s> 0x20)

if (i s> 1 && edi != ebx)
    return sub_712890(i, ebx, edi, arg5)

return i
