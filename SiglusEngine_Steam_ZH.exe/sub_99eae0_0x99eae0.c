// 函数: sub_99eae0
// 地址: 0x99eae0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t edx
int32_t* result = sub_74c590(eax, edx, arg1, 1, 0x28)
result[9] = 1

if (sub_742fa0(arg1, 0x18) == 0x564342)
    *result = sub_742fa0(arg1, 0x10)
    uint32_t i_1 = sub_742fa0(arg1, 0x18)
    result[1] = i_1
    
    if (i_1 != 0xffffffff)
        uint32_t i = *result
        int32_t edx_1 = 0
        
        for (; i != 0; i u>>= 1)
            edx_1 += 1
        
        int32_t ecx_3 = 0
        
        for (; i_1 != 0; i_1 u>>= 1)
            ecx_3 += 1
        
        if (ecx_3 + edx_1 s<= 0x18)
            int32_t eax_4 = sub_742fa0(arg1, 1)
            
            if (eax_4 == 0)
                int32_t eax_17 = sub_742fa0(arg1, 1)
                uint32_t edi_3 = result[1]
                int32_t eax_20
                int32_t edx_4
                edx_4:eax_20 = sx.q(arg1[1] + 7)
                int32_t eax_23
                eax_23.b = eax_17 == 0
                
                if ((((eax_23 << 2) + 1) * edi_3 + 7) s>> 3
                        s<= arg1[4] - ((eax_20 + (edx_4 & 7)) s>> 3) - *arg1)
                    char* edi_4 = nullptr
                    result[2] = _malloc(edi_3)
                    int32_t eax_29 = result[1]
                    
                    if (eax_17 != 0)
                        if (eax_29 s<= 0)
                            goto label_99ed11
                        
                        char* edi_5 = nullptr
                        
                        while (true)
                            if (sub_742fa0(arg1, 1) == 0)
                                edi_5[result[2]] = 0
                            else
                                int32_t eax_31 = sub_742fa0(arg1, 5)
                                
                                if (eax_31 == 0xffffffff)
                                    break
                                
                                eax_31.b += 1
                                edi_5[result[2]] = eax_31.b
                            
                            edi_5 = &edi_5[1]
                            
                            if (edi_5 s>= result[1])
                                goto label_99ed11
                    else if (eax_29 s<= 0)
                    label_99ed11:
                        int32_t eax_34 = sub_742fa0(arg1, 4)
                        result[3] = eax_34
                        
                        if (eax_34 == 0)
                            return result
                        
                        if (eax_34 - 1 u<= 1)
                            result[4] = sub_742fa0(arg1, 0x20)
                            result[5] = sub_742fa0(arg1, 0x20)
                            result[6] = sub_742fa0(arg1, 4) + 1
                            int32_t eax_40 = sub_742fa0(arg1, 1)
                            result[7] = eax_40
                            
                            if (eax_40 != 0xffffffff)
                                int32_t eax_41 = result[3]
                                int32_t edi_6 = 0
                                int32_t var_8_2 = 0
                                
                                if (eax_41 == 1)
                                    if (*result != 0)
                                        int32_t eax_44 = sub_99d4d0(result)
                                        edi_6 = eax_44
                                        var_8_2 = eax_44
                                    else
                                        edi_6 = 0
                                        var_8_2 = 0
                                else if (eax_41 == 2)
                                    edi_6 = *result * result[1]
                                    var_8_2 = edi_6
                                
                                int32_t eax_47
                                int32_t edx_6
                                edx_6:eax_47 = sx.q(arg1[1] + 7)
                                
                                if ((result[6] * edi_6 + 7) s>> 3
                                        s<= arg1[4] - ((eax_47 + (edx_6 & 7)) s>> 3) - *arg1)
                                    int32_t eax_54 = edi_6 << 2
                                    result[8] = _malloc(eax_54)
                                    int32_t edi_8 = 0
                                    bool cond:1_1 = var_8_2 == 0
                                    
                                    if (var_8_2 s> 0)
                                        do
                                            *(result[8] + (edi_8 << 2)) =
                                                sub_742fa0(arg1, result[6])
                                            edi_8 += 1
                                        while (edi_8 s< var_8_2)
                                        
                                        cond:1_1 = var_8_2 == 0
                                    
                                    if (cond:1_1 || *(eax_54 + result[8] - 4) != 0xffffffff)
                                        return result
                    else
                        while (true)
                            int32_t eax_33 = sub_742fa0(arg1, 5)
                            
                            if (eax_33 == 0xffffffff)
                                break
                            
                            eax_33.b += 1
                            edi_4[result[2]] = eax_33.b
                            edi_4 = &edi_4[1]
                            
                            if (edi_4 s>= result[1])
                                goto label_99ed11
            else if (eax_4 == 1)
                int32_t eax_7 = sub_742fa0(arg1, eax_4 + 4)
                int32_t var_8_1 = eax_7 + 1
                
                if (eax_7 != 0xffffffff)
                    uint32_t edi_1 = result[1]
                    result[2] = _malloc(edi_1)
                    char* ebx_1 = nullptr
                    
                    if (edi_1 s<= 0)
                        goto label_99ed11
                    
                    int32_t var_c_1 = var_8_1 - 1
                    
                    while (true)
                        int32_t eax_12 = result[1]
                        int32_t edx_3 = 0
                        uint32_t i_2 = eax_12 - ebx_1
                        
                        if (eax_12 != ebx_1)
                            do
                                edx_3 += 1
                                i_2 u>>= 1
                            while (i_2 != 0)
                        
                        int32_t i_4 = sub_742fa0(arg1, edx_3)
                        
                        if (i_4 == 0xffffffff)
                            break
                        
                        if (var_c_1 s> 0x1f)
                            break
                        
                        if (i_4 s> result[1] - ebx_1)
                            break
                        
                        if (i_4 s> 0)
                            if ((i_4 - 1) s>> var_c_1.b s> 1)
                                break
                            
                            if (i_4 s> 0)
                                int32_t i_3
                                
                                do
                                    ebx_1[result[2]] = var_8_1.b
                                    ebx_1 = &ebx_1[1]
                                    i_3 = i_4
                                    i_4 -= 1
                                while (i_3 != 1)
                        
                        var_8_1 += 1
                        var_c_1 += 1
                        
                        if (ebx_1 s>= result[1])
                            goto label_99ed11

if (result[9] != 0)
    int32_t eax_61 = result[8]
    
    if (eax_61 != 0)
        _free(eax_61)
    
    int32_t eax_62 = result[2]
    
    if (eax_62 != 0)
        _free(eax_62)
    
    __builtin_memset(result, 0, 0x28)
    _free(result)

return 0
