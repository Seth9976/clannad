// 函数: sub_42f320
// 地址: 0x42f320
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_4 = arg1
int32_t edi = *(arg2 + 8)

if (edi s>= *(arg1 + 0x2c))
label_42f3dc:
    int32_t eax_10 = *(arg2 + 0xc)
    
    if (eax_10 s>= 0 && eax_10 s< *(arg2 + 0x174))
        void* eax_13 = eax_10 * 0x30 + *(arg2 + 0x170)
        int32_t ecx_2 = *(eax_13 + 0x1c)
        
        switch (ecx_2)
            case 0
                *(arg2 + 0x14c) += 1
                *(arg2 + 0x14) = 0
                return 1
            case 1
                *(arg2 + 0x14) = 0
                int32_t eax_15 = sub_42ed00(arg2, eax_13)
                *(arg2 + 0x14c) += 1
                *(arg2 + 0xc) = eax_15
                return 1
            case 2
                *(arg2 + 0x2c) = 1
            case 3
                if (*(eax_13 + 0x14) != 0)
                    sub_42f2e0(ecx_2, arg2)
                    return 1
                
                *(arg2 + 0x2c) = 1
else
    int32_t eax_1 = *(arg2 + 0xc)
    void* eax_4
    
    if (eax_1 s>= 0 && eax_1 s< *(arg2 + 0x174))
        eax_4 = eax_1 * 0x30 + *(arg2 + 0x170)
    
    if (eax_1 s>= 0 && eax_1 s< *(arg2 + 0x174) && *(eax_4 + 0x1c) == 3 && *(eax_4 + 0x14) != 0)
        goto label_42f3dc
    
    int32_t ecx = edi + 1
    
    if (ecx s> *(arg2 + 0x18))
        ecx = *(arg2 + 0x18)
    
    if (ecx != edi)
        *(arg2 + 0x14c) += 1
        *(arg2 + 8) = ecx
        *(arg2 + 0x20) = 0
        *(arg2 + 0x24) = 1
        *(arg2 + 0x28) = 1
        *(arg2 + 0x2c) = 0
        *(arg2 + 0x34) = 0
        *(arg2 + 0xc) = 0xffffffff
        sub_42ef50(arg2)
    
    if (*(arg2 + 8) == edi)
        int32_t eax_5 = *(arg2 + 0xc)
        
        if (eax_5 s>= 0 && eax_5 s< *(arg2 + 0x174))
            int32_t eax_9 = *(eax_5 * 0x30 + *(arg2 + 0x170) + 0x1c)
            
            if (eax_9 == 0 || eax_9 == 1)
                goto label_42f3dc

return 0
