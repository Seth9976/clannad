// 函数: sub_607d90
// 地址: 0x607d90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = arg1[4]

if (0xffffffff - ecx u<= arg2)
    sub_743191("string too long")
    noreturn

if (arg2 != 0)
    void* edi_1 = ecx + arg2
    
    if (edi_1 u> 0xfffffffe)
        sub_743191("string too long")
        noreturn
    
    int32_t eax_1 = arg1[5]
    
    if (eax_1 u>= edi_1)
        if (edi_1 != 0)
            goto label_607dd0
        
        arg1[4] = edi_1
        
        if (eax_1 u< 0x10)
            *arg1 = 0
            return arg1
        
        **arg1 = 0
        return arg1
    
    sub_541ca0(arg1, edi_1, ecx)
    
    if (edi_1 != 0)
    label_607dd0:
        sub_607fa0(arg1, arg1[4], arg2, arg3)
        bool cond:0_1 = arg1[5] u< 0x10
        arg1[4] = edi_1
        
        if (not(cond:0_1))
            *(*arg1 + edi_1) = 0
            return arg1
        
        *(arg1 + edi_1) = 0

return arg1
