// 函数: sub_42cc15
// 地址: 0x42cc15
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* eax = *arg1
int32_t ebx
int32_t var_14 = ebx
int32_t edi
int32_t var_1c = edi
char* esi = *arg2
int32_t eax_3

while (true)
    ebx.b = *eax
    char temp1_1 = *esi
    bool c_1 = ebx.b u< temp1_1
    
    if (ebx.b == temp1_1)
        if (ebx.b == 0)
            eax_3 = 0
            break
        
        ebx.b = eax[1]
        char temp4_1 = esi[1]
        c_1 = ebx.b u< temp4_1
        
        if (ebx.b == temp4_1)
            eax = &eax[2]
            esi = &esi[2]
            
            if (ebx.b != 0)
                continue
            
            eax_3 = 0
            break
    
    bool c_2 = unimplemented  {sbb eax, eax}
    eax_3 = sbb.d(sbb.d(eax, eax, c_1), 0xffffffff, c_2)
    break

if (eax_3 == 0)
    void* eax_4 = arg1[1]
    void* i = arg2[1]
    void* var_c_1 = eax_4
    void* i_1 = i
    
    if (eax_4 == 0)
    label_42cc7f:
        
        if (i == 0)
            void* edx_1 = arg1[2]
            int32_t* ecx_1 = arg2[2]
            
            while (true)
                arg2 = ecx_1
                
                if (edx_1 != 0)
                    if (ecx_1 != 0)
                        int32_t eax_5 = *(edx_1 + 0x10)
                        
                        if (eax_5 == ecx_1[4])
                            int32_t eax_10
                            
                            if (eax_5 s> 8)
                                char* eax_12
                                int32_t eax_24
                                bool c_4
                                
                                if (eax_5 != 9)
                                    if (eax_5 s> 9 && eax_5 s<= 0xb)
                                        char* esi_2 = ecx_1[6]
                                        eax_12 = *(edx_1 + 0x18)
                                        
                                        while (true)
                                            ebx.b = *eax_12
                                            ecx_1.b = ebx.b
                                            char temp9_1 = *esi_2
                                            c_4 = ebx.b u< temp9_1
                                            
                                            if (ebx.b == temp9_1)
                                                if (ecx_1.b == 0)
                                                    break
                                                
                                                ebx.b = eax_12[1]
                                                ecx_1.b = ebx.b
                                                char temp16_1 = esi_2[1]
                                                c_4 = ebx.b u< temp16_1
                                                
                                                if (ebx.b == temp16_1)
                                                    eax_12 = &eax_12[2]
                                                    esi_2 = &esi_2[2]
                                                    
                                                    if (ecx_1.b == 0)
                                                        break
                                                    
                                                    continue
                                            
                                        label_42ce49:
                                            bool c_9 = unimplemented  {sbb eax, eax}
                                            eax_24 =
                                                sbb.d(sbb.d(eax_12, eax_12, c_4), 0xffffffff, c_9)
                                            goto label_42ce52
                                        
                                        goto label_42cd60
                                    
                                label_42ce62:
                                    edx_1 = *(edx_1 + 0xc)
                                    ecx_1 = ecx_1[3]
                                    continue
                                
                                void* edi_2 = var_c_1
                                int32_t var_8_1 = 0
                                arg1 = 1
                                
                                if (edi_2 != 0)
                                    while (true)
                                        char* eax_14 = *(edi_2 + 0x18)
                                        char* esi_4 = *(edx_1 + 0x18)
                                        int32_t eax_17
                                        
                                        while (true)
                                            ebx.b = *esi_4
                                            ecx_1.b = ebx.b
                                            char temp6_1 = *eax_14
                                            bool c_5 = ebx.b u< temp6_1
                                            
                                            if (ebx.b == temp6_1)
                                                if (ecx_1.b == 0)
                                                    eax_17 = 0
                                                    break
                                                
                                                ebx.b = esi_4[1]
                                                ecx_1.b = ebx.b
                                                char temp11_1 = eax_14[1]
                                                c_5 = ebx.b u< temp11_1
                                                
                                                if (ebx.b == temp11_1)
                                                    esi_4 = &esi_4[2]
                                                    eax_14 = &eax_14[2]
                                                    
                                                    if (ecx_1.b != 0)
                                                        continue
                                                    
                                                    eax_17 = 0
                                                    break
                                            
                                            bool c_6 = unimplemented  {sbb eax, eax}
                                            eax_17 =
                                                sbb.d(sbb.d(eax_14, eax_14, c_5), 0xffffffff, c_6)
                                            break
                                        
                                        if (eax_17 == 0)
                                            var_8_1 = 1
                                            break
                                        
                                        edi_2 = *(edi_2 + 0xc)
                                        arg1 += 1
                                        
                                        if (edi_2 == 0)
                                            break
                                    
                                    ecx_1 = arg2
                                
                                void* i_2 = i_1
                                
                                while (true)
                                    arg1 -= 1
                                    
                                    if (i_2 == 0)
                                        break
                                    
                                    char* eax_18 = *(i_2 + 0x18)
                                    char* esi_6 = ecx_1[6]
                                    int32_t eax_21
                                    
                                    while (true)
                                        ebx.b = *esi_6
                                        ecx_1.b = ebx.b
                                        char temp10_1 = *eax_18
                                        bool c_7 = ebx.b u< temp10_1
                                        
                                        if (ebx.b == temp10_1)
                                            if (ecx_1.b == 0)
                                                eax_21 = 0
                                                break
                                            
                                            ebx.b = esi_6[1]
                                            ecx_1.b = ebx.b
                                            char temp17_1 = eax_18[1]
                                            c_7 = ebx.b u< temp17_1
                                            
                                            if (ebx.b == temp17_1)
                                                esi_6 = &esi_6[2]
                                                eax_18 = &eax_18[2]
                                                
                                                if (ecx_1.b != 0)
                                                    continue
                                                
                                                eax_21 = 0
                                                break
                                        
                                        bool c_8 = unimplemented  {sbb eax, eax}
                                        eax_21 = sbb.d(sbb.d(eax_18, eax_18, c_7), 0xffffffff, c_8)
                                        break
                                    
                                    ecx_1 = arg2
                                    
                                    if (eax_21 == 0)
                                        var_8_1 = 1
                                        break
                                    
                                    i_2 = *(i_2 + 0xc)
                                
                                if (var_8_1 != 0)
                                    eax_10.b = arg1 == 0
                                    goto label_42ce5a
                                
                                char* esi_8 = ecx_1[6]
                                eax_12 = *(edx_1 + 0x18)
                                
                                do
                                    ebx.b = *eax_12
                                    ecx_1.b = ebx.b
                                    char temp18_1 = *esi_8
                                    c_4 = ebx.b u< temp18_1
                                    
                                    if (ebx.b != temp18_1)
                                        goto label_42ce49
                                    
                                    if (ecx_1.b == 0)
                                        break
                                    
                                    ebx.b = eax_12[1]
                                    ecx_1.b = ebx.b
                                    char temp19_1 = esi_8[1]
                                    c_4 = ebx.b u< temp19_1
                                    
                                    if (ebx.b != temp19_1)
                                        goto label_42ce49
                                    
                                    eax_12 = &eax_12[2]
                                    esi_8 = &esi_8[2]
                                while (ecx_1.b != 0)
                                
                            label_42cd60:
                                eax_24 = 0
                            label_42ce52:
                                int32_t ecx_2
                                ecx_2.b = eax_24 == 0
                                eax_10 = ecx_2
                                ecx_1 = arg2
                                goto label_42ce5a
                            else if (eax_5 s>= 5)
                                long double x87_r7_1 = fconvert.t(*(ecx_1 + 0x18))
                                long double x87_r6_1 = fconvert.t(*(edx_1 + 0x18))
                                x87_r6_1 - x87_r7_1
                                eax_5.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                                    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                                bool p_1 = unimplemented  {test ah, 0x44}
                                
                                if (not(p_1))
                                    goto label_42ce62
                            else if (eax_5 == 0)
                            label_42ccc3:
                                int32_t eax_7 = *(edx_1 + 0x18) - ecx_1[6]
                                int32_t eax_8 = neg.d(eax_7)
                                eax_10 = sbb.d(eax_8, eax_8, eax_7 != 0) + 1
                            label_42ce5a:
                                
                                if (eax_10 != 0)
                                    goto label_42ce62
                            else
                                if (eax_5 != 1)
                                    if (eax_5 s<= 1 || eax_5 s> 4)
                                        goto label_42ce62
                                    
                                    goto label_42ccc3
                                
                                eax_5.b = *(edx_1 + 0x18)
                                
                                if (eax_5.b == ecx_1[6].b)
                                    eax_5.b = *(edx_1 + 0x19)
                                    
                                    if (eax_5.b == *(ecx_1 + 0x19))
                                        eax_5.b = *(edx_1 + 0x1a)
                                        
                                        if (eax_5.b == *(ecx_1 + 0x1a))
                                            eax_5.b = *(edx_1 + 0x1b)
                                            
                                            if (eax_5.b == *(ecx_1 + 0x1b))
                                                goto label_42ce62
                    
                    if (edx_1 != 0)
                        break
                
                if (ecx_1 != 0)
                    break
                
                return 1
    else
        while (i != 0)
            eax_4 = *(eax_4 + 0xc)
            i = *(i + 0xc)
            
            if (eax_4 == 0)
                break
        
        if (eax_4 == 0)
            goto label_42cc7f

return 0
