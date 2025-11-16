// 函数: sub_65c1f0
// 地址: 0x65c1f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t edi = arg2
int64_t* ebx = arg3
int32_t i = (edi - ebx) s/ 0xe

if (i s> 0x20)
    int32_t esi_2 = arg4
    
    do
        if (esi_2 s<= 0)
            if (i s<= 0x20)
                break
            
            int32_t eax_21 = (edi - ebx) s/ 0xe
            
            if (eax_21 s> 1)
                eax_21 = sub_65cb10(eax_21, edi, ebx, arg5)
            
            return sub_65ccd0(eax_21, edi, ebx, arg5)
        
        int16_t* var_c
        sub_65c360(i, ebx, &var_c, edi, arg5)
        int32_t eax_4
        int32_t edx_4
        edx_4:eax_4 = sx.q(esi_2)
        int32_t ecx_2 = (eax_4 - edx_4) s>> 1
        int32_t eax_7
        int32_t edx_5
        edx_5:eax_7 = sx.q(ecx_2)
        esi_2 = ecx_2 + ((eax_7 - edx_5) s>> 1)
        int64_t* var_8
        
        if ((var_c - ebx) s/ 0xe s>= (edi - var_8) s/ 0xe)
            sub_65c1f0(esi_2, arg5)
            edi = var_c
        else
            sub_65c1f0(esi_2, arg5)
            ebx = var_8
        
        arg3 = edi - ebx
        i = arg3 s/ 0xe
    while (i s> 0x20)

if (i s<= 1)
    return i

void* var_20_3 = arg3
int32_t var_24_3 = arg5
return sub_65cd80(ebx, edi)
