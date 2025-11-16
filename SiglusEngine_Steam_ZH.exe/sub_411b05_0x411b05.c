// 函数: sub_411b05
// 地址: 0x411b05
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = arg4 - arg5
uint32_t var_18 = 0xffffffff
int32_t var_14 = 0xffffffff
int32_t var_1c = 0xffffffff
int32_t edi
int32_t var_60 = edi
int32_t var_8 = 0
uint32_t var_20 = 0xffff
int32_t result_1 = sub_40c308(arg1)
int32_t result = result_1

if (result_1 s>= 0)
    uint32_t esi_1 = arg2
    int32_t result_2 = sub_410c82(esi_1, arg6.w, arg7.w, 0)
    result = result_2
    
    if (result_2 s>= 0)
        arg7 = 0
    label_411b63:
        uint32_t ebx_1 = zx.d(sub_40c2c0(esi_1))
        var_18 = ebx_1
        
        if (ebx_1 != 0xffff)
            int16_t* ecx_4 = *(esi_1 + 4) + zx.d(ebx_1.w) * 6
            uint32_t eax_5
            eax_5.w = *ecx_4
            uint32_t eax_7
            
            if (eax_5.w != 0xffff)
                eax_7 = zx.d(eax_5.w) - zx.d(*(esi_1 + 0x14))
            
            int32_t var_14_1
            
            if (eax_5.w == 0xffff || *(*(esi_1 + 0x10) + eax_7 * 6) != 0)
                ecx_4.w = ecx_4[1]
                uint32_t eax_10
                
                if (ecx_4.w != 0xffff)
                    eax_10 = zx.d(ecx_4.w) - zx.d(*(esi_1 + 0x14))
                
                if (ecx_4.w == 0xffff || *(*(esi_1 + 0x10) + eax_10 * 6) != 0)
                    var_14_1 = 0
                else
                    var_14_1 = 2
            else
                var_14_1 = 1
            
            while (true)
                if (var_20 != 0xffff)
                    int32_t eax_12 = var_14_1
                    arg4 = 1
                    uint32_t var_28 = ebx_1
                    
                    while (true)
                        int32_t var_24_1 = eax_12
                        uint32_t var_38
                        uint32_t* eax_16 = sub_40d17d(&var_38, &var_28, esi_1)
                        uint32_t ecx_6 = *eax_16
                        
                        if (ecx_6 == 0xffff)
                            break
                        
                        if (*(*(esi_1 + 0x10) + (zx.d(ecx_6.w) - zx.d(*(esi_1 + 0x14))) * 6) != 0)
                            break
                        
                        arg4 += 1
                        eax_12 = eax_16[1]
                        var_28 = ecx_6
                    
                    if (arg4 + var_8 - 1 s> eax_1)
                        if (*(*(esi_1 + 0x10) + (zx.d(var_20.w) - zx.d(*(esi_1 + 0x14))) * 6) == 0)
                            ebx_1 = var_20
                            var_18 = ebx_1
                            int32_t var_14_2 = var_1c
                        
                        var_20 = 0xffff
                
                while (true)
                    sub_410d80(esi_1, ebx_1.w)
                    int32_t eax_25 = zx.d(arg7.w) + arg6
                    arg7 += 1
                    arg4 = 0
                    *(arg3 + (ebx_1 << 2)) = eax_25
                    
                    do
                        sub_410283(arg1, *(arg8 + ebx_1 * 6 + (arg4 << 1)), &arg5:3)
                        var_8 += 1 - zx.d(arg5:3.b)
                        arg4 += 1
                    while (arg4 u< 3)
                    
                    uint32_t var_40
                    uint32_t* eax_30 = sub_40d17d(&var_40, &var_18, esi_1)
                    int32_t var_44_1 = eax_30[1]
                    uint32_t var_58
                    void var_50
                    uint32_t* eax_33 = sub_40d17d(&var_58, sub_40d21d(&var_50, &var_18), esi_1)
                    int32_t var_44_2 = eax_33[1]
                    uint32_t ecx_16 = *eax_30
                    uint32_t ecx_18
                    
                    if (ecx_16 != 0xffff)
                        ecx_18 = zx.d(ecx_16.w) - zx.d(*(esi_1 + 0x14))
                        arg4:3.b = 1
                    
                    if (ecx_16 == 0xffff || *(*(esi_1 + 0x10) + ecx_18 * 6) != 0)
                        arg4:3.b = 0
                    
                    uint32_t ecx_22 = *eax_33
                    uint32_t ecx_21
                    
                    if (ecx_22 != 0xffff)
                        ecx_21 = zx.d(ecx_22.w) - zx.d(*(esi_1 + 0x14))
                    
                    if (ecx_22 == 0xffff || *(*(esi_1 + 0x10) + ecx_21 * 6) != 0)
                        ecx_22.b = 0
                    else
                        ecx_22.b = 1
                    
                    if (arg4:3.b == 0)
                        if (ecx_22.b != 0)
                            ebx_1 = *eax_33
                            int32_t eax_41 = eax_33[1]
                            var_18 = ebx_1
                            var_14_1 = eax_41
                            break
                        
                        ebx_1 = var_20
                        var_18 = ebx_1
                        int32_t var_14_4 = var_1c
                        var_20 = 0xffff
                        
                        if (ebx_1 == 0xffff)
                            goto label_411b63
                        
                        if (*(*(esi_1 + 0x10) + (zx.d(ebx_1.w) - zx.d(*(esi_1 + 0x14))) * 6) != 0)
                            goto label_411b63
                    else
                        if (ecx_22.b != 0 && var_20 == 0xffff)
                            var_8 = 0
                            var_20 = *eax_33
                            var_1c = eax_33[1]
                        
                        ebx_1 = *eax_30
                        int32_t eax_36 = eax_30[1]
                        var_18 = ebx_1
                        int32_t var_14_3 = eax_36

return result
