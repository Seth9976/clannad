// 函数: sub_10001f10
// 地址: 0x10001f10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

if (arg2 != 0)
    int32_t ecx = arg1[5]
    int32_t* eax_1
    
    if (ecx u< 0x10)
        eax_1 = arg1
    else
        eax_1 = *arg1
    
    if (arg2 u>= eax_1)
        int32_t* edx_1
        
        if (ecx u< 0x10)
            edx_1 = arg1
        else
            edx_1 = *arg1
        
        if (arg1[4] + edx_1 u> arg2)
            if (ecx u< 0x10)
                return sub_10001e10(arg1, arg1, arg2 - arg1, arg3)
            
            return sub_10001e10(arg1, arg1, arg2 - *arg1, arg3)

void* edx_2 = arg1[4]
void* ecx_3 = arg3

if (0xffffffff - edx_2 u<= ecx_3)
    sub_1000ea5a("string too long")
    noreturn

if (ecx_3 != 0)
    void* edi_1 = edx_2 + ecx_3
    
    if (edi_1 u> 0xfffffffe)
        sub_1000ea5a("string too long")
        noreturn
    
    int32_t eax_9 = arg1[5]
    
    if (eax_9 u>= edi_1)
        if (edi_1 != 0)
            goto label_10001fb8
        
        arg1[4] = edi_1
        
        if (eax_9 u< 0x10)
            *arg1 = 0
            return arg1
        
        **arg1 = 0
        return arg1
    
    sub_100023d0(arg1, edi_1, edx_2)
    ecx_3 = arg3
    
    if (edi_1 != 0)
    label_10001fb8:
        int32_t* edx_3
        
        if (arg1[5] u< 0x10)
            edx_3 = arg1
        else
            edx_3 = *arg1
        
        if (ecx_3 != 0)
            sub_1000a2c0(arg1[4] + edx_3, arg2, ecx_3)
        
        bool cond:0_1 = arg1[5] u< 0x10
        arg1[4] = edi_1
        
        if (not(cond:0_1))
            *(*arg1 + edi_1) = 0
            return arg1
        
        *(arg1 + edi_1) = 0

return arg1
