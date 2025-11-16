// 函数: sub_467ab5
// 地址: 0x467ab5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg1
char edx = result[2].b

if (edx != 3)
    arg1 = nullptr
    int32_t ecx_1 = *result
    int32_t edi
    int32_t var_24_1 = edi
    uint32_t edx_2
    int32_t ebx_3
    
    if ((edx & 2) == 0)
        edx_2 = zx.d(*(result + 9)) - zx.d(arg3[3])
        ebx_3 = 1
    else
        uint32_t ecx_2 = zx.d(*(result + 9))
        edx_2 = ecx_2 - zx.d(*arg3)
        uint32_t var_14_1 = ecx_2 - zx.d(arg3[1])
        uint32_t var_10_1 = ecx_2 - zx.d(arg3[2])
        ebx_3 = 3
    
    bool cond:1_1 = (result[2].b & 4) == 0
    uint32_t var_18 = edx_2
    
    if (not(cond:1_1))
        (&var_18)[ebx_3] = zx.d(*(result + 9)) - zx.d(arg3[4])
        edx_2 = var_18
        ebx_3 += 1
    
    int32_t edi_5 = 0
    
    if (ebx_3 s> 0)
        do
            int32_t __saved_ebp
            
            if ((&__saved_ebp)[edi_5 - 5] s> 0)
                arg1 = 1
            else
                (&__saved_ebp)[edi_5 - 5] = 0
                edx_2 = var_18
            
            edi_5 += 1
        while (edi_5 s< ebx_3)
        
        int32_t edi_6 = 0
        
        if (arg1.w != 0)
            int32_t esi_6 = zx.d(*(result + 9)) - 1
            
            if (esi_6 == 1)
                result = result[1]
                char* ecx_7 = arg2
                
                if (result u> 0)
                    int32_t* i
                    
                    do
                        edx_2.b = *ecx_7
                        edx_2.b u>>= 1
                        edx_2.b &= 0x55
                        *ecx_7 = edx_2.b
                        ecx_7 = &ecx_7[1]
                        i = result
                        result -= 1
                    while (i != 1)
            else if (esi_6 == 3)
                int32_t i_2 = result[1]
                char* esi_15 = arg2
                char ecx_6 = edx_2.b
                result.b = (0xf0 s>> ecx_6).b & 0xf0
                result.b |= (0xf s>> ecx_6).b
                
                if (i_2 u> 0)
                    int32_t i_1
                    
                    do
                        *esi_15 = *esi_15 u>> edx_2.b & result.b
                        esi_15 = &esi_15[1]
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
            else if (esi_6 == 7)
                char* esi_14 = arg2
                char* ecx_5 = ecx_1 * ebx_3
                arg2 = ecx_5
                
                if (ecx_5 u> 0)
                    do
                        int32_t edx_7 = 0
                        result = divu.dp.d(edx_7:edi_6, ebx_3)
                        ecx_5.b = (&var_18)[modu.dp.d(edx_7:edi_6, ebx_3)].b
                        *esi_14 u>>= ecx_5.b
                        esi_14 = &esi_14[1]
                        edi_6 += 1
                    while (edi_6 u< arg2)
            else if (esi_6 == 0xf)
                char* esi_12 = arg2
                char* ecx_4 = ecx_1 * ebx_3
                arg3 = ecx_4
                arg2 = nullptr
                
                if (ecx_4 u> 0)
                    do
                        uint32_t eax_1
                        eax_1.w = zx.w(*esi_12)
                        ecx_4.w = zx.w(esi_12[1])
                        uint16_t eax_3 = (eax_1 << 8).w + ecx_4.w
                        ecx_4.w = (&var_18)[modu.dp.d(0:arg2, ebx_3)].w
                        eax_3 u>>= ecx_4.b
                        *esi_12 = eax_3:1.b
                        esi_12[1] = eax_3.b
                        esi_12 = &esi_12[2]
                        arg2 = &arg2[1]
                        result = arg2
                    while (result u< arg3)

return result
