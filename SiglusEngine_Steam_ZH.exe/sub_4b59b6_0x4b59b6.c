// 函数: sub_4b59b6
// 地址: 0x4b59b6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = nullptr
int32_t* var_c = nullptr
int32_t ecx = *(arg1 + 0x224)
int32_t eax = *(arg1 + 0x4c)
int32_t edi
int32_t var_f8 = edi
bool cond:0 = eax u< ecx
int32_t result

while (true)
    if (cond:0)
        int32_t* esi_1 = *(*(arg1 + 0x230) + (eax << 2))
        int32_t* var_2c_1 = esi_1
        
        if (esi_1 == 0)
            goto label_4b5d52
        
        int32_t eax_1 = *esi_1
        
        if (eax_1 == 0)
            goto label_4b5d52
        
        int32_t i_4 = eax_1 & 0xfffff
        uint32_t temp0_1 = divu.dp.d(0:(esi_1[1]), i_4)
        int32_t var_24_1 = 0
        
        if (temp0_1 u<= 0)
        label_4b5ced:
            void* eax_30 = sub_49ec23(0x74)
            
            if (eax_30 == 0)
                var_c = nullptr
            else
                var_c = sub_49e789(eax_30)
            
            if (var_c == 0)
            label_4b5d84:
                result = 0x8007000e
            else if (sub_49f431(arg1, var_c) s< 0)
            label_4b5d84_1:
                result = 0x8007000e
            else
                result = sub_49eecd(var_c, esi_1)
                
                if (result s< 0)
                    break
                
                int32_t eax_34 = *(arg1 + 0x224)
                
                if (eax_34 u>= 0x200)
                label_4b5d84_2:
                    result = 0x8007000e
                else
                    int32_t* edx_10 = var_c
                    var_c = nullptr
                    *(*(arg1 + 0x230) + (eax_34 << 2)) = edx_10
                    *(arg1 + 0x224) += 1
                    *esi_1 = 0
                label_4b5d52:
                    eax += 1
                    cond:0 = eax u< ecx
                    continue
        else
            int32_t* var_18_1 = nullptr
            int32_t var_9c[0xb]
            int32_t (* var_20_1)[0xb] = &var_9c
            
            while (true)
                *var_20_1 = 0xffffffff
                int32_t* edi_2 = &(*var_20_1)[1]
                *edi_2 = 0xffffffff
                void* edi_3 = &edi_2[1]
                *edi_3 = 0xffffffff
                *(edi_3 + 4) = 0xffffffff
                int32_t var_ec = 0xffffffff
                void var_e8
                void* edi_6 = &var_e8
                *edi_6 = 0xffffffff
                void* edi_7 = edi_6 + 4
                int32_t edx_3 = 0
                *edi_7 = 0xffffffff
                *(edi_7 + 4) = 0xffffffff
                int32_t var_28_1 = 0
                int32_t var_30_1 = 0
                
                if (i_4 u<= 0)
                label_4b5b32:
                    int32_t eax_8
                    int32_t ecx_10
                    eax_8, ecx_10 = sub_4b58e3(var_20_1, &var_ec, 2)
                    
                    if (eax_8 == 0)
                        int32_t var_4c
                        
                        for (int32_t i = 0; i u< 1; i += 1)
                            int32_t var_fc_1 = ecx_10
                            int32_t var_100_2 = ecx_10
                            var_100_2.q = fconvert.d(float.t(0))
                            int32_t eax_9
                            eax_9, ecx_10 = sub_49f544(arg1, *(arg1 + 0x88), 0, 3, var_100_2)
                            (&var_4c)[i] = eax_9
                            
                            if (eax_9 == 0xffffffff)
                                goto label_4b5d84_2
                        
                        void* eax_10 = sub_49ec23(0x74)
                        
                        if (eax_10 == 0)
                            var_8 = nullptr
                        else
                            var_8 = sub_49e789(eax_10)
                        
                        if (var_8 == 0)
                            goto label_4b5d84_2
                        
                        result = sub_49ec6e(var_8, 0x50000003, 6, 1, 0)
                        
                        if (result s< 0)
                            break
                        
                        result = sub_49e7bf(var_8, esi_1)
                        
                        if (result s< 0)
                            break
                        
                        int32_t* edi_18 = *(*(arg1 + 0x14) + (*(var_18_1 + esi_1[2]) << 2))
                        int32_t eax_16 = edi_18[4]
                        int32_t eax_17 = 0
                        int32_t var_10_2 = 0
                        int32_t var_6c
                        int32_t var_5c
                        
                        while (true)
                            int32_t ecx_17
                            
                            if (eax_17 != eax_16)
                                ecx_17 = *(arg1 + 0x440)
                            else
                                ecx_17 = *(arg1 + 0x444)
                            
                            int32_t var_fc_3 = ecx_17
                            int32_t var_100_3 = ecx_17
                            var_100_3.q = fconvert.d(fconvert.t(*(edi_18 + 0x20)))
                            int32_t var_10c_2 = edi_18[1]
                            (&var_5c)[eax_17] = ecx_17
                            int32_t eax_18 = sub_49f544(arg1, var_10c_2, 0, eax_17, var_100_3)
                            (&var_6c)[var_10_2] = eax_18
                            
                            if (eax_18 == 0xffffffff)
                                goto label_4b5d84_2
                            
                            int32_t* eax_19 = *(*(arg1 + 0x14) + (eax_18 << 2))
                            sub_49f070(eax_19, edi_18)
                            int32_t eax_21 = *(var_18_1 + esi_1[2])
                            int32_t ecx_25 = *(*(*(arg1 + 0x14) + (eax_21 << 2)) + 0x38)
                            
                            if (ecx_25 != 0xffffffff)
                                eax_19[0xe] = ecx_25
                            else
                                eax_19[0xe] = eax_21
                            
                            var_10_2 += 1
                            
                            if (var_10_2 u>= 3)
                                break
                            
                            eax_17 = var_10_2
                        
                        int32_t* edi_19 = var_8[2]
                        int32_t i_3 = i_4
                        *edi_19 = var_5c
                        void* edi_20 = &edi_19[1]
                        void var_58
                        void* esi_2 = &var_58
                        *edi_20 = *esi_2
                        *(edi_20 + 4) = *(esi_2 + 4)
                        int32_t* edi_24 = var_8[2] + 0xc
                        *edi_24 = var_6c
                        void* edi_25 = &edi_24[1]
                        void var_68
                        void* esi_5 = &var_68
                        *edi_25 = *esi_5
                        *(edi_25 + 4) = *(esi_5 + 4)
                        *var_8[4] = var_4c
                        
                        if (i_3 u> 0)
                            int32_t* eax_24 = var_18_1
                            int32_t i_1
                            
                            do
                                *(eax_24 + var_2c_1[2]) = var_4c
                                eax_24 = &eax_24[1]
                                i_1 = i_3
                                i_3 -= 1
                            while (i_1 != 1)
                        
                        int32_t eax_25 = *(arg1 + 0x224)
                        
                        if (eax_25 u>= 0x200)
                            goto label_4b5d84_2
                        
                        *(*(arg1 + 0x230) + (eax_25 << 2)) = var_8
                        *(arg1 + 0x224) += 1
                        
                        if (sub_49f431(arg1, var_8) s< 0)
                            goto label_4b5d84_2
                        
                        var_8 = nullptr
                        esi_1 = var_2c_1
                else
                    int32_t eax_5 = *esi_1 & 0xfff00000
                    int32_t* eax_7 = esi_1[2] + var_18_1
                    
                    do
                        int32_t ecx_2 = *(arg1 + 0x14)
                        void* edi_11 = *(ecx_2 + (*eax_7 << 2))
                        
                        if (eax_5 != 0x50000000 && i_4 == esi_1[3])
                            edx_3 = *(*(ecx_2 + (*(esi_1[4] + (edx_3 << 2)) << 2)) + 0x10)
                        
                        int32_t ecx_8 = edx_3 + (var_24_1 << 2)
                        
                        if ((*(*(*(arg1 + 0x10) + (*(edi_11 + 4) << 2)) + 5) & 1) == 0)
                            var_9c[ecx_8] = *(edi_11 + 0x10)
                        else
                            var_9c[ecx_8] = edx_3
                        
                        if (edx_3 == 3)
                            var_28_1 = 1
                        
                        (&var_ec)[edx_3] = 0
                        edx_3 = var_30_1 + 1
                        eax_7 = &eax_7[1]
                        var_30_1 = edx_3
                    while (edx_3 u< i_4)
                    
                    if (var_28_1 == 0)
                        goto label_4b5b32
                    
                    int32_t edx_6 = 1
                    
                    if (i_4 != 1 || (eax_5 == 0x50000000 && esi_1[3] == 1))
                        goto label_4b5b32
                    
                    int32_t (* ecx_9)[0xb] = var_20_1
                    
                    for (void* i_2 = nullptr; i_2 u< 0x10; )
                        if (*ecx_9 != *(i_2 + 0xb59728) && *(&var_ec + i_2) != 0xffffffff)
                            edx_6 = 0
                        
                        i_2 += 4
                        ecx_9 = &(*ecx_9)[1]
                    
                    if (edx_6 == 0)
                        goto label_4b5b32
                
                var_24_1 += 1
                var_20_1 = &(*var_20_1)[4]
                var_18_1 = &var_18_1[i_4]
                
                if (var_24_1 u>= temp0_1)
                    goto label_4b5ced
    else
        result = 0
    
    if (var_8 == 0)
        break
    
    sub_46cb59(var_8, 1)
    break

if (var_c != 0)
    sub_46cb59(var_c, 1)

return result
