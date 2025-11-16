// 函数: sub_498c3e
// 地址: 0x498c3e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
uint32_t edi_1 = 0

while (true)
    int32_t eax_1 = arg1[0x1b]
    
    if (eax_1 u< 0x106)
        sub_4989be()
        eax_1 = arg1[0x1b]
        
        if (eax_1 u< 0x106 && arg2 == 0)
            break
        
        if (eax_1 == 0)
            int32_t ecx_18 = arg1[0x15]
            char* eax_45
            
            if (ecx_18 s< 0)
                eax_45 = nullptr
            else
                eax_45 = arg1[0xc] + ecx_18
            
            int32_t edx_11
            edx_11.b = arg2 == 4
            sub_4e40a2(arg1, eax_45, arg1[0x19] - ecx_18, edx_11)
            arg1[0x15] = arg1[0x19]
            sub_49881e(*arg1)
            
            if (*(*arg1 + 0x10) != 0)
                int32_t eax_49
                eax_49.b = arg2 == 4
                return eax_49 * 2 + 1
            
            if (arg2 == 4)
                return 2
            
            break
    
    if (eax_1 u>= 3)
        int32_t edx_1 = arg1[0x19]
        int32_t eax_5 = (arg1[0x10] << (arg1[0x14]).b ^ zx.d(*(arg1[0xc] + edx_1 + 2))) & arg1[0x13]
        int32_t ecx_4 = arg1[0xf]
        arg1[0x10] = eax_5
        edi_1 = zx.d(*(ecx_4 + (eax_5 << 1)))
        *(arg1[0xe] + ((arg1[0xb] & edx_1) << 1)) = edi_1.w
        edx_1.w = arg1[0x19].w
        *(arg1[0xf] + (arg1[0x10] << 1)) = edx_1.w
    
    if (edi_1 != 0 && arg1[0x19] - edi_1 u<= arg1[9] - 0x106 && arg1[0x20] != 2)
        arg1[0x16] = sub_498872(arg1, edi_1)
    
    int32_t ebx_4
    
    if (arg1[0x16] u< 3)
        char* eax_33
        eax_33.b = arg1[0x19][arg1[0xc]]
        *(arg1[0x5a7] + (arg1[0x5a6] << 1)) = 0
        arg1[0x5a4][arg1[0x5a6]] = eax_33.b
        arg1[0x5a6] += 1
        arg1[zx.d(eax_33.b) + 0x23].w += 1
        ebx_4.b = arg1[0x5a6] == arg1[0x5a5] - 1
        arg1[0x1b] -= 1
        arg1[0x19] += 1
    else
        char* ecx
        ecx.b = arg1[0x16].b
        int16_t eax_12 = arg1[0x19].w - arg1[0x1a].w
        ecx.b -= 3
        *(arg1[0x5a7] + (arg1[0x5a6] << 1)) = eax_12
        arg1[0x5a4][arg1[0x5a6]] = ecx.b
        arg1[0x5a6] += 1
        void* ecx_9 = &arg1[zx.d(*(zx.d(ecx.b) + 0xace800)) + 0x124]
        *ecx_9 += 1
        uint32_t eax_14 = zx.d(eax_12 - 1)
        uint32_t eax_15
        
        if (eax_12 - 1 u>= 0x100)
            eax_15 = zx.d(*((eax_14 u>> 7) + 0xace700))
        else
            eax_15 = zx.d(*(eax_14 + 0xace600))
        
        arg1[eax_15 + 0x260].w += 1
        int32_t eax_20 = arg1[0x16]
        ebx_4.b = arg1[0x5a6] == arg1[0x5a5] - 1
        arg1[0x1b] -= eax_20
        
        if (eax_20 u> arg1[0x1e] || arg1[0x1b] u< 3)
            arg1[0x19] += eax_20
            void* eax_28 = arg1[0x19]
            int32_t ecx_13 = arg1[0xc]
            arg1[0x16] = 0
            char* edx_6 = eax_28 + ecx_13
            uint32_t eax_29 = zx.d(*edx_6)
            char ecx_14 = (arg1[0x14]).b
            arg1[0x10] = eax_29
            arg1[0x10] = (eax_29 << ecx_14 ^ zx.d(edx_6[1])) & arg1[0x13]
        else
            arg1[0x16] = eax_20 - 1
            int32_t i
            
            do
                arg1[0x19] += 1
                int32_t edx_4 = arg1[0x19]
                int32_t edx_5 = edx_4 & arg1[0xb]
                int32_t ecx_12 = arg1[0xf]
                int32_t eax_25 =
                    (zx.d(*(edx_4 + arg1[0xc] + 2)) ^ arg1[0x10] << (arg1[0x14]).b) & arg1[0x13]
                arg1[0x10] = eax_25
                edi_1 = zx.d(*(ecx_12 + (eax_25 << 1)))
                *(arg1[0xe] + (edx_5 << 1)) = edi_1.w
                edx_5.w = arg1[0x19].w
                *(arg1[0xf] + (arg1[0x10] << 1)) = edx_5.w
                i = arg1[0x16]
                arg1[0x16] -= 1
            while (i != 1)
            arg1[0x19] += 1
    
    if (ebx_4 != 0)
        int32_t ecx_17 = arg1[0x15]
        char* eax_39
        
        if (ecx_17 s< 0)
            eax_39 = nullptr
        else
            eax_39 = arg1[0xc] + ecx_17
        
        sub_4e40a2(arg1, eax_39, arg1[0x19] - ecx_17, 0)
        arg1[0x15] = arg1[0x19]
        sub_49881e(*arg1)
        
        if (*(*arg1 + 0x10) == 0)
            break

return 0
