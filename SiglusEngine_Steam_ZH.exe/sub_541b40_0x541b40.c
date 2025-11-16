// 函数: sub_541b40
// 地址: 0x541b40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** ebx = arg2
int32_t ecx = arg3
int32_t edi = ebx[4]

if (edi u< ecx)
    sub_7431bf("invalid string position")
    noreturn

void* edi_1 = edi - ecx

if (arg4 u< edi_1)
    edi_1 = arg4

if (arg1 == ebx)
    void* eax = edi_1 + ecx
    
    if (arg1[4] u< eax)
        sub_7431bf("invalid string position")
        noreturn
    
    bool cond:0 = arg1[5] u< 0x10
    arg1[4] = eax
    
    if (cond:0)
        *(arg1 + eax) = 0
        sub_541a90(arg1, 0, ecx)
        return arg1
    
    *(*arg1 + eax) = 0
    sub_541a90(arg1, 0, ecx)
    return arg1

if (edi_1 u> 0xfffffffe)
    sub_743191("string too long")
    noreturn

int32_t eax_3 = arg1[5]

if (eax_3 u>= edi_1)
    if (edi_1 != 0)
        goto label_541bd3
    
    arg1[4] = edi_1
    
    if (eax_3 u< 0x10)
        *arg1 = 0
        return arg1
    
    **arg1 = 0
    return arg1

sub_541ca0(arg1, edi_1, arg1[4])
ecx = arg3

if (edi_1 != 0)
label_541bd3:
    
    if (ebx[5] u>= 0x10)
        ebx = *ebx
    
    int32_t* edx_3
    
    if (arg1[5] u< 0x10)
        edx_3 = arg1
    else
        edx_3 = *arg1
    
    if (edi_1 != 0)
        sub_748840(edx_3, ebx + ecx, edi_1)
    
    bool cond:1_1 = arg1[5] u< 0x10
    arg1[4] = edi_1
    
    if (not(cond:1_1))
        *(*arg1 + edi_1) = 0
        return arg1
    
    *(arg1 + edi_1) = 0

return arg1
