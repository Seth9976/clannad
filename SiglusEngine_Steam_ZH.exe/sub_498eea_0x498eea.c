// 函数: sub_498eea
// 地址: 0x498eea
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
uint32_t var_8_1 = 0
int32_t edi
int32_t var_14 = edi

while (true)
    int32_t eax_1 = arg1[0x1b]
    
    if (eax_1 u< 0x106)
        sub_4989be()
        eax_1 = arg1[0x1b]
        
        if (eax_1 u< 0x106 && arg2 == 0)
            break
        
        if (eax_1 == 0)
            if (arg1[0x18] != 0)
                int32_t ecx_30
                ecx_30.b = *(arg1[0x19] + arg1[0xc] - 1)
                *(arg1[0x5a7] + (arg1[0x5a6] << 1)) = 0
                arg1[0x5a4][arg1[0x5a6]] = ecx_30.b
                arg1[0x5a6] += 1
                arg1[zx.d(ecx_30.b) + 0x23].w += 1
                arg1[0x18] = 0
            
            int32_t ecx_31 = arg1[0x15]
            char* eax_56
            
            if (ecx_31 s< 0)
                eax_56 = nullptr
            else
                eax_56 = arg1[0xc] + ecx_31
            
            int32_t edx_12
            edx_12.b = arg2 == 4
            sub_4e40a2(arg1, eax_56, arg1[0x19] - ecx_31, edx_12)
            arg1[0x15] = arg1[0x19]
            sub_49881e(*arg1)
            
            if (*(*arg1 + 0x10) != 0)
                int32_t eax_60
                eax_60.b = arg2 == 4
                return eax_60 * 2 + 1
            
            if (arg2 == 4)
                return 2
            
            break
    
    if (eax_1 u>= 3)
        int32_t edx_1 = arg1[0x19]
        int32_t eax_6 = (arg1[0x10] << (arg1[0x14]).b ^ zx.d(*(arg1[0xc] + edx_1 + 2))) & arg1[0x13]
        int32_t ecx_4 = arg1[0xf]
        arg1[0x10] = eax_6
        uint32_t eax_7 = zx.d(*(ecx_4 + (eax_6 << 1)))
        *(arg1[0xe] + ((arg1[0xb] & edx_1) << 1)) = eax_7.w
        int32_t edx_2
        edx_2.w = arg1[0x19].w
        var_8_1 = eax_7
        *(arg1[0xf] + (arg1[0x10] << 1)) = edx_2.w
    
    arg1[0x1c] = arg1[0x16]
    arg1[0x17] = arg1[0x1a]
    arg1[0x16] = 2
    
    if (var_8_1 != 0 && arg1[0x1c] u< arg1[0x1e] && arg1[0x19] - var_8_1 u<= arg1[9] - 0x106)
        if (arg1[0x20] != 2)
            arg1[0x16] = sub_498872(arg1, var_8_1)
        
        int32_t eax_15 = arg1[0x16]
        
        if (eax_15 u<= 5)
            if (arg1[0x20] == 1)
                arg1[0x16] = 2
            else if (eax_15 == 3 && arg1[0x19] - arg1[0x1a] u> 0x1000)
                arg1[0x16] = 2
    
    int32_t eax_18 = arg1[0x1c]
    
    if (eax_18 u>= 3 && arg1[0x16] u<= eax_18)
        int32_t ebx_3 = arg1[0x19] + arg1[0x1b] - 3
        int32_t ecx_11
        ecx_11.b = arg1[0x1c].b
        ecx_11.b -= 3
        int16_t eax_21 = arg1[0x19].w - arg1[0x17].w - 1
        *(arg1[0x5a7] + (arg1[0x5a6] << 1)) = eax_21
        arg1[0x5a4][arg1[0x5a6]] = ecx_11.b
        arg1[0x5a6] += 1
        void* ecx_14 = &arg1[zx.d(*(zx.d(ecx_11.b) + 0xace800)) + 0x124]
        *ecx_14 += 1
        uint32_t eax_23 = zx.d(eax_21 - 1)
        uint32_t eax_24
        
        if (eax_21 - 1 u>= 0x100)
            eax_24 = zx.d(*((eax_23 u>> 7) + 0xace700))
        else
            eax_24 = zx.d(*(eax_23 + 0xace600))
        
        arg1[eax_24 + 0x260].w += 1
        int32_t eax_29 = arg1[0x1c]
        int32_t ecx_15
        ecx_15.b = arg1[0x5a6] == arg1[0x5a5] - 1
        arg1[0x1b] += 1 - eax_29
        arg1[0x1c] = eax_29 - 2
        int32_t i
        
        do
            arg1[0x19] += 1
            int32_t edx_5 = arg1[0x19]
            
            if (edx_5 u<= ebx_3)
                int32_t eax_34 =
                    (arg1[0x10] << (arg1[0x14]).b ^ zx.d(*(arg1[0xc] + edx_5 + 2))) & arg1[0x13]
                int32_t ecx_20 = arg1[0xf]
                arg1[0x10] = eax_34
                uint32_t eax_35 = zx.d(*(ecx_20 + (eax_34 << 1)))
                *(arg1[0xe] + ((arg1[0xb] & edx_5) << 1)) = eax_35.w
                int32_t edx_6
                edx_6.w = arg1[0x19].w
                var_8_1 = eax_35
                *(arg1[0xf] + (arg1[0x10] << 1)) = edx_6.w
            
            i = arg1[0x1c]
            arg1[0x1c] -= 1
        while (i != 1)
        arg1[0x18] = 0
        arg1[0x19] += 1
        int32_t eax_37 = arg1[0x19]
        arg1[0x16] = 2
        
        if (ecx_15 == 0)
            continue
        else
            int32_t edx_7 = arg1[0x15]
            char* ecx_25
            
            if (edx_7 s< 0)
                ecx_25 = nullptr
            else
                ecx_25 = arg1[0xc] + edx_7
            
            sub_4e40a2(arg1, ecx_25, eax_37 - edx_7, 0)
            arg1[0x15] = arg1[0x19]
            sub_49881e(*arg1)
    else if (arg1[0x18] == 0)
        arg1[0x19] += 1
        arg1[0x1b] -= 1
        arg1[0x18] = 1
        continue
    else
        int32_t eax_42
        eax_42.b = *(arg1[0x19] + arg1[0xc] - 1)
        *(arg1[0x5a7] + (arg1[0x5a6] << 1)) = 0
        arg1[0x5a4][arg1[0x5a6]] = eax_42.b
        arg1[0x5a6] += 1
        arg1[zx.d(eax_42.b) + 0x23].w += 1
        
        if (arg1[0x5a6] == arg1[0x5a5] - 1)
            int32_t ecx_29 = arg1[0x15]
            char* eax_48
            
            if (ecx_29 s< 0)
                eax_48 = nullptr
            else
                eax_48 = arg1[0xc] + ecx_29
            
            sub_4e40a2(arg1, eax_48, arg1[0x19] - ecx_29, 0)
            arg1[0x15] = arg1[0x19]
            sub_49881e(*arg1)
        
        arg1[0x19] += 1
        arg1[0x1b] -= 1
    
    if (*(*arg1 + 0x10) == 0)
        break

return 0
