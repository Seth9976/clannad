// 函数: sub_6e48e0
// 地址: 0x6e48e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg1[1]

if (ecx - arg2 s<= arg1[2])
    int32_t eax_4
    uint32_t edi_1
    
    if (ecx s<= 0x7fffffff - arg2)
        edi_1 = ecx + arg2
        
        if (edi_1 s< 0x7ffffbff)
            edi_1 += 0x400
        
        eax_4 = _realloc(*arg1, edi_1)
    
    if (ecx s> 0x7fffffff - arg2 || eax_4 == 0)
        sub_6e4890(arg1)
        return 0xffffffff
    
    arg1[1] = edi_1
    *arg1 = eax_4

return 0
