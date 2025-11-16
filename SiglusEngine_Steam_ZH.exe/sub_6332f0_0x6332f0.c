// 函数: sub_6332f0
// 地址: 0x6332f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg2
int32_t* ebx = arg3
int32_t i

for (i = (edi - ebx) s>> 3; i s> 0x20; i = (edi - ebx) s>> 3)
    if (arg4 s<= 0)
        if (i s<= 0x20)
            break
        
        void* eax_12 = (edi - ebx) & 0xfffffff8
        
        if (eax_12 s> 8)
            eax_12 = sub_633e90(eax_12, edi, ebx, arg5)
        
        sub_633f60(eax_12, edi, ebx, arg5)
        return 
    
    int32_t* var_c
    sub_633820(arg1, ebx, &var_c, edi, arg5)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = sx.q(arg4)
    int32_t esi_3 = (eax_1 - edx_1) s>> 1
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q(esi_3)
    int32_t esi_4 = esi_3 + ((eax_4 - edx_2) s>> 1)
    arg4 = esi_4
    int32_t* var_8
    
    if (((var_c - ebx) & 0xfffffff8) s>= ((edi - var_8) & 0xfffffff8))
        arg1, arg3 = sub_6332f0(esi_4, arg5)
        edi = var_c
    else
        arg1 = sub_6332f0(esi_4, arg5)
        arg3 = var_8
        ebx = arg3

if (i s<= 1)
    return 

int32_t* var_20_3 = arg3
int32_t var_24_3 = arg5
sub_633fd0(ebx, edi)
