// 函数: sub_411878
// 地址: 0x411878
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
int32_t var_5c
sub_40bf22(&var_5c, esi)
int32_t ecx_1 = *(esi + 0x250)
arg1 = nullptr

if (arg2 == 0 || arg3 == 0 || (*(esi + 0x215) & 4) != 0)
    arg2 = 0x8876086c
else
    int32_t edi
    int32_t var_68_1 = edi
    int32_t edi_1 = *(esi + 0x264)
    int32_t eax_3 = sub_745f3f(edi_1 * 0xc)
    int32_t eax_4
    
    if (eax_3 == 0)
        eax_4 = 0
    else
        sub_61cdd0(eax_3, 0xc, edi_1, sub_52e900)
        eax_4 = eax_3
    
    int32_t* ecx_3 = nullptr
    *(esi + 0x250) = eax_4
    
    if (eax_4 != 0)
        int32_t* eax_5 = arg2
        int32_t i = 0
        
        if (*(esi + 0x264) u> 0)
            do
                *(ecx_3 + *(esi + 0x250)) = *eax_5
                *(ecx_3 + *(esi + 0x250) + 4) = eax_5[1]
                int32_t ebx_4 = eax_5[2]
                eax_5 = &eax_5[3]
                *(ecx_3 + *(esi + 0x250) + 8) = ebx_4
                i += 1
                ecx_3 = &ecx_3[3]
            while (i u< *(esi + 0x264))
        
        int32_t ecx_5 = *(esi + 0x23c) << 2
        __builtin_memset(__builtin_memset(arg3, 0xffffffff, ecx_5 u>> 2 << 2), 0xff, ecx_5 & 3)
        int32_t* eax_8 = sub_40b67c(esi, &arg1, 0x10)
        arg2 = eax_8
        
        if (eax_8 s>= 0)
            *(esi + 0x24c) = arg1
            int32_t eax_10 = *(esi + 0x260)
            int32_t var_18_1
            void* eax_11
            
            if (eax_10 != 0)
                var_18_1 = eax_10
                eax_11 = *(esi + 0x25c)
            else
                int32_t var_38_1 = *(esi + 0x264)
                var_18_1 = 1
                void var_40
                eax_11 = &var_40
                int32_t var_3c_1 = 0
                int32_t var_34_1 = 0
                int32_t var_30_1 = *(esi + 0x23c)
            
            int32_t var_14_1 = 0
            
            if (var_18_1 u<= 0)
            label_411aad:
                int32_t i_1 = 0
                
                if (*(esi + 0x23c) u> 0)
                    do
                        int32_t* ecx_18 = arg3 + (i_1 << 2)
                        
                        if (*ecx_18 == 0xffffffff)
                            *ecx_18 = i_1
                        
                        i_1 += 1
                    while (i_1 u< *(esi + 0x23c))
            else
                void* edx_4 = eax_11 + 4
                void* var_24_1 = edx_4
                
                while (true)
                    int32_t eax_12 = *edx_4
                    int32_t ecx_11 = *(edx_4 + 4) + eax_12
                    int32_t var_1c_1 = ecx_11
                    int32_t var_c_1 = eax_12
                    
                    if (eax_12 u< ecx_11)
                        int32_t ebx_6 = eax_12 * 0xc
                        int32_t var_20_1 = ebx_6
                    label_4119f0:
                        void* eax_14 = arg1 + ebx_6
                        int32_t var_8_1 = 0
                        
                        while (true)
                            int32_t edi_7 = *(eax_14 + (var_8_1 << 2))
                            
                            if (edi_7 != 0xffffffff && *(arg3 + (edi_7 << 2)) == 0xffffffff)
                                sub_40f41f(&var_5c, var_c_1, edi_7, 0)
                                
                                for (int32_t i_2 = 0; i_2 u<= 0x2710; )
                                    int32_t var_54
                                    
                                    if (var_54 == 0xffffffff)
                                        ecx_11 = var_1c_1
                                        goto label_411a74
                                    
                                    int32_t eax_17 = sub_40fa91(&var_5c)
                                    char var_44
                                    uint32_t edx_6
                                    uint32_t var_50
                                    
                                    if (var_44 == 0)
                                        edx_6 = modu.dp.d(0:(var_50 + 1), 3)
                                        ebx_6 = var_20_1
                                    else
                                        edx_6 = var_50
                                    i_2 += 1
                                    *(arg3 + (*(arg1 + ((eax_17 * 3 + edx_6) << 2)) << 2)) = edi_7
                                
                                arg2 = 0x88760b55
                                break
                            
                        label_411a74:
                            var_8_1 += 1
                            
                            if (var_8_1 u>= 3)
                                var_c_1 += 1
                                ebx_6 += 0xc
                                var_20_1 = ebx_6
                                
                                if (var_c_1 u< ecx_11)
                                    goto label_4119f0
                                
                                edx_4 = var_24_1
                                goto label_411a96
                        
                        break
                    
                label_411a96:
                    var_14_1 += 1
                    edx_4 += 0x14
                    var_24_1 = edx_4
                    
                    if (var_14_1 u>= var_18_1)
                        goto label_411aad
    else
        arg2 = 0x8007000e
    
    if (arg1 != 0)
        int32_t* eax_25 = *(esi + 0x248)
        (*(*eax_25 + 0x30))(eax_25)

int32_t __saved_ebx_2 = *(esi + 0x250)
*(esi + 0x24c) = 0
j__free(__saved_ebx_2)
*(esi + 0x250) = ecx_1
return arg2
