// 函数: sub_407a63
// 地址: 0x407a63
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
void var_18
int32_t result_1 = (*(*arg1 + 0x20))(arg1, &var_18)
int32_t result = result_1

if (result_1 s>= 0)
    int32_t var_24
    void* var_20
    int32_t result_2 = (*(*arg1 + 0x18))(arg1, &var_24, &var_20)
    result = result_2
    
    if (result_2 s>= 0)
        void* var_28
        int32_t result_3 = (*(*arg1 + 0x10))(arg1, 0, &var_28)
        result = result_3
        
        if (result_3 s>= 0)
            int32_t edi
            int32_t var_38_3 = edi
            int32_t i = 4
            void* const edi_1 = &data_ac37d4
            void* esi_1 = &var_18
            bool cond:4_1 = true
            
            while (i != 0)
                int32_t temp1_1 = *esi_1
                int32_t temp2_1 = *edi_1
                cond:4_1 = temp1_1 == temp2_1
                esi_1 += 4
                edi_1 += 4
                i -= 1
                
                if (temp1_1 != temp2_1)
                    break
            
            if (cond:4_1)
            label_407b8c:
                
                if (var_28 == 0)
                    result = 0x88760b5a
                else
                    int32_t eax_8 = sub_745f3f(var_28)
                    *arg2 = eax_8
                    
                    if (eax_8 == 0)
                        result = 0x8007000e
                    else
                        int32_t result_4 = (*(*arg1 + 0x10))(arg1, eax_8, &var_28)
                        result = result_4
                        
                        if (result_4 s>= 0)
                        label_407bc1:
                            int32_t i_1 = 4
                            void* const edi_9 = &data_ac37a4
                            void* esi_9 = &var_18
                            bool cond:25_1 = false
                            
                            while (i_1 != 0)
                                int32_t temp7_1 = *esi_9
                                int32_t temp8_1 = *edi_9
                                cond:25_1 = temp7_1 != temp8_1
                                esi_9 += 4
                                edi_9 += 4
                                i_1 -= 1
                                
                                if (temp7_1 != temp8_1)
                                    break
                            
                            void* eax_10
                            bool cond:28_1
                            
                            if (cond:25_1)
                                int32_t i_2 = 4
                                void* const edi_10 = &data_ac3794
                                void* esi_10 = &var_18
                                bool cond:16_1 = false
                                
                                while (i_2 != 0)
                                    int32_t temp11_1 = *esi_10
                                    int32_t temp12_1 = *edi_10
                                    cond:16_1 = temp11_1 != temp12_1
                                    esi_10 += 4
                                    edi_10 += 4
                                    i_2 -= 1
                                    
                                    if (temp11_1 != temp12_1)
                                        break
                                
                                if (cond:16_1)
                                    int32_t i_3 = 4
                                    void* const edi_12 = &data_ac3784
                                    void* esi_12 = &var_18
                                    bool cond:22_1 = false
                                    
                                    while (i_3 != 0)
                                        int32_t temp15_1 = *esi_12
                                        int32_t temp16_1 = *edi_12
                                        cond:22_1 = temp15_1 != temp16_1
                                        esi_12 += 4
                                        edi_12 += 4
                                        i_3 -= 1
                                        
                                        if (temp15_1 != temp16_1)
                                            break
                                    
                                    if (not(cond:22_1))
                                        void* eax_16 = var_28
                                        var_20 += eax_16
                                        cond:28_1 = var_24 != eax_16 + 4
                                    label_407cf8:
                                        arg2[1] = 3
                                        arg2[2] = 4
                                        goto label_407d02
                                    
                                    int32_t i_4 = 4
                                    void* const edi_13 = &data_ac37d4
                                    void* esi_13 = &var_18
                                    bool cond:27_1 = false
                                    
                                    while (i_4 != 0)
                                        int32_t temp19_1 = *esi_13
                                        int32_t temp20_1 = *edi_13
                                        cond:27_1 = temp19_1 != temp20_1
                                        esi_13 += 4
                                        edi_13 += 4
                                        i_4 -= 1
                                        
                                        if (temp19_1 != temp20_1)
                                            break
                                    
                                    if (cond:27_1)
                                        int32_t i_5 = 4
                                        void* const edi_14 = &data_ac37c4
                                        void* esi_14 = &var_18
                                        bool cond:30_1 = false
                                        
                                        while (i_5 != 0)
                                            int32_t temp21_1 = *esi_14
                                            int32_t temp22_1 = *edi_14
                                            cond:30_1 = temp21_1 != temp22_1
                                            esi_14 += 4
                                            edi_14 += 4
                                            i_5 -= 1
                                            
                                            if (temp21_1 != temp22_1)
                                                break
                                        
                                        if (cond:30_1)
                                            int32_t i_6 = 4
                                            void* const edi_16 = &data_ac37b4
                                            void* esi_16 = &var_18
                                            bool cond:34_1 = false
                                            
                                            while (i_6 != 0)
                                                int32_t temp23_1 = *esi_16
                                                int32_t temp24_1 = *edi_16
                                                cond:34_1 = temp23_1 != temp24_1
                                                esi_16 += 4
                                                edi_16 += 4
                                                i_6 -= 1
                                                
                                                if (temp23_1 != temp24_1)
                                                    break
                                            
                                            if (not(cond:34_1))
                                                cond:28_1 = var_24 != 4
                                                goto label_407cf8
                                            
                                            result = 0x88760b5a
                                        else if (var_24 u< 4)
                                            result = 0x80004005
                                        else
                                            void* edi_15 = var_20
                                            arg2[1] = 1
                                            char* eax_21 = *edi_15
                                            
                                            do
                                                i_5.b = *eax_21
                                                eax_21 = &eax_21[1]
                                            while (i_5.b != 0)
                                            
                                            bool cond:35_1 = var_24 != 4
                                            arg2[2] = eax_21 - &eax_21[1] + 1
                                            
                                            if (cond:35_1)
                                                result = 0x80004005
                                            else
                                                var_20 = *edi_15
                                            label_407d0b:
                                                int32_t eax_25 = sub_745f3f(arg2[2])
                                                arg2[3] = eax_25
                                                
                                                if (eax_25 == 0)
                                                    result = 0x8007000e
                                                else
                                                    int32_t ecx_13 = arg2[2]
                                                    int32_t esi_18
                                                    int32_t edi_18
                                                    edi_18, esi_18 = __builtin_memcpy(eax_25, 
                                                        var_20, ecx_13 u>> 2 << 2)
                                                    __builtin_memcpy(edi_18, esi_18, ecx_13 & 3)
                                    else
                                        bool cond:31_1 = var_24 u< 4
                                        arg2[1] = 2
                                        
                                        if (not(cond:31_1))
                                            int32_t eax_19 = *var_20
                                            var_20 += 4
                                            int32_t eax_20 = eax_19 << 2
                                            arg2[2] = eax_20
                                            eax_10 = eax_20 + 4
                                            goto label_407bfc
                                        
                                        result = 0x80004005
                                else
                                    void* esi_11 = var_28
                                    
                                    if (var_24 u>= esi_11 + 1)
                                        var_20 += esi_11
                                        void* eax_12 = var_20
                                        arg2[1] = 1
                                        void* edi_11 = eax_12 + 1
                                        
                                        do
                                            i_2.b = *eax_12
                                            eax_12 += 1
                                        while (i_2.b != 0)
                                        
                                        arg2[2] = eax_12 - edi_11 + 1
                                        cond:28_1 = var_24 != eax_12 - edi_11 + 1 + esi_11
                                        goto label_407d02
                                    
                                    result = 0x80004005
                            else
                                void* eax_9 = var_28
                                bool cond:17_1 = var_24 u< eax_9 + 4
                                arg2[1] = 2
                                
                                if (cond:17_1)
                                    result = 0x80004005
                                else
                                    var_20 += eax_9
                                    int32_t ecx_11 = *var_20 << 2
                                    var_20 += 4
                                    arg2[2] = ecx_11
                                    eax_10 = ecx_11 + eax_9 + 4
                                label_407bfc:
                                    cond:28_1 = eax_10 != var_24
                                label_407d02:
                                    
                                    if (not(cond:28_1))
                                        goto label_407d0b
                                    
                                    result = 0x80004005
            else
                int32_t i_7 = 4
                void* const edi_2 = &data_ac37c4
                void* esi_2 = &var_18
                bool cond:6_1 = true
                
                while (i_7 != 0)
                    int32_t temp3_1 = *esi_2
                    int32_t temp4_1 = *edi_2
                    cond:6_1 = temp3_1 == temp4_1
                    esi_2 += 4
                    edi_2 += 4
                    i_7 -= 1
                    
                    if (temp3_1 != temp4_1)
                        break
                
                if (cond:6_1)
                    goto label_407b8c
                
                int32_t i_8 = 4
                void* const edi_3 = &data_ac37b4
                void* esi_3 = &var_18
                bool cond:9_1 = true
                
                while (i_8 != 0)
                    int32_t temp5_1 = *esi_3
                    int32_t temp6_1 = *edi_3
                    cond:9_1 = temp5_1 == temp6_1
                    esi_3 += 4
                    edi_3 += 4
                    i_8 -= 1
                    
                    if (temp5_1 != temp6_1)
                        break
                
                if (cond:9_1)
                    goto label_407b8c
                
                int32_t i_9 = 4
                void* const edi_4 = &data_ac37a4
                void* esi_4 = &var_18
                bool cond:12_1 = true
                
                while (i_9 != 0)
                    int32_t temp9_1 = *esi_4
                    int32_t temp10_1 = *edi_4
                    cond:12_1 = temp9_1 == temp10_1
                    esi_4 += 4
                    edi_4 += 4
                    i_9 -= 1
                    
                    if (temp9_1 != temp10_1)
                        break
                
                if (not(cond:12_1))
                    i_9 = 4
                    void* const edi_5 = &data_ac3794
                    void* esi_5 = &var_18
                    bool cond:14_1 = true
                    
                    while (i_9 != 0)
                        int32_t temp13_1 = *esi_5
                        int32_t temp14_1 = *edi_5
                        cond:14_1 = temp13_1 == temp14_1
                        esi_5 += 4
                        edi_5 += 4
                        i_9 -= 1
                        
                        if (temp13_1 != temp14_1)
                            break
                    
                    if (cond:14_1)
                        goto label_407b37
                    
                    i_9 = 4
                    void* const edi_6 = &data_ac3784
                    void* esi_6 = &var_18
                    bool cond:20_1 = false
                    
                    while (i_9 != 0)
                        int32_t temp17_1 = *esi_6
                        int32_t temp18_1 = *edi_6
                        cond:20_1 = temp17_1 != temp18_1
                        esi_6 += 4
                        edi_6 += 4
                        i_9 -= 1
                        
                        if (temp17_1 != temp18_1)
                            break
                    
                    if (cond:20_1)
                        goto label_407bc1
                    
                    goto label_407b37
                
            label_407b37:
                char* eax_3 = var_20
                void* edx_1 = &eax_3[1]
                
                do
                    i_9.b = *eax_3
                    eax_3 = &eax_3[1]
                while (i_9.b != 0)
                
                bool cond:18_1 = var_24 u>= eax_3 - edx_1 + 1
                var_28 = eax_3 - edx_1 + 1
                
                if (cond:18_1)
                    int32_t eax_6 = sub_745f3f(eax_3 - edx_1 + 1)
                    *arg2 = eax_6
                    
                    if (eax_6 != 0)
                        void* ecx_2 = var_28
                        int32_t esi_8
                        int32_t edi_8
                        edi_8, esi_8 = __builtin_memcpy(eax_6, var_20, ecx_2 u>> 2 << 2)
                        __builtin_memcpy(edi_8, esi_8, ecx_2 & 3)
                        goto label_407bc1
                    
                    result = 0x8007000e
                else
                    result = 0x80004005

sub_745f2b(__security_cookie_1)
return result
