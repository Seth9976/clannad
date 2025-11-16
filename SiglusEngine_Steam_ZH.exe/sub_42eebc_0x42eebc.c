// 函数: sub_42eebc
// 地址: 0x42eebc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg1
char* var_c = arg1
int32_t edi
int32_t var_18 = edi

while (true)
    int32_t result
    
    if (*(arg1 + 0x48) == 0)
        void* eax_1 = *(arg1 + 0x68)
        
        if (eax_1 == 0 || *(eax_1 + 8) != 0)
            void* edx_1 = *(arg1 + 0x64)
            int32_t* eax_2
            
            if (edx_1 == 0)
                sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), arg2)
                eax_2 = arg2
            else
                eax_2 = arg2
                __builtin_memcpy(eax_2, edx_1 + 0x10, 0x20)
                *(arg1 + 0x64) = *(*(arg1 + 0x64) + 0xc)
                *(edx_1 + 0xc) = 0
                eax_2[4] = *(*(arg1 + 0x26c) + 0x18)
                eax_2[5] = *(*(arg1 + 0x26c) + 0x1c)
                *(arg1 + 0x40) = 0
            
            if (*eax_2 == 1)
                void* edi_2 = &eax_2[2]
                void* const esi_2 = &data_ab7e18
                int32_t i = 2
                bool cond:1_1 = false
                
                while (i != 0)
                    char temp1_1 = *esi_2
                    char temp2_1 = *edi_2
                    cond:1_1 = temp1_1 != temp2_1
                    esi_2 += 1
                    edi_2 += 1
                    i -= 1
                    
                    if (temp1_1 != temp2_1)
                        break
                
                if (not(cond:1_1) && *(arg1 + 0x40) != 0)
                    data_b96718 = arg1
                    int32_t eax_3 = *(arg1 + 0x50)
                    *(arg1 + 0x40) = 0
                    *(arg1 + 0x44) = 0
                    *(arg1 + 0x4c) = 1
                    *(arg1 + 0x54) = eax_3
                    
                    if (sub_42e928() != 0)
                        *(arg1 + 0x44) = 1
                    
                    bool cond:5_1 = *(arg1 + 0x40) != 0
                    *(arg1 + 0x5c) = 0
                    
                    if (not(cond:5_1) && *(arg1 + 0x44) == 0)
                        sub_42b68f(*(arg1 + 0x26c), *(arg1 + 0x298), &arg1[0x278])
                        int32_t esi_4 = *(arg1 + 0x278)
                        
                        if (esi_4 == 0xc || esi_4 == 0xd)
                            *(arg1 + 0x40) = 1
                        else
                            if (*(arg1 + 0x50) != 0)
                                sub_42aba3(&arg1[0x18], arg2, 0x5dd, 
                                    "unexpected tokens following preprocessor directive")
                            
                            *(arg1 + 0x44) = 1
                    
                    if (*(arg1 + 0x40) == 0)
                        sub_42a6ee(*(arg1 + 0x26c))
                        int32_t* ecx_10 = *(arg1 + 0x26c)
                        *(arg1 + 0x64) = 0
                        sub_42b68f(ecx_10, *(arg1 + 0x298), &arg1[0x278])
                        *(arg1 + 0x40) = 1
                    
                    *(arg1 + 0x26c) = *(arg1 + 0x268)
                    int32_t eax_8 = *(arg1 + 0x54)
                    *(arg1 + 0x50) = eax_8
                    
                    if (eax_8 != 0)
                        break
                    
                    continue
            
            int32_t ecx_11 = *eax_2
            
            if (ecx_11 == 0xd)
                if (*(*(arg1 + 0x268) + 0x38) != 0)
                    sub_42aba3(&arg1[0x18], eax_2, 0x5de, "unexpected end of file")
                
                void* ecx_22 = *(arg1 + 0x268)
                
                if (*(ecx_22 + 0x6c) != 0)
                    *(arg1 + 0x268) = *(ecx_22 + 0x6c)
                    *(ecx_22 + 0x6c) = 0
                    sub_42b9e9(ecx_22, 1)
                    *(arg1 + 0x26c) = *(arg1 + 0x268)
                    *arg2 = 0xc
                    *(arg1 + 0x40) = 1
            else
                if (ecx_11 == 9)
                    if (sub_42cf1a(arg1, eax_2[2], &var_c, &var_8) != 0
                            && sub_42d32d(arg1, arg2, var_c, var_8) != 0)
                        continue
                    
                    eax_2 = arg2
                
                if (*eax_2 == 9)
                    char* esi_6 = eax_2[2]
                    char const* const edi_4 = "__FILE__"
                    int32_t i_1 = 9
                    bool cond:4_1 = false
                    
                    while (i_1 != 0)
                        char temp3_1 = *esi_6
                        char const temp4_1 = *edi_4
                        cond:4_1 = temp3_1 != temp4_1
                        esi_6 = &esi_6[1]
                        edi_4 = &edi_4[1]
                        i_1 -= 1
                        
                        if (temp3_1 != temp4_1)
                            break
                    
                    if (cond:4_1)
                        char* esi_7 = eax_2[2]
                        char const* const edi_5 = "__LINE__"
                        int32_t i_2 = 9
                        bool cond:7_1 = false
                        
                        while (i_2 != 0)
                            char temp5_1 = *esi_7
                            char const temp6_1 = *edi_5
                            cond:7_1 = temp5_1 != temp6_1
                            esi_7 = &esi_7[1]
                            edi_5 = &edi_5[1]
                            i_2 -= 1
                            
                            if (temp5_1 != temp6_1)
                                break
                        
                        if (not(cond:7_1))
                            *eax_2 = 2
                            eax_2[2] = *(*(arg1 + 0x26c) + 0x1c)
                    else
                        *eax_2 = 0xa
                        int32_t ecx_15 = *(*(arg1 + 0x26c) + 0x18)
                        eax_2[2] = ecx_15
                        
                        if (ecx_15 == 0)
                            eax_2[2] = &data_b0018c
                
                int32_t ecx_18
                ecx_18.b = *eax_2 == 0xc
                bool cond:2_1 = *(arg1 + 0x50) != 0
                *(arg1 + 0x40) = ecx_18
                
                if (cond:2_1)
                    void* ecx_23 = *(arg1 + 0x68)
                    
                    if (ecx_23 != 0 && *(ecx_23 + 4) != 0)
                        if (*eax_2 == 1 && *(eax_2 + 9) == 0)
                            if (eax_2[2].b == 0x7b)
                                *(ecx_23 + 8) += 1
                            
                            if (eax_2[2].b == 0x7d)
                                void* ecx_24 = *(arg1 + 0x68)
                                
                                if (*(ecx_24 + 8) != 0)
                                    *(ecx_24 + 8) -= 1
                        
                        if (*(*(arg1 + 0x68) + 8) == 0)
                            *eax_2 = 0xd
                else
                    continue
            
            return 0
        
        result = 0
    else
        result = 0x80004005
    
    arg2[4] = *(*(arg1 + 0x26c) + 0x18)
    arg2[5] = *(*(arg1 + 0x26c) + 0x1c)
    *arg2 = 0xd
    return result

__builtin_memcpy(arg2, &arg1[0x278], 0x20)

if (*(*(arg1 + 0x268) + 0x6c) != 0)
    *arg2 = 0xc

int32_t eax_11 = *(arg1 + 0x48)
int32_t eax_12 = neg.d(eax_11)
return sbb.d(eax_12, eax_12, eax_11 != 0) & 0x80004005
