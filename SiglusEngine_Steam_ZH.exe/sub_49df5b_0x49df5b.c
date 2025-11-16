// 函数: sub_49df5b
// 地址: 0x49df5b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
char* edi_1 = arg2

if (edi_1 s< 0)
    *arg3 = neg.d(edi_1)
    return 0

char* var_14_1 = edi_1

if (_isspace(sx.d(*edi_1)) != 0)
    bool cond:3_1
    
    do
        edi_1 = &edi_1[1]
        cond:3_1 = _isspace(sx.d(*edi_1)) != 0
    while (cond:3_1)
    var_14_1 = edi_1

if (_isalnum(sx.d(*edi_1)) == 0)
    int32_t eax_7
    eax_7.b = *edi_1
    
    if (eax_7.b != 0x5f && eax_7.b != 0x24)
        return 0x8876086c

void* var_8_1 = 1

while (true)
    void* esi_1 = var_8_1 + edi_1
    
    if (_isalnum(sx.d(*esi_1)) == 0 && *esi_1 != 0x5f)
        void* eax_11 = *(arg1 + 0x10)
        uint32_t eax_12 = *(eax_11 + 0xc)
        uint32_t esi_2 = 0
        int32_t var_c_1 = 0
        int32_t edi_4 = *(eax_11 + 0x10) + *(arg1 + 8)
        arg2 = eax_12
        
        if (eax_12 u> 0)
            do
                esi_2 = (arg2 + var_c_1) u>> 1
                *(edi_4 + esi_2 * 0x14)
                *(arg1 + 8)
                int32_t eax_17 = sub_49ab18(var_14_1, var_8_1)
                
                if (eax_17 == 0)
                    break
                
                if (eax_17 s>= 0)
                    arg2 = esi_2
                else
                    var_c_1 = esi_2 + 1
            while (var_c_1 u< arg2)
        
        if (var_c_1 != arg2)
            int32_t* eax_22 = edi_4 + esi_2 * 0x14
            char* ecx_7 = *eax_22 + *(arg1 + 8)
            
            if (esi_2 != 0)
                void* eax_23 = &eax_22[-5]
                void* var_18_1 = eax_23
                
                while (true)
                    char* eax_25 = *eax_23 + *(arg1 + 8)
                    
                    if (ecx_7 != eax_25)
                        char* var_10_1 = eax_25
                        char* var_c_2 = ecx_7
                        int32_t eax_28
                        
                        while (true)
                            char* eax_26
                            eax_26.b = *var_c_2
                            arg2:3.b = eax_26.b
                            char temp2_1 = *var_10_1
                            bool c_1 = eax_26.b u< temp2_1
                            
                            if (eax_26.b == temp2_1)
                                if (eax_26.b == 0)
                                    eax_28 = 0
                                    break
                                
                                eax_26.b = var_c_2[1]
                                arg2:3.b = eax_26.b
                                char temp8_1 = var_10_1[1]
                                c_1 = eax_26.b u< temp8_1
                                
                                if (eax_26.b == temp8_1)
                                    var_c_2 = &var_c_2[2]
                                    var_10_1 = &var_10_1[2]
                                    
                                    if (eax_26.b != 0)
                                        continue
                                    
                                    eax_28 = 0
                                    break
                            
                            bool c_2 = unimplemented  {sbb eax, eax}
                            eax_28 = sbb.d(sbb.d(eax_26, eax_26, c_1), 0xffffffff, c_2)
                            break
                        
                        if (eax_28 != 0)
                            break
                    
                    esi_2 -= 1
                    eax_23 = var_18_1 - 0x14
                    var_18_1 = eax_23
                    
                    if (esi_2 == 0)
                        break
            
            uint32_t eax_31 = var_8_1 + var_14_1
            int32_t eax_33 = sub_49de0d(*(*(arg1 + 0x14) + (esi_2 << 2)), eax_31, 0)
            
            if (eax_33 != 0)
                uint32_t edi_5 = edi_4 + esi_2 * 0x14
                
                while (true)
                    *arg3 = eax_33
                    arg3 = eax_33 + 0x24
                    esi_2 += 1
                    
                    if (esi_2 u>= *(*(arg1 + 0x10) + 0xc))
                        return 0
                    
                    char* eax_37 = *(edi_5 + 0x14) + *(arg1 + 8)
                    char* edi_7 = ecx_7
                    
                    if (edi_7 != eax_37)
                        int32_t eax_40
                        
                        while (true)
                            char edx_2 = *edi_7
                            int32_t* ecx_11
                            ecx_11.b = edx_2
                            char temp3_1 = *eax_37
                            bool c_3 = edx_2 u< temp3_1
                            
                            if (edx_2 == temp3_1)
                                if (ecx_11.b == 0)
                                    eax_40 = 0
                                    break
                                
                                edx_2 = edi_7[1]
                                ecx_11.b = edx_2
                                char temp9_1 = eax_37[1]
                                c_3 = edx_2 u< temp9_1
                                
                                if (edx_2 == temp9_1)
                                    edi_7 = &edi_7[2]
                                    eax_37 = &eax_37[2]
                                    
                                    if (ecx_11.b != 0)
                                        continue
                                    
                                    eax_40 = 0
                                    break
                            
                            bool c_4 = unimplemented  {sbb eax, eax}
                            eax_40 = sbb.d(sbb.d(eax_37, eax_37, c_3), 0xffffffff, c_4)
                            break
                        
                        if (eax_40 != 0)
                            return 0
                    
                    eax_33 = sub_49de0d(*(*(arg1 + 0x14) + (esi_2 << 2)), eax_31, 0)
                    
                    if (eax_33 == 0)
                        break
                    
                    edi_5 += 0x14
        
        return 0x8876086c
    
    var_8_1 += 1
