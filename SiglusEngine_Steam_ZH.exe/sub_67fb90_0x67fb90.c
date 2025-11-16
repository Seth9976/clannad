// 函数: sub_67fb90
// 地址: 0x67fb90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg2
int32_t* ebx = arg3
int32_t ecx = arg5
int32_t i

for (i = (edi - ebx) s>> 2; i s> 0x20; i = (edi - ebx) s>> 2)
    if (arg4 s<= 0)
        if (i s<= 0x20)
            break
        
        void* eax_13 = (edi - ebx) & 0xfffffffc
        
        if (eax_13 s> 4)
            eax_13 = sub_680260(eax_13, edi, ebx, ecx)
            ecx = arg5
        
        sub_680310(eax_13, edi, ebx, ecx)
        return 
    
    void* var_c
    sub_67fec0(arg1, ebx, &var_c, edi, ecx)
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
    
    if (((var_c - ebx) & 0xfffffffc) s>= ((edi - var_8) & 0xfffffffc))
        arg1 = sub_67fb90(esi_4, arg5)
        edi = var_c
    else
        arg1 = sub_67fb90(esi_4, arg5)
        ebx = var_8
    
    ecx = arg5

if (i s> 1 && ebx != edi)
    sub_680370(arg1, edi, ebx, ecx)
