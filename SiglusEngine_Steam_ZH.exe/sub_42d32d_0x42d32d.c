// 函数: sub_42d32d
// 地址: 0x42d32d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* i_12 = nullptr
int32_t var_10 = 0
int32_t* eax = arg1
int32_t edi
int32_t var_88 = edi
int32_t* var_8 = eax

if (arg3 == 0)
    char* i = arg4
    int32_t* edi_1 = &var_10
    
    if (i != 0)
        do
            void*** eax_1 = sub_42cfa1(0x30)
            void*** eax_2
            
            if (eax_1 == 0)
                eax_2 = nullptr
            else
                eax_2 = sub_46b809(eax_1, &i[0x10])
            
            *edi_1 = eax_2
            
            if (eax_2 == 0)
                return 0
            
            i = *(i + 0xc)
            edi_1 = &eax_2[3]
        while (i != 0)
        
        eax = var_8
    
    *edi_1 = eax[0x19]
    eax[0x19] = var_10
    return 1

void* edx_1 = eax[0x19]
char* var_1c_1
void* var_14_1
int32_t* ebx_1

if (edx_1 == 0)
    char** esi_3 = eax[0x9b]
    char* i_1 = *esi_3
    int32_t edi_4 = esi_3[1]
    
    if (i_1 u>= edi_4)
        goto label_42d436
    
    do
        arg1.b = *i_1
        
        if (arg1.b != 0x20)
            if (arg1.b s< 9)
                break
            
            if (arg1.b s> 0xd)
                break
        
        i_1 = &i_1[1]
    while (i_1 u< eax[0x9b][1])
    
    if (i_1 u>= edi_4)
        goto label_42d436
    
    if (*i_1 == 0x28)
        eax = var_8
    label_42d436:
        var_14_1 = &eax[0x9e]
        sub_42b68f(esi_3, eax[0xa6], &eax[0x9e])
        
        if (eax[0x9e] == 1)
            char* esi_5 = &var_8[0xa0]
            wchar32 const* const edi_6 = &(*U")(;:")[1]
            int32_t i_2 = 2
            bool cond:8_1 = false
            var_1c_1 = esi_5
            
            while (i_2 != 0)
                char temp1_1 = *esi_5
                char temp2_1 = *edi_6
                cond:8_1 = temp1_1 != temp2_1
                esi_5 = &esi_5[1]
                edi_6 += 1
                i_2 -= 1
                
                if (temp1_1 != temp2_1)
                    break
            
            if (not(cond:8_1))
                ebx_1 = var_8
                goto label_42d470
