// 函数: sub_4b8ff0
// 地址: 0x4b8ff0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_702ff0
int32_t* esi = arg3
int32_t eax_1 = data_702fec
void* i = data_702fe8
int32_t* var_54 = esi
void* i_1 = i

if (esi[2] != 0)
    int32_t var_e4
    sub_4d1c30(i, arg4, &var_e4, 0x8c)
    int32_t var_174
    
    if (esi[7] == 3)
        sub_4d1c30(i, arg4, &var_174, 0x8c)
    
    i = esi[3]
    void* i_2
    
    if (i == 0)
        i_2 = 4
    label_4b9076:
        int32_t var_6c_1 = esi[0x15]
        int32_t var_68_1 = esi[0x16]
        int32_t var_64_1 = esi[0x17]
        int32_t var_60_1 = esi[0x18]
        i = esi[2]
        void* i_3 = nullptr
        
        if (*esi s> 0)
            int32_t var_2c
            int32_t edx_1 = var_2c
            int32_t* ecx_2 = i + 0x118
            int32_t var_20
            int32_t ebx_1 = var_20
            int32_t var_28
            int32_t var_8_1 = var_28
            int32_t var_24
            int32_t var_14_1 = var_24
            i = nullptr
            int32_t* var_18_1 = ecx_2
            int32_t var_c_1 = edx_1
            int32_t var_10_1 = ebx_1
            
            do
                if (ecx_2[-0x1e] != 0 && ecx_2[-0x1f] s> 0 && (*ecx_2 != 0 || ecx_2[1] != 0))
                    if (esi[7] != 3)
                        i.b = *ecx_2
                        char var_9c_2 = i.b
                        var_e4 = ecx_2[-0x1d]
                        int32_t eax_31 = ecx_2[-0x1f]
                        int32_t var_88_2 = eax_31
                        int32_t var_8c_2 = eax_31
                        
                        if (i_2 s> 0)
                            void* esi_2 = &ecx_2[-0x17]
                            void* j_3 = i_2
                            void* j
                            
                            do
                                if (*(esi_2 - 4) != 0)
                                    int32_t var_e0_2 = *esi_2
                                    int32_t var_dc_2 = *(esi_2 + 4)
                                    
                                    if (ecx_2[-0x1f] != 0x3e8)
                                        sub_425be0(esi_2 - 0x14, &var_e4, arg2, esi_2 - 0x14, 
                                            esi_2 - 0x10, esi_2 - 0xc, esi_2 - 8, i_1, eax_1, eax)
                                        ecx_2 = var_18_1
                                    else if (arg2 u<= 0x1ff)
                                        sub_425430(arg2, 1)
                                        
                                        if (*(arg2 * 0x74 + 0x13747b0) != 0)
                                            sub_427ea0(esi_2 - 0x14, &var_e4, 
                                                arg2 * 0x74 + 0x13747b0, esi_2 - 0x14, 
                                                esi_2 - 0x10, esi_2 - 0xc, esi_2 - 8)
                                        
                                        ecx_2 = var_18_1
                                
                                esi_2 += 0x1c
                                j = j_3
                                j_3 -= 1
                            while (j != 1)
                            edx_1 = var_c_1
                            ebx_1 = var_10_1
                            esi = var_54
                    else
                        char var_12c_1 = ecx_2[1].b
                        var_174 = esi[8]
                        int32_t eax_10 = ecx_2[-0x1f]
                        int32_t var_118_1 = eax_10
                        int32_t var_11c_1 = eax_10
                        char var_9c_1 = *ecx_2
                        var_e4 = esi[9]
                        int32_t eax_13 = ecx_2[-0x1f]
                        int32_t var_88_1 = eax_13
                        int32_t var_8c_1 = eax_13
                        void* j_2 = i_2
                        
                        if (j_2 s> 0)
                            void* esi_1 = &ecx_2[-0x17]
                            void* j_4 = j_2
                            void* j_1
                            
                            do
                                if (*(esi_1 - 4) != 0)
                                    int32_t var_e0_1 = *esi_1
                                    int32_t var_dc_1 = *(esi_1 + 4)
                                    int32_t var_170_1 = *esi_1
                                    int32_t var_16c_1 = *(esi_1 + 4)
                                    int32_t var_3c
                                    int32_t var_38
                                    int32_t var_34
                                    int32_t var_30
                                    int32_t eax_24
                                    
                                    if (ecx_2[-0x1f] != 0x3e8)
                                        sub_425be0(&var_24, &var_174, arg2, &var_24, &var_20, 
                                            &var_2c, &var_28, i_1, eax_1, eax)
                                        sub_425be0(&var_30, &var_e4, arg2, &var_30, &var_38, 
                                            &var_3c, &var_34, i_1, eax_1, eax)
                                        eax_24 = var_28
                                        edx_1 = var_2c
                                        ebx_1 = var_20
                                        var_8_1 = eax_24
                                        var_c_1 = edx_1
                                        var_10_1 = ebx_1
                                        var_14_1 = var_24
                                    else
                                        if (arg2 s>= 0 && arg2 s< 0x200)
                                            sub_425430(arg2, 1)
                                            void* ebx_2 = arg2 * 0x74
                                            
                                            if (*(ebx_2 + 0x13747b0) != 0)
                                                sub_427ea0(&var_24, &var_174, ebx_2 + 0x13747b0, 
                                                    &var_24, &var_20, &var_2c, &var_28)
                                                var_8_1 = var_28
                                                var_c_1 = var_2c
                                                var_10_1 = var_20
                                                var_14_1 = var_24
                                            
                                            sub_425430(arg2, 1)
                                            
                                            if (*(ebx_2 + 0x13747b0) != 0)
                                                sub_427ea0(&var_30, &var_e4, ebx_2 + 0x13747b0, 
                                                    &var_30, &var_38, &var_3c, &var_34)
                                            
                                            ebx_1 = var_10_1
                                            edx_1 = var_c_1
                                        
                                        eax_24 = var_8_1
                                    
                                    ecx_2 = var_18_1
                                    
                                    if (var_14_1 != 0xffffffff || ebx_1 != 0xffffffff
                                            || edx_1 != ebx_1 || eax_24 != ebx_1)
                                        if (var_30 != 0xffffffff || var_38 != 0xffffffff
                                                || var_3c != 0xffffffff || var_34 != 0xffffffff)
                                            int32_t ecx_10 = var_14_1
                                            
                                            if (ecx_10 s> var_30)
                                                ecx_10 = var_30
                                            
                                            var_14_1 = ecx_10
                                            
                                            if (edx_1 s< var_3c)
                                                edx_1 = var_3c
                                            
                                            bool cond:6_1 = ebx_1 s> var_38
                                            var_24 = ecx_10
                                            
                                            if (cond:6_1)
                                                ebx_1 = var_38
                                            
                                            var_c_1 = edx_1
                                            
                                            if (eax_24 s< var_34)
                                                eax_24 = var_34
                                            
                                            var_2c = edx_1
                                            var_10_1 = ebx_1
                                            var_20 = ebx_1
                                            var_8_1 = eax_24
                                            var_28 = eax_24
                                        
                                        *(esi_1 - 0x14) = var_14_1
                                        ecx_2 = var_18_1
                                        *(esi_1 - 0x10) = ebx_1
                                        *(esi_1 - 0xc) = edx_1
                                    else
                                        *(esi_1 - 0x14) = var_30
                                        *(esi_1 - 0x10) = var_38
                                        *(esi_1 - 0xc) = var_3c
                                        eax_24 = var_34
                                    
                                    *(esi_1 - 8) = eax_24
                                    j_2 = j_4
                                
                                esi_1 += 0x1c
                                j_1 = j_2
                                j_2 -= 1
                                j_4 = j_2
                            while (j_1 != 1)
                            esi = var_54
                    
                    i = i_3
                
                i += 1
                ecx_2 = &ecx_2[0x6d]
                var_18_1 = ecx_2
                i_3 = i
            while (i s< *esi)
    else if (i == 1)
        i_2 = i
        goto label_4b9076

return i
