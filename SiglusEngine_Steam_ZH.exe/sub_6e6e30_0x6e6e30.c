// 函数: sub_6e6e30
// 地址: 0x6e6e30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0xd144) s<= 0)
    int32_t eax_1 = *(arg1 + 0xd348)
    
    if (eax_1 != 0)
        _free(eax_1)
        int32_t __saved_edi_1 = *(arg1 + 0xd34c)
        *(arg1 + 0xd348) = 0
        _free(__saved_edi_1)
        int32_t var_1c_1 = *(arg1 + 0xd350)
        *(arg1 + 0xd34c) = 0
        _free(var_1c_1)
        *(arg1 + 0xd350) = 0
    
    return 1

char* edi = *(arg1 + 0xd348)

if (edi != 0)
    int32_t ecx_1 = 0
    int32_t edx_3 = *(arg1 + 0x10c) + *(arg1 + 0x108) + *(arg1 + 0x104)
    char eax = *(arg1 + 0x393)
    int32_t ebx_1 = *(arg1 + 0x100)
    int32_t var_c_1 = edx_3
    
    if (edx_3 s> 0)
        do
            int32_t eax_5 = *(ebx_1 + (ecx_1 << 2))
            ecx_1 += 1
            edx_3.b = eax
            edi[eax_5] = edx_3.b
        while (ecx_1 s< var_c_1)
    
    goto label_6e6f1f

if (*(arg1 + 0x390) == 0)
    uint32_t edi_1 = *(arg1 + 0xdc)
    char* eax_3 = _malloc(edi_1)
    *(arg1 + 0xd348) = eax_3
    
    if (eax_3 != 0)
        _memset(eax_3, *(arg1 + 0x393), edi_1)
    label_6e6f1f:
        int32_t ecx_9 = *(arg1 + 0xd144)
        
        if (ecx_9 s<= 1)
            int32_t eax_6 = *(arg1 + 0xd34c)
            
            if (eax_6 != 0)
                _free(eax_6)
                int32_t var_20_2 = *(arg1 + 0xd350)
                *(arg1 + 0xd34c) = 0
                _free(var_20_2)
                *(arg1 + 0xd350) = 0
            
            return 1
        
        if (*(arg1 + 0xd34c) != 0)
            goto label_6e6fde
        
        int32_t edi_2 = *(arg1 + 0x30)
        uint32_t eax_12 = *(arg1 + 4) * *(arg1 + 8) + (((*(arg1 + 8)
            u>> ((not.d(edi_2 u>> 1)).b & 1)) * (*(arg1 + 4) u>> ((not.d(edi_2)).b & 1))) << 1)
        int32_t eax_13 = _malloc(eax_12)
        int32_t ecx_8 = *(arg1 + 0xdc) << 2
        *(arg1 + 0xd350) = eax_13
        int32_t eax_14 = _malloc(ecx_8)
        *(arg1 + 0xd34c) = eax_14
        
        if (eax_14 != 0 && eax_13 != 0)
            ecx_9 = *(arg1 + 0xd144)
            *(arg1 + 0xd354) = 0
        label_6e6fde:
            int32_t eax_15
            eax_15.b = ecx_9 s>= 5
            
            if (*(arg1 + 0xd354) != eax_15 + 1)
                int32_t edx_7 = *(arg1 + 4)
                
                if (ecx_9 s>= 5)
                    int32_t eax_21 = *(arg1 + 8)
                    int32_t eax_22 = *(arg1 + 0x30)
                    *(arg1 + 0xd358) = edx_7
                    uint32_t edi_7 = edx_7 u>> ((not.d(eax_22)).b & 1)
                    int32_t eax_26 = *(arg1 + 8)
                    uint32_t var_c_3 = eax_21 u>> ((not.d(eax_22 u>> 1)).b & 1)
                    *(arg1 + 0xd360) = edx_7
                    *(arg1 + 0xd35c) = eax_26
                    int32_t eax_27 = *(arg1 + 0xd350)
                    *(arg1 + 0xd36c) = var_c_3
                    *(arg1 + 0xd37c) = var_c_3
                    *(arg1 + 0xd364) = eax_27
                    int32_t eax_28 = eax_27 + edx_7 * eax_21
                    *(arg1 + 0xd368) = edi_7
                    *(arg1 + 0xd370) = edi_7
                    *(arg1 + 0xd374) = eax_28
                    *(arg1 + 0xd378) = edi_7
                    *(arg1 + 0xd384) = var_c_3 * edi_7 + eax_28
                    *(arg1 + 0xd380) = edi_7
                    sub_6ec090(arg1 + 0xd358, arg1 + 0xd358)
                else
                    *(arg1 + 0xd358) = edx_7
                    int32_t ecx_10 = *(arg1 + 8)
                    int32_t edx_8 = neg.d(edx_7)
                    *(arg1 + 0xd35c) = ecx_10
                    *(arg1 + 0xd360) = edx_8
                    *(arg1 + 0xd364) = (1 - ecx_10) * edx_8 + *(arg1 + 0xd350)
                
                ecx_9 = *(arg1 + 0xd144)
                int32_t eax_29
                eax_29.b = ecx_9 s>= 5
                *(arg1 + 0xd354) = eax_29 + 1
            
            if (ecx_9 s< 5)
                int32_t eax_33 = *(arg1 + 0x11c) * 6
                *(arg1 + 0xd368) = *(arg1 + (eax_33 << 3) + 0x13c)
                *(arg1 + 0xd378) = *(arg1 + (eax_33 << 3) + 0x14c)
            
            return 0
        
        _free(eax_13)
        int32_t var_20_4 = *(arg1 + 0xd34c)
        *(arg1 + 0xd350) = 0
        _free(var_20_4)
        *(arg1 + 0xd34c) = 0

return 1
