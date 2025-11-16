// 函数: sub_4b3624
// 地址: 0x4b3624
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_30 = edi
int32_t i = 0
int32_t ebx = 0xffffffff
int32_t i_1 = 0

if (arg1[3] u> 0)
    int32_t var_24
    void* var_14
    
    do
        int32_t eax_1 = arg1[6]
        arg1[0x3f] = i
        int32_t* eax_2 = *(eax_1 + (i << 2))
        arg1[0x40] = eax_2
        
        if ((*(eax_2 + 2) & 0xfff0) != 0)
            uint32_t temp0_1 = divu.dp.d(0:(eax_2[1]), *eax_2 & 0xfffff)
            int32_t var_8_1 = 0
            
            if (temp0_1 u> 0)
                do
                    int32_t var_c
                    int32_t eax_5 = sub_49e7de(arg1[0x40], var_8_1, &var_c)
                    int32_t var_10_1 = 0
                    
                    if (eax_5 u> 0)
                        do
                            int32_t edi_2 = var_10_1 << 2
                            void* eax_8 = *(arg1[5] + (*(edi_2 + var_c) << 2))
                            int16_t ecx_6 = (*(*(arg1[4] + (*(eax_8 + 4) << 2)) + 4)).w
                            
                            if ((ecx_6.b & 0x10) == 0)
                                break
                            
                            if ((ecx_6:1.b & 2) != 0)
                                break
                            
                            int32_t eax_9
                            int32_t* ecx_8
                            eax_9, ecx_8 = (*(*arg1 + 0x54))(*(eax_8 + 0x6c))
                            
                            if (eax_9 != 0x11)
                                break
                            
                            if (var_8_1 == 0 && (*arg1[0x40] & 0xfff00000) == 0x30000000)
                                break
                            
                            if (ebx == 0xffffffff)
                                int32_t var_14_1 = 0
                                
                                if (arg1[2] u> 0)
                                    ecx_8 = arg1[5]
                                    int32_t j_1 = arg1[2]
                                    int32_t j
                                    
                                    do
                                        void* eax_13 = *ecx_8
                                        
                                        if (arg1[0x22] == *(eax_13 + 4))
                                            int32_t eax_14 = *(eax_13 + 0xc)
                                            
                                            if (eax_14 u>= var_14_1)
                                                var_14_1 = eax_14 + 1
                                        
                                        ecx_8 = &ecx_8[1]
                                        j = j_1
                                        j_1 -= 1
                                    while (j != 1)
                                
                                int32_t* var_34_3 = ecx_8
                                int32_t* var_38_2 = ecx_8
                                var_38_2.q = fconvert.d(float.t(0))
                                ebx = sub_49f544(arg1, arg1[0x22], var_14_1, 0, var_38_2)
                                
                                if (ebx == 0xffffffff)
                                    return 0x8007000e
                                
                                int32_t eax_17 = arg1[5]
                                sub_49f12c(*(eax_17 + (ebx << 2)), 
                                    *(eax_17 + (*(edi_2 + var_c) << 2)))
                                *(*(arg1[5] + (ebx << 2)) + 0x6c) = 0xffffffff
                                var_24 = *(edi_2 + var_c)
                                var_14 = arg1[0x40]
                            
                            var_10_1 += 1
                            *(edi_2 + var_c) = ebx
                        while (var_10_1 u< eax_5)
                        
                        i = i_1
                    
                    var_8_1 += 1
                while (var_8_1 u< temp0_1)
        
        i += 1
        i_1 = i
    while (i u< arg1[3])
    
    if (ebx != 0xffffffff)
        int32_t eax_26 = sub_49f5a4(arg1, 0x30000001, 3, 1)
        void* eax_31
        void* edi_3
        
        if (eax_26 != 0xffffffff)
            edi_3 = *(arg1[6] + (eax_26 << 2))
            sub_49e7bf(edi_3, var_14)
            int32_t var_34_6 = var_24
            int32_t var_38_3 = var_24
            **(edi_3 + 0x10) = ebx
            var_38_3.q = fconvert.d(float.t(1))
            **(edi_3 + 8) = var_24
            int32_t eax_29 = sub_49f544(arg1, arg1[0x1e], 0, 0, var_38_3)
            void* ecx_18 = *(edi_3 + 8)
            void* var_34_7 = ecx_18
            void* var_38_4 = ecx_18
            var_38_4.q = fconvert.d(fconvert.t(-1.0))
            *(ecx_18 + 4) = eax_29
            *(*(edi_3 + 8) + 8) = sub_49f544(arg1, arg1[0x1e], 0, 0, var_38_4)
            eax_31 = *(edi_3 + 8)
        
        if (eax_26 == 0xffffffff || *(eax_31 + 4) == 0xffffffff || *(eax_31 + 8) == 0xffffffff)
            return 0x8007000e
        
        int32_t ecx_21 = arg1[3]
        void** eax_33
        
        while (true)
            eax_33 = arg1[6]
            
            if (ecx_21 u<= 1)
                break
            
            ecx_21 -= 1
            void* eax_32 = &eax_33[ecx_21]
            *eax_32 = *(eax_32 - 4)
        
        *eax_33 = edi_3

return 0
