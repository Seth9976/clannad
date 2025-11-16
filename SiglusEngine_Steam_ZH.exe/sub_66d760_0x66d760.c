// 函数: sub_66d760
// 地址: 0x66d760
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg2
int16_t* ebx = arg3
int32_t i

for (i = (edi - ebx) s>> 1; i s> 0x20; i = (edi - ebx) s>> 1)
    if (arg4 s<= 0)
        if (i s<= 0x20)
            break
        
        uint32_t eax_12 = (edi - ebx) & 0xfffffffe
        
        if (eax_12 s> 2)
            int32_t var_28_1 = arg5
            eax_12 = sub_66edc0(ebx, edi)
        
        sub_66ee90(eax_12, edi, ebx, arg5)
        return 
    
    int16_t* var_c
    sub_66e080(arg1, ebx, &var_c, edi, arg5)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = sx.q(arg4)
    int32_t esi_3 = (eax_1 - edx_1) s>> 1
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q(esi_3)
    int32_t esi_4 = esi_3 + ((eax_4 - edx_2) s>> 1)
    arg4 = esi_4
    int16_t* var_8
    
    if (((var_c - ebx) & 0xfffffffe) s>= ((edi - var_8) & 0xfffffffe))
        arg1, arg3 = sub_66d760(esi_4, arg5)
        edi = var_c
    else
        arg1 = sub_66d760(esi_4, arg5)
        arg3 = var_8
        ebx = arg3

if (i s<= 1)
    return 

int16_t* var_20_3 = arg3
int32_t var_24_3 = arg5
sub_66eef0(ebx, edi)
