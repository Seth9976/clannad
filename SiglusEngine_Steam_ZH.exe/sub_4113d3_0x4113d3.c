// 函数: sub_4113d3
// 地址: 0x4113d3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
int16_t var_40
sub_40bef8(&var_40, esi)
int32_t ecx_1 = *(esi + 0x250)
arg1 = nullptr

if (arg2 == 0 || arg3 == 0 || (*(esi + 0x215) & 4) != 0)
    arg2 = 0x8876086c
else
    int32_t edi
    int32_t var_60_1 = edi
    int32_t edi_1 = *(esi + 0x264)
    int32_t eax_3 = sub_745f3f(edi_1 * 6)
    int32_t eax_4
    
    if (eax_3 == 0)
        eax_4 = 0
    else
        sub_61cdd0(eax_3, 6, edi_1, sub_52e900)
        eax_4 = eax_3
    
    int16_t* ecx_3 = nullptr
    *(esi + 0x250) = eax_4
    
    if (eax_4 != 0)
        int16_t* eax_5 = arg2
        int32_t i = 0
        
        if (*(esi + 0x264) u> 0)
            do
                int32_t ebx_1
                ebx_1.w = *eax_5
                *(ecx_3 + *(esi + 0x250)) = ebx_1.w
                ebx_1.w = eax_5[2]
                *(ecx_3 + *(esi + 0x250) + 2) = ebx_1.w
                ebx_1.w = eax_5[4]
                eax_5 = &eax_5[6]
                *(ecx_3 + *(esi + 0x250) + 4) = ebx_1.w
                i += 1
                ecx_3 = &ecx_3[3]
            while (i u< *(esi + 0x264))
        
        int32_t ecx_5 = *(esi + 0x23c) << 2
        __builtin_memset(__builtin_memset(arg3, 0xffffffff, ecx_5 u>> 2 << 2), 0xff, ecx_5 & 3)
        int16_t* eax_8 = sub_40b67c(esi, &arg1, 0x10)
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
                int32_t var_4c_1 = *(esi + 0x264)
                var_18_1 = 1
                void var_54
                eax_11 = &var_54
                int32_t var_50_1 = 0
                int32_t var_48_1 = 0
                int32_t var_44_1 = *(esi + 0x23c)
            
            int32_t var_14_1 = 0
            
            if (var_18_1 u<= 0)
            label_411617:
                int32_t i_1 = 0
                
                if (*(esi + 0x23c) u> 0)
                    do
                        int32_t* ecx_18 = arg3 + (i_1 << 2)
                        
                        if (*ecx_18 == 0xffffffff)
                            *ecx_18 = i_1
                        
                        i_1 += 1
                    while (i_1 u< *(esi + 0x23c))
            else
                void* edi_7 = eax_11 + 4
                void* var_20_1 = edi_7
                
                while (true)
                    int32_t eax_12 = *edi_7
                    int32_t edx_5 = *(edi_7 + 4) + eax_12
                    int32_t var_1c_1 = edx_5
                    int32_t var_c_1 = eax_12
                    
                    if (eax_12 u< edx_5)
                        int32_t ecx_11 = eax_12 * 6
                        int32_t var_10_1 = ecx_11
                    label_41154f:
                        void* eax_14 = arg1 + ecx_11
                        int32_t var_8_1 = 0
                        
                        while (true)
                            void* eax_15
                            eax_15.w = *(eax_14 + (var_8_1 << 1))
                            
                            if (eax_15.w != 0xffff)
                                uint32_t edi_9 = zx.d(eax_15.w)
                                
                                if (*(arg3 + (edi_9 << 2)) == 0xffffffff)
                                    int32_t i_2 = 0
                                    sub_40f3ac(&var_40, var_c_1.w, eax_15.w, 0)
                                    
                                    do
                                        int16_t var_3c
                                        
                                        if (var_3c == 0xffff)
                                            edx_5 = var_1c_1
                                            ecx_11 = var_10_1
                                            goto label_4115de
                                        
                                        int16_t eax_16 = sub_40f985(&var_40)
                                        char var_30
                                        int16_t edx_6
                                        int16_t var_3a
                                        
                                        if (var_30 == 0)
                                            edx_6 = (mods.dp.d(sx.q(zx.d(var_3a) + 1), 3)).w
                                        else
                                            edx_6 = var_3a
                                        i_2 += 1
                                        *(arg3 + (
                                            zx.d(*(arg1 + ((zx.d(eax_16) * 3 + zx.d(edx_6)) << 1)))
                                            << 2)) = edi_9
                                    while (i_2 u<= 0x2710)
                                    
                                    arg2 = 0x88760b55
                                    break
                            
                        label_4115de:
                            var_8_1 += 1
                            
                            if (var_8_1 u>= 3)
                                var_c_1 += 1
                                ecx_11 += 6
                                var_10_1 = ecx_11
                                
                                if (var_c_1 u< edx_5)
                                    goto label_41154f
                                
                                edi_7 = var_20_1
                                goto label_411600
                        
                        break
                    
                label_411600:
                    var_14_1 += 1
                    edi_7 += 0x14
                    var_20_1 = edi_7
                    
                    if (var_14_1 u>= var_18_1)
                        goto label_411617
    else
        arg2 = 0x8007000e
    
    if (arg1 != 0)
        int32_t* eax_26 = *(esi + 0x248)
        (*(*eax_26 + 0x30))(eax_26)

int32_t __saved_ebx_2 = *(esi + 0x250)
*(esi + 0x24c) = 0
j__free(__saved_ebx_2)
*(esi + 0x250) = ecx_1
return arg2
