// 函数: sub_4cffb6
// 地址: 0x4cffb6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if ((*(arg1 + 0xcc) & 4) != 0)
    return 1

int32_t edi
int32_t var_f4_1 = edi
int32_t result = sub_49ff18(arg1)

if (result s>= 0)
    result = sub_4a3d3d(arg1)
    
    if (result s>= 0)
        int32_t esi_1 = *(arg1 + 0xc)
        int32_t var_c_1 = 0
        int32_t var_10_1 = 0
        int32_t var_20_1 = 0
        bool cond:0_1 = (*(arg1 + 0x6f) & 0x10) != 0
        int32_t var_88[0x5]
        __builtin_memset(&var_88, 0, 0x64)
        int32_t var_ec[0x19]
        __builtin_memset(&var_ec, 0, 0x64)
        int32_t result_1
        
        if (cond:0_1)
        label_4d00ee:
            int32_t esi_2 = esi_1 << 2
            int32_t eax_9 = sub_745f3f(esi_2)
            var_c_1 = eax_9
            int32_t eax_10
            
            if (eax_9 != 0)
                eax_10 = sub_745f3f(esi_2)
                var_10_1 = eax_10
            
            if (eax_9 == 0 || eax_10 == 0)
                result_1 = 0x8007000e
            else
                int32_t esi_4
                int32_t edi_2
                edi_2, esi_4 = __builtin_memcpy(eax_10, *(arg1 + 0x18), esi_2 u>> 2 << 2)
                __builtin_memcpy(edi_2, esi_4, esi_2 & 3)
                int32_t esi_6
                int32_t edi_4
                edi_4, esi_6 = __builtin_memcpy(var_c_1, *(arg1 + 0x18), esi_2 u>> 2 << 2)
                __builtin_memcpy(edi_4, esi_6, esi_2 & 3)
                int32_t ecx_20 = 0
                
                if (esi_1 u> 0)
                    do
                        void* eax_14 = *(*(arg1 + 0x18) + (ecx_20 << 2))
                        *(arg1 + 0x100) = eax_14
                        *(eax_14 + 0x24) = 0xffffffff
                        ecx_20 += 1
                    while (ecx_20 u< esi_1)
                
                int32_t edi_5 = esi_1 - 1
                int32_t var_8_1 = edi_5
                
                if (edi_5 s< 0)
                label_4d02d8:
                    result_1 = 0
                else
                    while (true)
                        int32_t* ecx_21 = *(*(arg1 + 0x18) + (edi_5 << 2))
                        *(arg1 + 0x100) = ecx_21
                        int32_t eax_16 = *ecx_21
                        
                        if ((0xfff00000 & eax_16) != 0 && (eax_16 & 0xf0000000) != 0x60000000
                                && sub_49ea13(ecx_21) == 0)
                            int32_t* eax_19 = *(arg1 + 0x100)
                            
                            if ((*eax_19 & 0xfff00000) != 0x11000000)
                                sub_4c7a69(var_10_1, eax_19, edi_5)
                                int32_t result_2
                                
                                if ((*(arg1 + 0x70) & 8) == 0)
                                    int32_t var_fc_9 = var_20_1
                                    result_2 =
                                        sub_4cfe79(arg1, &var_88, &var_ec, var_c_1, var_10_1, edi_5)
                                label_4d02a9:
                                    result_1 = result_2
                                    
                                    if (result_1 s< 0)
                                        break
                                    
                                    if (result_1 == 0)
                                        var_8_1 -= 1
                                        int32_t esi_9
                                        int32_t edi_10
                                        edi_10, esi_9 = __builtin_memcpy(var_c_1, *(arg1 + 0x18), 
                                            esi_2 u>> 2 << 2)
                                        __builtin_memcpy(edi_10, esi_9, esi_2 & 3)
                                else
                                    int32_t* eax_20 = *(arg1 + 0x100)
                                    int32_t var_18_2 = 0
                                    int32_t var_1c_1 = 0
                                    
                                    if ((*eax_20 & 0xfff00000) == 0x50000000)
                                        var_1c_1 = 1
                                    
                                    if (eax_20[3] u> 0)
                                        int32_t* eax_21 = eax_20[4]
                                        int32_t i_1 = *(*(arg1 + 0x100) + 0xc)
                                        int32_t i
                                        
                                        do
                                            void* edx_7 = *(*(arg1 + 0x14) + (*eax_21 << 2))
                                            int32_t edx_10
                                            int32_t var_74
                                            
                                            if (*(arg1 + 0x6c) << 3 s>> 0x1f != 0
                                                    || var_88[0] != *(edx_7 + 4))
                                                edx_10 = *(edx_7 + 0x10)
                                            else
                                                edx_10 = *(var_74 + ((*(edx_7 + 0x10)
                                                    + (*(edx_7 + 0xc) << 2)) << 2))
                                            
                                            if (edx_10 != 3)
                                                var_1c_1 = 1
                                            else
                                                var_18_2 = 1
                                            
                                            eax_21 = &eax_21[1]
                                            i = i_1
                                            i_1 -= 1
                                        while (i != 1)
                                    
                                    int32_t var_100_8
                                    int32_t var_fc_8
                                    
                                    if (var_1c_1 == 0)
                                        var_fc_8 = 1
                                        var_100_8 = 0
                                    label_4d0283:
                                        result_2 = sub_4cfc7d(arg1, &var_88, var_c_1, var_10_1, 
                                            var_8_1, var_100_8, var_fc_8)
                                        goto label_4d02a9
                                    
                                    if (var_18_2 == 0)
                                        var_fc_8 = 0
                                        var_100_8 = 1
                                        goto label_4d0283
                        
                        edi_5 = var_8_1 - 1
                        bool cond:5_1 = var_8_1 - 1 s>= 0
                        var_8_1 = edi_5
                        
                        if (not(cond:5_1))
                            goto label_4d02d8
        else
            int32_t eax = *(arg1 + 0x30)
            
            if (eax == 0)
                goto label_4d007c
            
            result_1 = sub_4aba37(arg1, &var_ec, *(arg1 + 0x8c), eax)
            
            if (result_1 s>= 0)
                int32_t ecx_4
                ecx_4.b = sub_4ac102(arg1, &var_ec, nullptr) s>= 0
                var_20_1 = ecx_4
            label_4d007c:
                int32_t eax_5 = sub_4aba37(arg1, &var_88, *(arg1 + 0x88), *(arg1 + 0x2c) - 1)
                int32_t eax_6
                
                if (eax_5 s>= 0)
                    eax_6 = sub_4ac102(arg1, &var_88, nullptr)
                
                if (eax_5 s>= 0 && eax_6 s>= 0)
                    goto label_4d00ee
                
                sub_4a36d6(&var_88)
                result_1 = sub_4aba37(arg1, &var_88, *(arg1 + 0x88), *(arg1 + 0x2c))
                
                if (result_1 s>= 0)
                    result_1 = sub_4ac102(arg1, &var_88, nullptr)
                    
                    if (result_1 s>= 0)
                        goto label_4d00ee
                    
                    goto label_4d00da
                
            label_4d00da:
                
                if (result_1 != 0x8007000e)
                    result_1 = 1
        
        if ((*(arg1 + 0x6f) & 0x10) == 0)
            sub_4a36d6(&var_88)
            
            if (*(arg1 + 0x30) != 0)
                sub_4a36d6(&var_ec)
        
        j__free(var_10_1)
        j__free(var_c_1)
        result = result_1

return result
