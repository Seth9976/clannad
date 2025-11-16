// 函数: sub_10002040
// 地址: 0x10002040
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

void** ebx = arg2
int32_t ecx = arg3
int32_t edi = ebx[4]

if (edi u< ecx)
    sub_1000ea88("invalid string position")
    noreturn

void* edi_1 = edi - ecx

if (arg4 u< edi_1)
    edi_1 = arg4

if (arg1 == ebx)
    void* eax = edi_1 + ecx
    
    if (arg1[4] u< eax)
        sub_1000ea88("invalid string position")
        noreturn
    
    bool cond:0 = arg1[5] u< 0x10
    arg1[4] = eax
    
    if (cond:0)
        *(arg1 + eax) = 0
        sub_10002270(arg1, 0, ecx)
        return arg1
    
    *(*arg1 + eax) = 0
    sub_10002270(arg1, 0, ecx)
    return arg1

if (edi_1 u> 0xfffffffe)
    sub_1000ea5a("string too long")
    noreturn

int32_t eax_3 = arg1[5]

if (eax_3 u>= edi_1)
    if (edi_1 != 0)
        goto label_100020d3
    
    arg1[4] = edi_1
    
    if (eax_3 u< 0x10)
        *arg1 = 0
        return arg1
    
    **arg1 = 0
    return arg1

sub_100023d0(arg1, edi_1, arg1[4])
ecx = arg3

if (edi_1 != 0)
label_100020d3:
    
    if (ebx[5] u>= 0x10)
        ebx = *ebx
    
    int32_t* edx_3
    
    if (arg1[5] u< 0x10)
        edx_3 = arg1
    else
        edx_3 = *arg1
    
    if (edi_1 != 0)
        sub_1000a2c0(edx_3, ebx + ecx, edi_1)
    
    bool cond:1_1 = arg1[5] u< 0x10
    arg1[4] = edi_1
    
    if (not(cond:1_1))
        *(*arg1 + edi_1) = 0
        return arg1
    
    *(arg1 + edi_1) = 0

return arg1