else
    __builtin_memcpy(&eax[0x9e], edx_1 + 0x10, 0x20)
    var_14_1 = &eax[0x9e]
    
    if (eax[0x9e] == 1)
        char* esi_2 = &var_8[0xa0]
        wchar32 const* const edi_3 = &(*U")(;:")[1]
        int32_t i_3 = 2
        bool cond:4_1 = false
        var_1c_1 = esi_2
        
        while (i_3 != 0)
            char temp3_1 = *esi_2
            char temp4_1 = *edi_3
            cond:4_1 = temp3_1 != temp4_1
            esi_2 = &esi_2[1]
            edi_3 += 1
            i_3 -= 1
            
            if (temp3_1 != temp4_1)
                break
        
        if (not(cond:4_1))
            ebx_1 = var_8
            ebx_1[0x19] = *(edx_1 + 0xc)
            *(edx_1 + 0xc) = 0
        label_42d470:
            void* var_18_1 = nullptr
            int32_t i_4 = 1
            void* var_24_1 = &i_12
            
            do
                void* eax_5 = ebx_1[0x19]
                void* edi_7 = var_14_1
                
                if (eax_5 == 0)
                    sub_42b68f(ebx_1[0x9b], ebx_1[0xa6], edi_7)
                    ebx_1 = var_8
                else
                    __builtin_memcpy(edi_7, eax_5 + 0x10, 0x20)
                    edi_7 = var_14_1
                    ebx_1[0x19] = *(eax_5 + 0xc)
                    *(eax_5 + 0xc) = 0
                
                if (*edi_7 == 0xd)
                    sub_42aba3(&ebx_1[6], arg2, 0x5eb, "unexpected end of file in macro expansion")
                    return 0
                
                void** esi_7 = var_24_1
                
                if (*esi_7 == 0)
                    void*** eax_6 = sub_42cfa1(0x14)
                    void*** eax_7
                    
                    if (eax_6 == 0)
                        eax_7 = nullptr
                    else
                        eax_7 = sub_46b602(eax_6, 0, 0, 0xab7e1c)
                    
                    *esi_7 = eax_7
                    
                    if (eax_7 == 0)
                        return 0
                    
                    ebx_1 = var_8
                    var_18_1 = &eax_7[2]
                
                char* eax_9
                
                if (i_4 == 1 && *edi_7 == 1)
                    eax_9.b = *var_1c_1
                
                if (i_4 == 1 && *edi_7 == 1 && (eax_9.b == 0x2c || eax_9.b == 0x29)
                        && *(ebx_1 + 0x281) == 0)
                    var_24_1 = *esi_7 + 0xc
                else
                    void*** eax_12 = sub_42cfa1(0x30)
                    void*** eax_13
                    
                    if (eax_12 == 0)
                        eax_13 = nullptr
                    else
                        eax_13 = sub_46b809(eax_12, edi_7)
                    
                    *var_18_1 = eax_13
                    
                    if (eax_13 == 0)
                        return 0
                    
                    ebx_1 = var_8
                    var_18_1 = &eax_13[3]
                
                if (*edi_7 == 1 && *(ebx_1 + 0x281) == 0)
                    switch (sx.d(*var_1c_1))
                        case 0x28
                            i_4 += 1
                        case 0x29
                            i_4 -= 1
                        case 0x5b
                            i_4 += 1
                        case 0x5d
                            i_4 -= 1
                        case 0x7b
                            i_4 += 1
                        case 0x7d
                            i_4 -= 1
            while (i_4 != 0)
            
            void* ecx_10 = arg3
            char* i_5 = i_12
            
            while (i_5 != 0)
                if (*(i_5 + 8) == 0)
                    break
                
                ecx_10 = *(ecx_10 + 0xc)
                i_5 = *(i_5 + 0xc)
                
                if (ecx_10 == 0)
                    break
            
            if (ecx_10 == 0 && i_5 == 0)
                arg2 = &var_10
                char* eax_25 = arg4
                int32_t var_c_1 = 0
                int32_t var_14_2 = 0
                void* var_1c_2 = nullptr
                char* var_24_2 = eax_25
                void var_7c
                
                if (eax_25 != 0)
                    while (true)
                        int32_t* var_18_2 = arg2
                        
                        if (var_c_1 != 0 || var_14_2 != 0)
                        label_42d65d:
                            void* eax_27
                            
                            if (*(eax_25 + 0x10) == 9)
                                eax_27 = arg3
                                arg4 = i_12
                                
                                while (true)
                                    char* edi_10 = *(eax_25 + 0x18)
                                    char* esi_10 = *(eax_27 + 0x18)
                                    int32_t ecx_14
                                    
                                    while (true)
                                        char edx_2 = *esi_10
                                        char* ecx_12
                                        ecx_12.b = edx_2
                                        char temp13_1 = *edi_10
                                        bool c_1 = edx_2 u< temp13_1
                                        
                                        if (edx_2 == temp13_1)
                                            if (ecx_12.b == 0)
                                                ecx_14 = 0
                                                break
                                            
                                            edx_2 = esi_10[1]
                                            ecx_12.b = edx_2
                                            char temp18_1 = edi_10[1]
                                            c_1 = edx_2 u< temp18_1
                                            
                                            if (edx_2 == temp18_1)
                                                esi_10 = &esi_10[2]
                                                edi_10 = &edi_10[2]
                                                
                                                if (ecx_12.b != 0)
                                                    continue
                                                
                                                ecx_14 = 0
                                                break
                                        
                                        bool c_2 = unimplemented  {sbb ecx, ecx}
                                        ecx_14 = sbb.d(sbb.d(ecx_12, ecx_12, c_1), 0xffffffff, c_2)
                                        break
                                    
                                    if (ecx_14 == 0)
                                        break
                                    
                                    eax_27 = *(eax_27 + 0xc)
                                    arg4 = *(arg4 + 0xc)
                                    
                                    if (eax_27 == 0)
                                        break
                            
                            if (*(eax_25 + 0x10) != 9 || eax_27 == 0)
                                void*** eax_32 = sub_42cfa1(0x30)
                                void*** eax_33
                                
                                if (eax_32 == 0)
                                    eax_33 = nullptr
                                else
                                    eax_33 = sub_46b809(eax_32, &eax_25[0x10])
                                
                                *arg2 = eax_33
                                
                                if (eax_33 == 0)
                                    return 0
                                
                                arg2 = &eax_33[3]
                            else
                                void* i_6 = *(arg4 + 8)
                                
                                while (i_6 != 0)
                                    void*** eax_29 = sub_42cfa1(0x30)
                                    void*** eax_30
                                    
                                    if (eax_29 == 0)
                                        eax_30 = nullptr
                                    else
                                        eax_30 = sub_46b809(eax_29, i_6 + 0x10)
                                    
                                    *arg2 = eax_30
                                    
                                    if (eax_30 == 0)
                                        return 0
                                    
                                    i_6 = *(i_6 + 0xc)
                                    arg2 = &eax_30[3]
                            
                            if (var_c_1 != 0 || var_14_2 != 0)
                                void* i_7 = *var_18_2
                                int32_t eax_35 = 0
                                void* edi_12 = 1
                                
                                for (; i_7 != 0; i_7 = *(i_7 + 0xc))
                                    if (eax_35 != 0 && eax_35 != *(i_7 + 0x28))
                                        edi_12 += 1
                                    
                                    edi_12 += sub_42cfba(*(i_7 + 0x28), *(i_7 + 0x2c), 0)
                                    eax_35 = *(i_7 + 0x28) + *(i_7 + 0x2c)
                                
                                char* eax_38 = sub_46b465(var_8, edi_12 + 1, 1)
                                
                                if (eax_38 == 0)
                                    return 0
                                
                                int32_t eax_39 = 0
                                arg4 = 1
                                void* ebx_2
                                ebx_2.b = var_c_1 == 0
                                ebx_2.b -= 1
                                ebx_2.b &= 0xfb
                                ebx_2.b += 0x27
                                *eax_38 = ebx_2.b
                                
                                for (void* i_8 = *var_18_2; i_8 != 0; i_8 = *(i_8 + 0xc))
                                    if (eax_39 != 0 && eax_39 != *(i_8 + 0x28))
                                        char* eax_40 = arg4
                                        arg4 = &arg4[1]
                                        *(eax_38 + eax_40) = 0x20
                                    
                                    arg4 += sub_42cfba(*(i_8 + 0x28), *(i_8 + 0x2c), arg4 + eax_38)
                                    eax_39 = *(i_8 + 0x2c) + *(i_8 + 0x28)
                                
                                *(eax_38 + arg4) = ebx_2.b
                                sub_42a66a(&var_7c)
                                
                                if (sub_42a684(&var_7c, eax_38, &arg4[1], *(var_1c_2 + 0x10), 
                                        *(var_1c_2 + 0x14), var_8, &var_8[6]) s< 0)
                                    return 0
                                
                                void var_44
                                sub_42b68f(&var_7c, var_8[0xa6], &var_44)
                                void*** eax_48 = sub_42cfa1(0x30)
                                void*** eax_49
                                
                                if (eax_48 == 0)
                                    eax_49 = nullptr
                                else
                                    eax_49 = sub_46b809(eax_48, &var_44)
                                
                                *var_18_2 = eax_49
                                
                                if (eax_49 == 0)
                                    return 0
                                
                                var_14_2 = 0
                                var_c_1 = 0
                                arg2 = &eax_49[3]
                        else
                            bool cond:19_1
                            
                            if (*(eax_25 + 0x10) == 1)
                                void* const edi_8 = &data_ab7e18
                                void* esi_8 = &eax_25[0x18]
                                int32_t i_9 = 2
                                cond:19_1 = false
                                
                                while (i_9 != 0)
                                    char temp16_1 = *esi_8
                                    char temp17_1 = *edi_8
                                    cond:19_1 = temp16_1 != temp17_1
                                    esi_8 += 1
                                    edi_8 += 1
                                    i_9 -= 1
                                    
                                    if (temp16_1 != temp17_1)
                                        break
                            
                            if (*(eax_25 + 0x10) != 1 || cond:19_1)
                                if (*(eax_25 + 0x10) != 1)
                                    goto label_42d65d
                                
                                void* const edi_9 = &data_ab7de8
                                void* esi_9 = &eax_25[0x18]
                                int32_t i_10 = 3
                                bool cond:23_1 = false
                                
                                while (i_10 != 0)
                                    char temp19_1 = *esi_9
                                    char temp20_1 = *edi_9
                                    cond:23_1 = temp19_1 != temp20_1
                                    esi_9 += 1
                                    edi_9 += 1
                                    i_10 -= 1
                                    
                                    if (temp19_1 != temp20_1)
                                        break
                                
                                if (cond:23_1)
                                    goto label_42d65d
                                
                                var_1c_2 = &eax_25[0x10]
                                var_14_2 = 1
                            else
                                var_1c_2 = &eax_25[0x10]
                                var_c_1 = 1
                        
                        eax_25 = *(var_24_2 + 0xc)
                        var_24_2 = eax_25
                        
                        if (eax_25 == 0)
                            break
                    
                    ebx_1 = var_8
                
                arg2 = &var_10
                
                if (var_10 != 0)
                    int32_t* eax_75
                    
                    do
                        void* eax_53 = *arg2
                        void* ecx_31 = *(eax_53 + 0xc)
                        
                        if (ecx_31 == 0)
                            i_12 = nullptr
                        else
                            i_12 = *(ecx_31 + 0xc)
                        
                        int32_t eax_56 = neg.d(ecx_31)
                        void* eax_58 = sbb.d(eax_56, eax_56, ecx_31 != 0) & (ecx_31 + 0x10)
                        char* i_14 = i_12
                        int32_t ebx_6 = neg.d(i_14)
                        void* ebx_8 = sbb.d(ebx_6, ebx_6, i_14 != 0) & &i_14[0x10]
                        
                        if (ecx_31 != 0 && i_14 != 0 && *eax_58 == 1)
                            void* esi_15 = eax_58 + 8
                            void* const edi_15 = &data_ab7de4
                            int32_t i_11 = 3
                            bool cond:25_1 = false
                            
                            while (i_11 != 0)
                                char temp21_1 = *esi_15
                                char temp22_1 = *edi_15
                                cond:25_1 = temp21_1 != temp22_1
                                esi_15 += 1
                                edi_15 += 1
                                i_11 -= 1
                                
                                if (temp21_1 != temp22_1)
                                    break
                            
                            if (not(cond:25_1))
                                void* eax_62 = *(eax_53 + 0x2c) + *(ebx_8 + 0x1c)
                                char* eax_63 = sub_46b465(var_8, eax_62, 1)
                                
                                if (eax_63 == 0)
                                    return 0
                                
                                int32_t ecx_33 = *(eax_53 + 0x2c)
                                int32_t esi_17
                                int32_t edi_17
                                edi_17, esi_17 =
                                    __builtin_memcpy(eax_63, *(eax_53 + 0x28), ecx_33 u>> 2 << 2)
                                __builtin_memcpy(edi_17, esi_17, ecx_33 & 3)
                                int32_t ecx_37 = *(ebx_8 + 0x1c)
                                int32_t esi_19
                                int32_t edi_20
                                edi_20, esi_19 = __builtin_memcpy(*(eax_53 + 0x2c) + eax_63, 
                                    *(ebx_8 + 0x18), ecx_37 u>> 2 << 2)
                                __builtin_memcpy(edi_20, esi_19, ecx_37 & 3)
                                sub_42a66a(&var_7c)
                                
                                if (sub_42a684(&var_7c, eax_63, eax_62, *(eax_53 + 0x20), 
                                        *(eax_53 + 0x24), var_8, &var_8[6]) s< 0)
                                    return 0
                                
                                sub_42b68f(&var_7c, var_8[0xa6], eax_53 + 0x10)
                                char* i_13 = i_12
                                *(eax_53 + 0xc) = *(i_13 + 0xc)
                                *(i_13 + 0xc) = 0
                        
                        eax_75 = *arg2 + 0xc
                        arg2 = eax_75
                    while (*eax_75 != 0)
                    ebx_1 = var_8
                
                *arg2 = ebx_1[0x19]
                ebx_1[0x19] = var_10
                return 1
            
            int32_t var_8c_13 = arg2[2]
            sub_42aba3(&ebx_1[6], arg2, 0x5ec, "not enough actual parameters for macro '%s'")
return 0
