// 函数: sub_4294a6
// 地址: 0x4294a6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t* eax_1 = *arg2
int32_t* esi = arg4
int32_t* ecx_1 = *esi
int32_t edi
int32_t var_18 = edi
int32_t result = 0

if (eax_1[1] == ecx_1[1] && *eax_1 == *ecx_1 && eax_1[4] == ecx_1[4])
    int32_t* edx_4 = eax_1[2] + arg1
    void* var_c_1
    
    if (*edx_4 != 0)
        var_c_1 = &edx_4[1]
    else
        var_c_1 = nullptr
    
    int32_t* edx_7 = ecx_1[2] + arg3
    void* edx_8
    
    if (*edx_7 != 0)
        edx_8 = &edx_7[1]
    else
        edx_8 = nullptr
    
    int32_t* eax_3 = eax_1[3] + arg1
    void* ebx_2 = nullptr
    
    if (*eax_3 != 0)
        arg4 = &eax_3[1]
    else
        arg4 = nullptr
    
    int32_t* eax_6 = ecx_1[3] + arg3
    
    if (*eax_6 != 0)
        ebx_2 = &eax_6[1]
    
    void* eax_7 = var_c_1
    
    if (eax_7 != 0)
        if (edx_8 != 0)
            void* edi_3 = edx_8
            int32_t eax_11
            
            while (true)
                edx_8.b = *eax_7
                ecx_1.b = edx_8.b
                char temp1_1 = *edi_3
                bool c_1 = edx_8.b u< temp1_1
                
                if (edx_8.b == temp1_1)
                    if (ecx_1.b == 0)
                        eax_11 = 0
                        break
                    
                    edx_8.b = *(eax_7 + 1)
                    ecx_1.b = edx_8.b
                    char temp4_1 = *(edi_3 + 1)
                    c_1 = edx_8.b u< temp4_1
                    
                    if (edx_8.b == temp4_1)
                        eax_7 += 2
                        edi_3 += 2
                        
                        if (ecx_1.b != 0)
                            continue
                        
                        eax_11 = 0
                        break
                
                bool c_2 = unimplemented  {sbb eax, eax}
                eax_11 = sbb.d(sbb.d(eax_7, eax_7, c_1), 0xffffffff, c_2)
                break
            
            if (eax_11 == 0)
                goto label_42956f
    else if (edx_8 == 0)
    label_42956f:
        
        if (arg4 != 0)
            if (ebx_2 != 0 && __stricmp(arg4, ebx_2) == 0)
                goto label_429591
        else if (ebx_2 == 0)
        label_429591:
            int32_t* eax_13 = *arg2
            int32_t ecx_3 = eax_13[1]
            
            if (ecx_3 s>= 0)
                if (ecx_3 s<= 3)
                    void* ecx_5 = *esi
                    
                    if (eax_13[5] == *(ecx_5 + 0x14) && eax_13[6] == *(ecx_5 + 0x18))
                        *arg2 = &eax_13[7]
                        *esi += 0x1c
                        return result
                else
                    if (ecx_3 == 4)
                        int32_t eax_15 = *eax_13
                        
                        if (eax_15 s>= 5)
                            if (eax_15 s<= 9)
                                *arg5 = 1
                            else if (eax_15 s> 0xe && eax_15 s<= 0x10)
                                *arg5 = 1
                        
                        *arg2 += 0x14
                        *esi += 0x14
                        return result
                    
                    if (ecx_3 == 5)
                        int32_t edi_5 = eax_13[5]
                        
                        if (edi_5 == *(*esi + 0x14))
                            *arg2 = &eax_13[6]
                            *esi += 0x18
                            int32_t ebx_3 = 0
                            
                            if (edi_5 u> 0)
                                do
                                    int32_t result_1 = sub_4294a6(arg1, arg2, arg3, esi, arg5)
                                    result = result_1
                                    
                                    if (result_1 s< 0)
                                        break
                                    
                                    ebx_3 += 1
                                while (ebx_3 u< edi_5)
                            
                            return result

return 0x80004005
