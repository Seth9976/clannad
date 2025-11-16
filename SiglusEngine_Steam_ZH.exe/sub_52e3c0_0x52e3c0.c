// 函数: sub_52e3c0
// 地址: 0x52e3c0
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
    sub_52e2c0(arg1, edi_1 + ecx)
    sub_52e300(arg1, 0, arg3)
    return arg1

if (edi_1 u> 0x7ffffffe)
    sub_743191("string too long")
    noreturn

int32_t eax_2 = arg1[5]

if (eax_2 u>= edi_1)
    if (edi_1 != 0)
        goto label_52e42f
    
    arg1[4] = edi_1
    
    if (eax_2 u< 8)
        *arg1 = 0
        return arg1
    
    **arg1 = 0
    return arg1

sub_52e500(arg1, edi_1, arg1[4])
ecx = arg3

if (edi_1 != 0)
label_52e42f:
    
    if (ebx[5] u>= 8)
        ebx = *ebx
    
    int32_t* edx_1
    
    if (arg1[5] u< 8)
        edx_1 = arg1
    else
        edx_1 = *arg1
    
    if (edi_1 != 0)
        sub_748840(edx_1, ebx + (ecx << 1), edi_1 * 2)
    
    bool cond:0_1 = arg1[5] u< 8
    arg1[4] = edi_1
    
    if (not(cond:0_1))
        *(*arg1 + (edi_1 << 1)) = 0
        return arg1
    
    *(arg1 + (edi_1 << 1)) = 0

return arg1
