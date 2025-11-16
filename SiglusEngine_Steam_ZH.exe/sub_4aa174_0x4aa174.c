// 函数: sub_4aa174
// 地址: 0x4aa174
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_80 = edi
int32_t edi_1 = 0
int32_t var_14 = 0
uint32_t var_8 = 0
int32_t* var_c = nullptr
int32_t result = sub_49ff18(arg1)

if (result s>= 0)
    result = sub_4a3d3d(arg1)
    
    if (result s>= 0)
        if ((*(arg1 + 0x6c) & 0xc000000) != 0)
            int32_t i = 0
            
            if (*(arg1 + 0xc) u> 0)
                do
                    void* ecx_2 = *(*(arg1 + 0x18) + (i << 2))
                    i += 1
                    *(ecx_2 + 0x2c) = 0
                while (i u< *(arg1 + 0xc))
            
            int32_t i_1 = *(arg1 + 0xc)
            
            while (i_1 u> 0)
                i_1 -= 1
                int32_t* eax_4 = *(*(arg1 + 0x18) + (i_1 << 2))
                int32_t ecx_3 = *eax_4
                int32_t esi_1 = ecx_3 & 0xfff00000
                
                if (esi_1 != 0)
                    int32_t edx_1 = eax_4[0xb]
                    
                    if ((ecx_3 & 0xf0000000) == 0x60000000 || esi_1 == 0x11000000)
                        eax_4[0xb] = edx_1 + 1
                        edx_1 += 2
                    
                    int32_t j = 0
                    
                    if (eax_4[5] u> 0)
                        do
                            void* ecx_8 = *(*(arg1 + 0x18) + (*(eax_4[6] + (j << 2)) << 2))
                            
                            if (*(ecx_8 + 0x2c) u< edx_1)
                                *(ecx_8 + 0x2c) = edx_1
                            
                            j += 1
                        while (j u< eax_4[5])
            
            edi_1 = 0
        
        int32_t var_1c_2 = 0
        int32_t i_2 = 0
        void* const var_20
        
        if (*(arg1 + 0xc) u> 0)
            do
                int32_t* eax_6 = *(*(arg1 + 0x18) + (i_2 << 2))
                int32_t ecx_11 = *eax_6 & 0xfff00000
                
                if (ecx_11 != 0)
                    int32_t ecx_13 = *eax_6[4]
                    int32_t edx_3 = *(arg1 + 0x14)
                    void* esi_2 = *(edx_3 + (ecx_13 << 2))
                    int32_t edi_3 = *(arg1 + 0x10)
                    var_20 = esi_2
                    
                    if ((*(*(edi_3 + (*(esi_2 + 4) << 2)) + 4) & 8) == 0)
                        void* const ecx_14
                        
                        if (ecx_11 == 0x20700000 || ecx_11 == 0x20800000 || ecx_11 == 0x11500000)
                            ecx_14 = *(edx_3 + (*eax_6[2] << 2))
                        else
                            ecx_14 = var_20
                        
                        ecx_13 = *(ecx_14 + 0x14)
                    
                    edi_1 = 0
                    eax_6[0xd] = ecx_13
                    
                    if (ecx_13 != 0xffffffff)
                        var_1c_2 = 1
                
                i_2 += 1
            while (i_2 u< *(arg1 + 0xc))
        
        if ((*(arg1 + 0xcc) & 4) != 0)
            return 1
        
        uint32_t eax_10 = *(arg1 + 0xc) << 2
        
        if (var_1c_2 == 0)
            int32_t var_10_1 = 0
            int32_t eax_19 = sub_745f3f(eax_10)
            var_14 = eax_19
            
            if (eax_19 == 0)
                result = 0x8007000e
            else
                uint32_t eax_22 = sub_745f3f(*(arg1 + 0xc) << 2)
                var_8 = eax_22
                
                if (eax_22 == 0)
                    result = 0x8007000e
                else
                    int32_t* eax_25 = sub_745f3f(*(arg1 + 0xc) << 2)
                    var_c = eax_25
                    
                    if (eax_25 == 0)
                        result = 0x8007000e
                    else
                        int32_t i_3 = 0
                        
                        if (*(arg1 + 0xc) u> 0)
                            do
                                void* eax_27 = *(*(arg1 + 0x18) + (i_3 << 2))
                                *(eax_27 + 0x38) = 0xffffffff
                                bool cond:11_1 = (*(eax_27 + 2) & 0xfff0) == 0
                                *(eax_27 + 0x24) = 0
                                
                                if (not(cond:11_1) && *(eax_27 + 0x1c) == 0)
                                    int32_t edx_4 = var_10_1
                                    var_10_1 += 1
                                    *(var_14 + (edx_4 << 2)) = i_3
                                
                                i_3 += 1
                            while (i_3 u< *(arg1 + 0xc))
                        
                        var_20 = nullptr
                        
                        if (var_10_1 u> 0)
                            do
                                result = sub_4a2834(arg1, *(var_14 + (edi_1 << 2)), var_8, &var_20)
                                
                                if (result s< 0)
                                    goto label_4aa491
                                
                                edi_1 += 1
                            while (edi_1 u< var_10_1)
                        
                        int32_t i_4 = 0
                        
                        if (*(arg1 + 0xc) u> 0)
                            int32_t* eax_31 = var_c
                            void* ecx_35 = var_8 - eax_31
                            
                            do
                                *eax_31 = *(*(arg1 + 0x18) + (*(eax_31 + ecx_35) << 2))
                                i_4 += 1
                                eax_31 = &eax_31[1]
                            while (i_4 u< *(arg1 + 0xc))
                        
                        int32_t ecx_37 = *(arg1 + 0xc) << 2
                        int32_t esi_12
                        int32_t edi_9
                        edi_9, esi_12 = __builtin_memcpy(*(arg1 + 0x18), var_c, ecx_37 u>> 2 << 2)
                        __builtin_memcpy(edi_9, esi_12, ecx_37 & 3)
                        result = 0
        else
            uint32_t eax_11 = sub_745f3f(eax_10)
            var_8 = eax_11
            
            if (eax_11 == 0)
                result = 0x8007000e
            else
                int32_t* eax_14 = sub_745f3f(*(arg1 + 0xc) << 2)
                var_c = eax_14
                
                if (eax_14 == 0)
                    result = 0x8007000e
                else
                    result = sub_4a39e3(arg1)
                    
                    if (result s>= 0)
                        int32_t i_5 = 0
                        
                        if (*(arg1 + 0xc) u> 0)
                            do
                                *(var_8 + (i_5 << 2)) = i_5
                                i_5 += 1
                            while (i_5 u< *(arg1 + 0xc))
                        
                        sub_458e55(sub_49fa1b, var_8, *(arg1 + 0xc), arg1)
                        int32_t i_6 = 0
                        
                        if (*(arg1 + 0xc) u> 0)
                            int32_t* eax_16 = var_c
                            int32_t* ecx_22 = var_8 - eax_16
                            
                            do
                                *eax_16 = *(*(arg1 + 0x18) + (*(ecx_22 + eax_16) << 2))
                                i_6 += 1
                                eax_16 = &eax_16[1]
                            while (i_6 u< *(arg1 + 0xc))
                        
                        int32_t ecx_24 = *(arg1 + 0xc) << 2
                        int32_t esi_8
                        int32_t edi_6
                        edi_6, esi_8 = __builtin_memcpy(*(arg1 + 0x18), var_c, ecx_24 u>> 2 << 2)
                        __builtin_memcpy(edi_6, esi_8, ecx_24 & 3)
                        int32_t result_1
                        void* ecx_29
                        result_1, ecx_29 = sub_4a3d3d(arg1)
                        result = result_1
                        
                        if (result s>= 0)
                            void* var_70_1 = arg1
                            void** const var_74_1 = &data_ac8b14
                            result = sub_4e539f(ecx_29, 1)
                            
                            if (result s>= 0)
                                result = 0

label_4aa491:
j__free(var_14)
j__free(var_8)
j__free(var_c)
return result
