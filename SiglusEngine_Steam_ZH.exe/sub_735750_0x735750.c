// 函数: sub_735750
// 地址: 0x735750
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = *(arg1 + 0x19c)

if (*(edi + 0x30) != 0)
    goto label_735789

int32_t result = (*(*(arg1 + 0x1a0) + 0xc))(arg1, *(edi + (*(edi + 0x40) << 2) + 0x38))

if (result != 0)
    *(edi + 0x4c) += 1
    *(edi + 0x30) = 1
label_735789:
    int32_t eax_3 = *(edi + 0x44)
    int32_t edx_1 = arg2
    
    if (eax_3 == 0)
    label_7357e3:
        *(edi + 0x34) = 0
        *(edi + 0x48) = *(arg1 + 0x124) - 1
        
        if (*(edi + 0x4c) == *(arg1 + 0x128))
            sub_7355b0(arg1)
        
        edx_1 = arg2
        *(edi + 0x44) = 1
        goto label_73582f
    
    if (eax_3 == 1)
    label_73582f:
        (*(*(arg1 + 0x1a4) + 4))(arg1, *(edi + (*(edi + 0x40) << 2) + 0x38), edi + 0x34, 
            *(edi + 0x48), edx_1, arg3, arg4)
        result = *(edi + 0x34)
        
        if (result u>= *(edi + 0x48))
            if (*(edi + 0x4c) == 1)
                sub_7354d0(arg1)
            
            *(edi + 0x40) ^= 1
            *(edi + 0x30) = 0
            *(edi + 0x34) = *(arg1 + 0x124) + 1
            result = *(arg1 + 0x124) + 2
            *(edi + 0x44) = 2
            *(edi + 0x48) = result
    else
        result = eax_3 - 2
        
        if (eax_3 == 2)
            (*(*(arg1 + 0x1a4) + 4))(arg1, *(edi + (*(edi + 0x40) << 2) + 0x38), edi + 0x34, 
                *(edi + 0x48), edx_1, arg3, arg4)
            result = *(edi + 0x34)
            
            if (result u>= *(edi + 0x48))
                result = arg4
                *(edi + 0x44) = 0
                
                if (*arg3 u< result)
                    goto label_7357e3

return result
