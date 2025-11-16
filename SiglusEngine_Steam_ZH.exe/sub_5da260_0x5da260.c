// 函数: sub_5da260
// 地址: 0x5da260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg4
void* esi = arg1
void* var_c = esi

if (arg3 s< result)
    int32_t ecx = arg3 * 0x19b0
    arg4 = result - arg3
    int32_t var_14_1 = ecx
    int32_t i
    
    do
        void* edi_2 = *(esi + 0xa4) + ecx
        int32_t eax_1 = *arg2
        
        if (eax_1 == arg2[1])
            eax_1 = 0
        
        __builtin_memcpy(edi_2 + 0x124, arg2[3] + eax_1, 0xac)
        arg2[3] += 0xac
        int32_t eax_2 = *arg2
        
        if (eax_2 == arg2[1])
            eax_2 = 0
        
        *(edi_2 + 0x1d0) = *(arg2[3] + eax_2)
        arg2[3] += 4
        int32_t eax_4 = *arg2
        
        if (eax_4 == arg2[1])
            eax_4 = 0
        
        *(edi_2 + 0x1d4) = arg2[3][eax_4]
        arg2[3] += 1
        int32_t eax_6 = *arg2
        
        if (eax_6 == arg2[1])
            eax_6 = 0
        
        *(edi_2 + 0x1d5) = arg2[3][eax_6]
        arg2[3] += 1
        int32_t eax_8 = *arg2
        
        if (eax_8 == arg2[1])
            eax_8 = 0
        
        *(edi_2 + 0x1d6) = arg2[3][eax_8]
        arg2[3] += 1
        int32_t eax_10 = *arg2
        
        if (eax_10 == arg2[1])
            eax_10 = 0
        
        *(edi_2 + 0x1d7) = arg2[3][eax_10]
        arg2[3] += 1
        char* eax_12 = *arg2
        
        if (eax_12 == arg2[1])
            eax_12 = nullptr
        
        *(edi_2 + 0x1d8) = eax_12[arg2[3]]
        arg2[3] += 1
        int32_t* eax_14 = *arg2
        
        if (eax_14 == arg2[1])
            eax_14 = nullptr
        
        *(edi_2 + 0x1dc) = *(eax_14 + arg2[3])
        arg2[3] += 4
        int32_t* eax_16 = *arg2
        
        if (eax_16 == arg2[1])
            eax_16 = nullptr
        
        *(edi_2 + 0x1e0) = *(eax_16 + arg2[3])
        arg2[3] += 4
        char* eax_18 = *arg2
        
        if (eax_18 == arg2[1])
            eax_18 = nullptr
        
        *(edi_2 + 0x1e4) = eax_18[arg2[3]]
        arg2[3] += 1
        int32_t* eax_20 = *arg2
        
        if (eax_20 == arg2[1])
            eax_20 = nullptr
        
        *(edi_2 + 0x1e8) = *(eax_20 + arg2[3])
        arg2[3] += 4
        int32_t* eax_22 = *arg2
        
        if (eax_22 == arg2[1])
            eax_22 = nullptr
        
        *(edi_2 + 0x1f8) = *(eax_22 + arg2[3])
        arg2[3] += 4
        char* eax_24 = *arg2
        
        if (eax_24 == arg2[1])
            eax_24 = nullptr
        
        *(edi_2 + 0x1fc) = eax_24[arg2[3]]
        arg2[3] += 1
        int32_t* eax_26 = *arg2
        
        if (eax_26 == arg2[1])
            eax_26 = nullptr
        
        *(edi_2 + 0x200) = *(eax_26 + arg2[3])
        arg2[3] += 4
        int32_t* eax_28 = *arg2
        
        if (eax_28 == arg2[1])
            eax_28 = nullptr
        
        *(edi_2 + 0x204) = *(eax_28 + arg2[3])
        arg2[3] += 4
        int32_t eax_30 = *arg2
        
        if (eax_30 == arg2[1])
            eax_30 = 0
        
        *(edi_2 + 0x208) = *(arg2[3] + eax_30)
        arg2[3] += 4
        int32_t eax_32 = *arg2
        
        if (eax_32 == arg2[1])
            eax_32 = 0
        
        *(edi_2 + 0x20c) = *(arg2[3] + eax_32)
        arg2[3] += 4
        int32_t eax_34 = *arg2
        
        if (eax_34 == arg2[1])
            eax_34 = 0
        
        *(edi_2 + 0x210) = *(arg2[3] + eax_34)
        arg2[3] += 4
        int32_t eax_36 = *arg2
        
        if (eax_36 == arg2[1])
            eax_36 = 0
        
        *(edi_2 + 0x214) = *(arg2[3] + eax_36)
        arg2[3] += 8
        int32_t eax_38 = *arg2
        
        if (eax_38 == arg2[1])
            eax_38 = 0
        
        sub_5da590(edi_2 + 0x228, *(arg2[3] + eax_38 - 4))
        
        for (void* j = *(edi_2 + 0x228); j != *(edi_2 + 0x22c); j += 0x1c0)
            sub_5dc590(j, arg2)
        
        sub_5e2a30(edi_2 + 0x234, arg2)
        sub_5df750(edi_2 + 0xc34, arg2)
        sub_5e2a30(edi_2 + 0xf28, arg2)
        sub_5e03f0(edi_2 + 0x1928, arg2)
        sub_5d91e0(edi_2)
        sub_5d92d0(edi_2)
        result = sub_5d9120(edi_2)
        esi = var_c
        ecx = var_14_1 + 0x19b0
        i = arg4
        arg4 -= 1
        var_14_1 = ecx
    while (i != 1)

return result
