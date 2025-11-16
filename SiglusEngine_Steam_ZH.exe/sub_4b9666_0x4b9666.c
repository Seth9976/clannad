// 函数: sub_4b9666
// 地址: 0x4b9666
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = arg2
int32_t edi
int32_t var_68 = edi
int32_t ecx = 0

while (i != 0)
    ecx += 1
    i &= i - 1
    
    if (ecx u>= 7)
        break

if (ecx u<= 6)
    int32_t eax = *(arg1 + 0x480)
    
    if (eax - ecx u<= 6)
        int32_t var_8_1 = 0
        int32_t var_c_1 = 0
        int32_t i_1 = 0
        int32_t var_5c[0x6]
        int32_t var_44[0x6]
        
        if (eax u> 0)
            void* var_14_1 = arg1 + 0x450
            
            do
                int32_t* eax_4 = *(*(arg1 + 0x18) + (*var_14_1 << 2))
                int32_t edx_4 = *eax_4
                int32_t edi_2 = edx_4 & 0xfff00000
                
                if ((arg2 & 1 << i_1.b) == 0)
                    if (edi_2 == 0x11000000)
                        return 0
                    
                    if (edi_2 != 0x72100000)
                        void* ecx_7 =
                            *(*(arg1 + 0x14) + (*(eax_4[2] + ((edx_4 & 0xfffff) << 2)) << 2))
                        
                        if (*(ecx_7 + 0x6c) != 3)
                            return 0
                        
                        if (*(ecx_7 + 0x3c) != 0)
                            return 0
                    
                    int32_t ecx_8 = var_8_1
                    var_8_1 += 1
                    var_44[ecx_8] = eax_4
                else
                    if (eax_4[9] == 1)
                        return 0
                    
                    int32_t ecx_4 = var_c_1
                    var_c_1 += 1
                    var_5c[ecx_4] = eax_4
                
                i_1 += 1
                var_14_1 += 4
            while (i_1 u< *(arg1 + 0x480))
        
        void var_2c
        __builtin_memset(&var_2c, 0xffffffff, 0x18)
        
        if (sub_4b9490(arg1, *(arg1 + 0x22c), &var_2c, &var_44, var_8_1, 0) != 0
                && sub_4b9490(arg1, *(arg1 + 0x230), &var_2c, &var_5c, var_c_1, 0) != 0
                && sub_4b9490(arg1, *(arg1 + 0x22c), &var_2c, &var_44, var_8_1, 1) != 0
                && sub_4b9490(arg1, *(arg1 + 0x230), &var_2c, &var_5c, var_c_1, 1) != 0
                && sub_4b9490(arg1, *(arg1 + 0x22c), &var_2c, &var_44, var_8_1, 2) != 0
                && sub_4b9490(arg1, *(arg1 + 0x230), &var_2c, &var_5c, var_c_1, 2) != 0)
            if (arg3 == 0)
                __builtin_memset(&var_5c, 0, 0x18)
                __builtin_memset(&var_44, 0, 0x18)
                arg3 = 0
                
                for (int32_t* i_2 = nullptr; i_2 u< 0x18; i_2 = &i_2[1])
                    int32_t* edx_7 = *(i_2 + *(arg1 + 0x22c))
                    
                    if (edx_7 != 0 || *(i_2 + *(arg1 + 0x230)) != 0)
                        int32_t ecx_15 = 0
                        int32_t var_14_2 = 0
                        
                        if (edx_7 != 0)
                            ecx_15 = *edx_7 & 0xfff00000
                        
                        int32_t* eax_15 = *(i_2 + *(arg1 + 0x230))
                        
                        if (eax_15 != 0)
                            var_14_2 = *eax_15 & 0xfff00000
                        
                        int32_t eax_18 = sub_4b4917(ecx_15)
                        int32_t eax_19
                        
                        if (eax_18 == 0)
                            eax_19 = sub_4b4917(var_14_2)
                        
                        if (eax_18 != 0 || eax_19 != 0)
                            arg2 = 0xffffffff
                            
                            if (eax_18 != 0)
                                int32_t ecx_17 = *(arg1 + 0x14)
                                int32_t* ebx_2 = *(ecx_17 + (*edx_7[2] << 2))
                                int32_t var_6c_3 = ecx_17
                                int32_t var_70_7 = ecx_17
                                var_70_7.q = fconvert.d(fconvert.t(*(ebx_2 + 0x20)))
                                int32_t eax_22 =
                                    sub_49f544(arg1, ebx_2[1], ebx_2[3], ebx_2[4], var_70_7)
                                arg2 = eax_22
                                
                                if (eax_22 == 0xffffffff)
                                    return 0
                                
                                int32_t j = 0
                                
                                if ((**(i_2 + *(arg1 + 0x22c)) & 0xfffff) u> 0)
                                    do
                                        *(*(*(i_2 + *(arg1 + 0x22c)) + 8) + (j << 2)) = eax_22
                                        j += 1
                                    while (j u< (**(i_2 + *(arg1 + 0x22c)) & 0xfffff))
                                
                                int32_t* eax_23 = *(*(arg1 + 0x14) + (eax_22 << 2))
                                *(&var_5c + i_2) = ebx_2
                                sub_49f070(eax_23, ebx_2)
                                eax_23[3] = arg3
                            
                            if (sub_4b4917(var_14_2) != 0)
                                int32_t ecx_22 = *(arg1 + 0x14)
                                int32_t* ebx_3 = *(ecx_22 + (**(*(i_2 + *(arg1 + 0x230)) + 8) << 2))
                                
                                if (arg2 == 0xffffffff)
                                    int32_t var_6c_6 = ecx_22
                                    int32_t var_70_8 = ecx_22
                                    var_70_8.q = fconvert.d(fconvert.t(*(ebx_3 + 0x20)))
                                    int32_t eax_30 =
                                        sub_49f544(arg1, ebx_3[1], ebx_3[3], ebx_3[4], var_70_8)
                                    arg2 = eax_30
                                    
                                    if (eax_30 == 0xffffffff)
                                        return 0
                                
                                int32_t j_1 = 0
                                
                                if ((**(i_2 + *(arg1 + 0x230)) & 0xfffff) u> 0)
                                    do
                                        *(*(*(i_2 + *(arg1 + 0x230)) + 8) + (j_1 << 2)) = arg2
                                        j_1 += 1
                                    while (j_1 u< (**(i_2 + *(arg1 + 0x230)) & 0xfffff))
                                
                                *(&var_44 + i_2) = ebx_3
                                
                                if (eax_18 == 0)
                                    int32_t* ecx_34 = *(*(arg1 + 0x14) + (arg2 << 2))
                                    sub_49f070(ecx_34, ebx_3)
                                    ecx_34[3] = arg3
                            
                            if (arg2 == 0xffffffff)
                                return 0
                    
                    arg3 += 1
                
                for (int32_t i_3 = 0; i_3 u< 0x18; i_3 += 4)
                    void* ecx_36 = *(&var_5c + i_3)
                    
                    if (ecx_36 != 0)
                        *(ecx_36 + 4) = *(arg1 + 0x74)
                    
                    void* ecx_37 = *(&var_44 + i_3)
                    
                    if (ecx_37 != 0)
                        *(ecx_37 + 4) = *(arg1 + 0x74)
            
            *(arg1 + 0x220) = 6
            *(arg1 + 0x224) = 6
            return 1

return 0
