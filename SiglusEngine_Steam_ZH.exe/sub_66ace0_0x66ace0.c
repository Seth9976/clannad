// 函数: sub_66ace0
// 地址: 0x66ace0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg2
void* ebx = arg3
int32_t i = (edi - ebx) s/ 0x30

if (i s> 0x20)
    int32_t esi_2 = arg4
    
    do
        if (esi_2 s<= 0)
            if (i s<= 0x20)
                break
            
            int32_t eax_21 = (edi - ebx) s/ 0x30
            
            if (eax_21 s> 1)
                eax_21 = sub_66c620(eax_21, edi, ebx, arg5)
            
            return sub_66c750(eax_21, edi, ebx, arg5)
        
        int32_t* var_c
        sub_66b920(i, ebx, &var_c, edi, arg5)
        int32_t eax_4
        int32_t edx_3
        edx_3:eax_4 = sx.q(esi_2)
        int32_t ecx_2 = (eax_4 - edx_3) s>> 1
        int32_t eax_7
        int32_t edx_4
        edx_4:eax_7 = sx.q(ecx_2)
        esi_2 = ecx_2 + ((eax_7 - edx_4) s>> 1)
        void* var_8
        
        if ((var_c - ebx) s/ 0x30 s>= (edi - var_8) s/ 0x30)
            sub_66ace0(esi_2, arg5)
            edi = var_c
        else
            sub_66ace0(esi_2, arg5)
            ebx = var_8
        
        arg3 = edi - ebx
        i = arg3 s/ 0x30
    while (i s> 0x20)

if (i s<= 1)
    return i

void* var_20_3 = arg3
int32_t var_24_3 = arg5
return sub_66c7b0(ebx, edi)
