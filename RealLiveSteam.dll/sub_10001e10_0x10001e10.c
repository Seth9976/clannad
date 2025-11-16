// 函数: sub_10001e10
// 地址: 0x10001e10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

void** ecx = arg2
int32_t eax = ecx[4]

if (eax u< arg3)
    sub_1000ea88("invalid string position")
    noreturn

void* ebx = arg4
void* eax_1 = eax - arg3
void* edx_1 = arg1[4]

if (eax_1 u< ebx)
    ebx = eax_1

if (0xffffffff - edx_1 u<= ebx)
    sub_1000ea5a("string too long")
    noreturn

if (ebx != 0)
    void* edi_1 = edx_1 + ebx
    
    if (edi_1 u> 0xfffffffe)
        sub_1000ea5a("string too long")
        noreturn
    
    int32_t eax_3 = arg1[5]
    
    if (eax_3 u>= edi_1)
        if (edi_1 != 0)
            goto label_10001e72
        
        arg1[4] = edi_1
        
        if (eax_3 u< 0x10)
            *arg1 = 0
            return arg1
        
        **arg1 = 0
        return arg1
    
    sub_100023d0(arg1, edi_1, edx_1)
    ecx = arg2
    
    if (edi_1 != 0)
    label_10001e72:
        
        if (ecx[5] u>= 0x10)
            ecx = *ecx
        
        int32_t* edx_2
        
        if (arg1[5] u< 0x10)
            edx_2 = arg1
        else
            edx_2 = *arg1
        
        if (ebx != 0)
            sub_1000a2c0(arg1[4] + edx_2, arg3 + ecx, ebx)
        
        bool cond:0_1 = arg1[5] u< 0x10
        arg1[4] = edi_1
        
        if (not(cond:0_1))
            *(*arg1 + edi_1) = 0
            return arg1
        
        *(arg1 + edi_1) = 0

return arg1
