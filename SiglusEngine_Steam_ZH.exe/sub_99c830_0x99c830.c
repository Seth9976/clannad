// 函数: sub_99c830
// 地址: 0x99c830
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = *(arg2 + 0x1c)

if (esi != 0 && esi[2] s> 0)
    int32_t eax_1 = *esi
    
    if (eax_1 s>= 0x40 && esi[1] s>= eax_1)
        char eax_2 = (esi[0x392]).b
        char* eax_3
        int32_t ecx
        int32_t edx
        eax_3, ecx, edx = _memset(arg1, 0, 0x70)
        void* eax_4 = sub_74c590(eax_3, edx, ecx, 1, 0x88)
        *(arg1 + 0x68) = eax_4
        *(arg1 + 4) = arg2
        int32_t edx_1 = 0
        int32_t ecx_1 = esi[2]
        uint32_t i = ecx_1 - 1
        
        if (ecx_1 != 1)
            do
                edx_1 += 1
                i u>>= 1
            while (i != 0)
        
        *(eax_4 + 0x2c) = edx_1
        int32_t* eax_5
        int32_t ecx_2
        int32_t edx_2
        eax_5, ecx_2, edx_2 = sub_74c590(eax_4, edx_1, i, 1, 4)
        *(eax_4 + 0xc) = eax_5
        int32_t eax_7
        int32_t edx_3
        eax_7, edx_3 = sub_74c590(eax_4, edx_2, ecx_2, 1, 4)
        *(eax_4 + 0x10) = eax_7
        int32_t eax_8
        int32_t ecx_4
        int32_t edx_4
        eax_8, ecx_4, edx_4 = sub_74c590(eax_7, edx_3, eax_4, 1, 0x14)
        *eax_5 = eax_8
        **(eax_4 + 0x10) = sub_74c590(eax_8, edx_4, ecx_4, 1, 0x14)
        sub_9a5220(**(eax_4 + 0xc), *esi s>> eax_2)
        int32_t edx_10 = sub_9a5220(**(eax_4 + 0x10), esi[1] s>> eax_2)
        uint32_t i_1 = *esi
        int32_t ecx_11 = 0
        
        for (; i_1 != 0; i_1 u>>= 1)
            ecx_11 += 1
        
        int32_t ecx_12 = 0
        *(eax_4 + 4) = ecx_11 - 7
        
        for (uint32_t i_2 = esi[1]; i_2 != 0; i_2 u>>= 1)
            ecx_12 += 1
        
        *(eax_4 + 8) = ecx_12 - 7
        
        if (esi[0x2c8] == 0)
            int32_t edi_3 = esi[6]
            esi[0x2c8] = sub_74c590(ecx_12 - 7, edx_10, ecx_12, edi_3, 0x38)
            int32_t var_14_1 = 0
            
            if (edi_3 s> 0)
                void* edi_4 = &esi[0x1c8]
                int32_t edx_11 = 0
                int32_t var_10_1 = 0
                void* eax_13 = edi_4
                void* var_1c_1 = edi_4
                
                while (true)
                    int32_t* eax_14 = *eax_13
                    
                    if (eax_14 != 0 && sub_99d780(esi[0x2c8] + edx_11, eax_14) == 0)
                        sub_99de30(*var_1c_1)
                        int32_t ecx_18 = var_14_1 + 1
                        edx_11 = var_10_1 + 0x38
                        var_14_1 = ecx_18
                        *var_1c_1 = 0
                        eax_13 = var_1c_1 + 4
                        var_1c_1 = eax_13
                        var_10_1 = edx_11
                        
                        if (ecx_18 s>= esi[6])
                            break
                        
                        continue
                    
                    int32_t i_3 = 0
                    int32_t i_9 = 0
                    
                    if (esi[6] s> 0)
                        do
                            void* ecx_26 = *edi_4
                            
                            if (ecx_26 != 0)
                                sub_99de30(ecx_26)
                                i_3 = i_9
                                *edi_4 = 0
                            
                            i_3 += 1
                            edi_4 += 4
                            i_9 = i_3
                        while (i_3 s< esi[6])
                    
                    sub_99c590(arg1)
                    return 0xffffffff
        
        *(arg1 + 0x10) = esi[1]
        *(arg1 + 8) = _malloc(*(arg2 + 4) << 2)
        int32_t eax_23
        int32_t ecx_19
        int32_t edx_14
        eax_23, ecx_19, edx_14 = _malloc(*(arg2 + 4) << 2)
        *(arg1 + 0xc) = eax_23
        int32_t i_4 = 0
        void* eax_24 = arg2
        
        if (*(eax_24 + 4) s> 0)
            void* esi_1 = eax_24
            
            do
                eax_24, edx_14 = sub_74c590(eax_24, edx_14, ecx_19, *(arg1 + 0x10), 4)
                ecx_19 = *(arg1 + 8)
                *(ecx_19 + (i_4 << 2)) = eax_24
                i_4 += 1
            while (i_4 s< *(esi_1 + 4))
        
        *(arg1 + 0x24) = 0
        *(arg1 + 0x28) = 0
        int32_t eax_26
        int32_t edx_15
        edx_15:eax_26 = sx.q(esi[1])
        int32_t eax_28 = (eax_26 - edx_15) s>> 1
        *(arg1 + 0x30) = eax_28
        *(arg1 + 0x14) = eax_28
        int32_t eax_29
        int32_t ecx_20
        int32_t edx_16
        eax_29, ecx_20, edx_16 = sub_74c590(eax_28, edx_15, ecx_19, esi[4], 4)
        *(eax_4 + 0x30) = eax_29
        *(eax_4 + 0x34) = sub_74c590(eax_29, edx_16, ecx_20, esi[5], 4)
        int32_t i_7 = 0
        
        if (esi[4] s> 0)
            void* edi_7 = &esi[0xc8]
            int32_t i_5
            
            do
                int32_t eax_35 = (*(&data_adde08)[*edi_7])[2](arg1, *(edi_7 + 0x100))
                int32_t* edx_18 = 0xfffffce0 - esi + edi_7
                edi_7 += 4
                *(edx_18 + *(eax_4 + 0x30)) = eax_35
                i_5 = i_7 + 1
                i_7 = i_5
            while (i_5 s< esi[4])
        
        int32_t i_8 = 0
        
        if (esi[5] s> 0)
            void* edi_8 = &esi[0x148]
            int32_t i_6
            
            do
                int32_t eax_41 = (*((&data_addf44)[*edi_8] + 8))(arg1, *(edi_8 + 0x100))
                edi_8 += 4
                *(*(eax_4 + 0x34) + 0xfffffae0 - esi + edi_8 - 4) = eax_41
                i_6 = i_8 + 1
                i_8 = i_6
            while (i_6 s< esi[5])
        
        return 0

return 1
