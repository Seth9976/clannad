// 函数: sub_7442b0
// 地址: 0x7442b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int64_t var_10 = 0
int32_t ebx = 0xffffffff
arg1 = nullptr
int32_t eax = esi[0x72]
int32_t result_1 = 0

while (true)
    void* edi_1 = &esi[6]
    
    while (true)
        void var_24
        void* eax_1 = sub_6e4b80(edi_1, &var_24)
        
        if (eax_1 s>= 0)
            int32_t result
            int32_t* ecx_1
            
            if (eax_1 != 0)
                var_10:4.d = esi[2]
                int32_t ecx_3 = esi[3]
                int32_t eax_9
                int32_t edx_3
                edx_3:eax_9 = sx.q(eax_1)
                esi[2] = eax_9 + var_10:4.d
                esi[3] = adc.d(edx_3, ecx_3, eax_9 + var_10:4.d u< eax_9)
                
                if (ecx_3 s< 0 || (ecx_3 s<= 0 && var_10:4.d u< 0))
                    ecx_1 = arg1
                    result = result_1
                else if (sub_6e4700(&var_24) != 0)
                    ecx_1 = arg1
                    result = result_1
                else if (sub_6e47d0(&var_24) != eax)
                    continue
                else
                    sub_6e4e20(&esi[0x1e], &var_24)
                    void var_44
                    int32_t eax_15 = sub_6e5340(&esi[0x1e], &var_44)
                    bool cond:4_1 = eax_15 s<= 0
                    
                    if (eax_15 != 0)
                        int32_t i
                        
                        do
                            if (not(cond:4_1))
                                int32_t eax_16 = sub_99ce00(arg2, &var_44)
                                
                                if (eax_16 s>= 0)
                                    if (ebx != 0xffffffff)
                                        int32_t eax_19
                                        int32_t edx_5
                                        edx_5:eax_19 = sx.q((eax_16 + ebx) s>> 2)
                                        int32_t result_2 = result_1
                                        result_1 += eax_19
                                        arg1 = adc.d(arg1, edx_5, result_2 + eax_19 u< result_2)
                                    
                                    ebx = eax_16
                            
                            i = sub_6e5340(&esi[0x1e], &var_44)
                            cond:4_1 = i s<= 0
                        while (i != 0)
                        edi_1 = &esi[6]
                    
                    int32_t eax_20
                    int32_t edx_6
                    eax_20, edx_6 = sub_6e4740(&var_24)
                    
                    if ((eax_20 & edx_6) == 0xffffffff)
                        continue
                    else
                        int32_t eax_22
                        int32_t edx_7
                        eax_22, edx_7 = sub_6e4740(&var_24)
                        result = eax_22 - result_1
                        ecx_1 = sbb.d(edx_7, arg1, eax_22 u< result_1)
            else
                *__errno() = 0
                
                if (esi[0xb0] != 0 && *esi != 0)
                    int32_t eax_6 = esi[0xb0](sub_6e4ac0(edi_1, 0x800), 1, 0x800, *esi)
                    bool cond:3_1 = eax_6 == 0
                    
                    if (eax_6 s> 0)
                        sub_6e4b50(&esi[6], eax_6)
                        cond:3_1 = eax_6 == 0
                    
                    if (cond:3_1)
                        __errno()
                    else if (eax_6 s>= 0)
                        break
                
                ecx_1 = arg1
                result = result_1
            
            if (ecx_1 s> 0 || (ecx_1 s>= 0 && result u>= 0))
                return result
            
            int64_t var_10_1 = 0
            return 0
        
        int32_t eax_2
        int32_t edx_1
        edx_1:eax_2 = sx.q(eax_1)
        int32_t temp1_1 = esi[2]
        esi[2] -= eax_2
        esi[3] = sbb.d(esi[3], edx_1, temp1_1 u< eax_2)
