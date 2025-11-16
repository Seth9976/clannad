// 函数: sub_4eca80
// 地址: 0x4eca80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char eax_1 = sub_4ec600(arg2, *(arg3 + 0x13b3c))

if (eax_1 == 0)
    int32_t edi_1 = *(arg3 + 0x13b3c)
    void* eax_2 = edi_1 * 0x2d0
    void* esi_1 = edi_1 * 0x3920
    
    if (data_1af17ac != 0)
        void* ecx_1 = data_703660
        
        if (ecx_1 != 0xffffffff)
            uint32_t eax_3 = zx.d(data_703664)
            void* var_58_1 = ecx_1
            uint32_t var_5c_1 = eax_3
            sub_4a33f0(eax_3, data_703668, ecx_1, data_70366c)
        
        data_1af17ac = 0
    
    if (edi_1 u<= 0x3f)
        *(esi_1 + 0xf8d320) = 0
    
    int32_t eax_4 = data_1b8ad80:0xc
    
    if (eax_4 == edi_1 && data_1b8ad80.d != 0)
        if (eax_4 u<= 0x3f && *(eax_4 * 0x3920 + &data_f89ba4) != 0)
            *(eax_4 * 0x3920 + &data_f89bcc) += 1
        
        sub_499600(&data_1b8ad80)
    
    sub_576070(edi_1)
    int32_t eax_7 = data_137010c
    
    if (*(esi_1 + &data_f8d308) == 0 || *(esi_1 + &data_f8d300) != 0)
        data_13701d8 = 0
        
        if (eax_7 == 0 || eax_7 == 1)
        label_4ecb78:
            bool cond:2_1 = data_131923c == 0
            data_137010c = 2
            int32_t var_58_2 = 1
            int32_t var_64_1
            int32_t var_60_2
            int32_t var_5c_2
            
            if (cond:2_1)
                var_5c_2 = 0xffffffff
                var_60_2 = 0xffffffff
                var_64_1 = 0xffffffff
            else
                var_5c_2 = 0
                var_60_2 = 0
                var_64_1 = 0
            
            int32_t eax_8 =
                sub_4c6e40(eax_7, *(eax_2 + &data_8fcadc), eax_2, var_64_1, var_60_2, var_5c_2)
            
            if (data_1b8a6ec == 0)
                data_71929c = 3
                data_7192a0 = 0
                data_7192e0 = 0
                return eax_8
            
            eax_7 = data_137010c
    else if (eax_7 == 1)
        goto label_4ecb78
    
    if (eax_7 == 2)
        int32_t eax_9 = data_131310c
        data_137010c = 0
        data_1bfe02c = eax_9
        data_1b8add0 = 0
    
    int32_t ecx_4 = 2
    int32_t* edx_3
    
    if (*(esi_1 + 0xf8c778) == 0 || *(esi_1 + 0xf8c780) == 0)
        edx_3 = arg2
        
        if (edx_3[0xa] != 0)
            ecx_4 = 1
    else
        edx_3 = arg2
        ecx_4 = 0
    
    bool cond:5_1 = ecx_4 != 0
    data_1af1794 = 1
    uint32_t var_44
    
    if (ecx_4 != 0)
        uint32_t eax_10 = data_703678
        var_44 = 2
        
        if (eax_10 == 1)
            eax_10 = var_44
        
        data_703678 = eax_10
    
    char* var_4c
    char* ecx_5
    
    if (ecx_4 == 0)
        ecx_5 = *(esi_1 + 0xf8c780)
    else if (ecx_4 == 1)
        ecx_5 = edx_3[0xc]
    else if (ecx_4 != 2)
        ecx_5 = var_4c
    else
        ecx_5 = edx_3[8]
    
    int32_t* eax_15 = arg4
    char* esi_2 = ecx_5
    
    if (eax_15 != 0xffffffff)
        goto label_4eccf7
    
    eax_15.b = *ecx_5
    uint32_t var_48
    uint32_t var_40
    uint32_t var_3c
    uint32_t var_38
    int32_t var_14
    uint32_t ecx_6
    
    if (eax_15.b u< 0x80)
    label_4eccf2:
        eax_15 = 1
    label_4eccf7:
        var_14 = 0
        
        if (eax_15 == 1)
            ecx_6 = zx.d(*ecx_5)
        else if (eax_15 != 2)
            sub_4eba80(&var_38, edx_3, ecx_5, &var_38, &var_3c, &var_40, &var_44, &var_4c, &var_48, 
                &var_14)
            ecx_6 = var_38
        else
            ecx_6 = zx.d(ecx_5[1])
    else
        if (eax_15.b u< 0xa0)
            if (eax_15.b u>= 0xfe)
                goto label_4eccf2
        else if (eax_15.b u<= 0xdf || eax_15.b u>= 0xfe)
            goto label_4eccf2
        
        var_14 = 0
        sub_4eba80(&var_38, edx_3, ecx_5, &var_38, &var_3c, &var_40, &var_44, &var_4c, &var_48, 
            &var_14)
        ecx_6 = var_38
    
    sub_4ec7c0(sub_4ec740(ecx_6), ecx_6, edi_1, ecx_4)
    int32_t eax_18
    
    if (var_14 == 0)
        if (*(edi_1 * 0x1d4 + 0x1090c0c) == 0)
            eax_18 = 0
        else if (sub_4cf900(ecx_6.w, arg4) == 0)
            eax_18 = 0
        else
            int32_t eax_21
            eax_21.b = arg4 != 0
            eax_18 = eax_21 + 1
    else if (data_108febc == 0)
        eax_18 = 0
    else
        eax_18 = 1
    
    int32_t eax_22 = sub_57f980(edi_1, eax_18)
    
    if (eax_22 != 2)
        int32_t var_58_5 = eax_22
        return sub_4ec3e0(arg4, arg2, arg3, edi_1, arg4, ecx_4, ecx_5, var_14)
    
    char* eax_26 = ecx_5
    int32_t edi_2 = 0
    char var_28_1 = 0
    char ecx_10 = *eax_26
    
    if (ecx_10 == 0x20)
        goto label_4ecdb6
    
    var_28_1.d = zx.d(var_28_1)
    int32_t edx_12 = 0
    
    if (*(eax_2 + 0x8fcb0c) s> *(eax_2 + 0x8fcb14))
        edx_12 = 1
    
    var_28_1.d = edx_12
    int32_t edx_13
    int32_t esi_3
    
    if (edx_12.b == 0)
        esi_3 = edi_1
        edx_13 = ecx_4
    else
        eax_26 = ecx_5
    label_4ecdb6:
        
        if (edi_1 u> 0x3f)
            esi_3 = edi_1
            edx_13 = ecx_4
        else
            if (ecx_10 == 0x20)
                esi_2 = &eax_26[1]
            
            edx_13 = ecx_4
            
            if (edx_13 == 0)
                esi_3 = edi_1
            else if (edx_13 == 1)
                eax_26.b = *esi_2
                
                if (eax_26.b == 0)
                    esi_3 = edi_1
                else
                    while (eax_26.b != 0x20)
                        if (eax_26.b u>= 0x80 && (eax_26.b u< 0xa0 || eax_26.b u> 0xdf)
                                && eax_26.b u< 0xfe)
                            break
                        
                        eax_26.b = esi_2[1]
                        esi_2 = &esi_2[1]
                        edi_2 += 1
                        
                        if (eax_26.b == 0)
                            break
                    
                label_4ece52:
                    esi_3 = edi_1
                    
                    if (edi_2 s> 0)
                        uint32_t ecx_12 = *(eax_2 + 0x8fcb0c)
                        int32_t eax_32 = (*(esi_1 + 0xf8d2ec) s>> 1) * edi_2
                        var_38 = ecx_12
                        *(eax_2 + 0x8fcb0c) = eax_32 + ecx_12
                        bool cond:8_1 = sub_57fa10(esi_3, eax_18) != 0
                        *(eax_2 + 0x8fcb0c) = var_38
                        
                        if (not(cond:8_1))
                            uint32_t eax_36 = sub_57fa80(esi_3)
                            
                            if (eax_36 == 0)
                                int32_t var_58_6 = 2
                                return sub_4ec3e0(arg4, arg2, arg3, esi_3, arg4, ecx_4, ecx_5, 
                                    var_14)
                            
                            if (var_28_1 != 0)
                                return sub_57f8f0(eax_36, cond:5_1, esi_3, 1)
                        
                        edx_13 = ecx_4
            else if (edx_13 != 2 || arg2[9] == 0)
                esi_3 = edi_1
            else
                int32_t* eax_28
                eax_28.b = *esi_2
                
                if (eax_28.b != 0x20)
                    while (eax_28.b != 0x22)
                        if (eax_28.b == 0x5c)
                            ecx_10 = esi_2[1]
                        
                        if (eax_28.b == 0x5c && (ecx_10 == eax_28.b || ecx_10 == 0x22))
                            edi_2 += 1
                            esi_2 = &esi_2[2]
                        else
                            if (eax_28.b u>= 0x80 && (eax_28.b u< 0xa0 || eax_28.b u> 0xdf)
                                    && eax_28.b u< 0xfe)
                                break
                            
                            edi_2 += 1
                            esi_2 = &esi_2[1]
                        
                        eax_28.b = *esi_2
                        
                        if (eax_28.b == 0x20)
                            break
                    
                    goto label_4ece52
                
                esi_3 = edi_1
    
    if (*(esi_1 + &data_f8d2dc) != 0 || data_187c51f == 0)
        data_187c51d = 0
    
    data_1b8add0 += 1
    bool cond:7_1 = var_14 == 0
    *(esi_1 + 0xf8d318) = 0
    *(esi_1 + &data_f8d308) = 1
    void* eax_42
    
    if (not(cond:7_1))
        eax_42 = &ecx_5[8]
    else if (arg4 != 1)
        eax_42 = &ecx_5[2]
    else
        eax_42 = &ecx_5[1]
    
    if (edx_13 == 0)
        *(esi_1 + 0xf8c780) = eax_42
    else if (edx_13 == 1)
        arg2[0xc] = eax_42
    else if (edx_13 == 2)
        arg2[8] = eax_42
    
    sub_57e2b0(esi_3, 0x3f)
    int32_t ecx_22 = data_1af178c
    
    if (ecx_22 == 0)
        data_1b8a70c = data_1392710
        data_1af1788 = ecx_22
        data_1b8a704 = ecx_22
        data_1b8a708 = 1
    
    data_1af178c = ecx_22 + 1
    uint32_t eax_47 = sub_57fa10(esi_3, eax_18)
    int32_t edi_3
    
    if (eax_47 != 0)
        bool cond:9_1
        
        if (edi_2 s> 0)
            uint32_t ecx_26 = *(eax_2 + 0x8fcb0c)
            var_38 = ecx_26
            *(eax_2 + 0x8fcb0c) = (*(esi_1 + 0xf8d2ec) s>> 1) * edi_2 + ecx_26
            cond:9_1 = sub_57fa10(esi_3, eax_18) != 0
            eax_47 = var_38
            *(eax_2 + 0x8fcb0c) = eax_47
        
        if (edi_2 s<= 0 || cond:9_1)
            edi_3 = 0
        else
            eax_47 = sub_57f8f0(eax_47, cond:5_1, esi_3, 1)
            edi_3 = 1
    else
        eax_47 = sub_57f8f0(eax_47, cond:5_1, esi_3, 1)
        edi_3 = 1
    
    uint32_t edx_25 = ecx_6
    sub_4ec980(eax_47, edx_25, esi_3, var_14)
    bool ecx_30 = cond:5_1
    
    if (ecx_30 != 0)
        sub_498820(edx_25.w)
        
        if (var_14 != 0)
            sub_498820(var_3c.w)
            sub_498820(var_40.w)
            sub_498820(var_44.w)
        
        ecx_30 = cond:5_1
        edx_25 = ecx_6
    
    int32_t edi_5 = var_14
    
    if (edi_3 == 0 || edi_5 != 0 || (edx_25 != 0x8140 && edx_25 != 0x20))
        if (data_702fc0 != 0)
            sub_41bc40(edx_25.w)
            
            if (edi_5 != 0)
                sub_41bc40(var_3c.w)
                sub_41bc40(var_40.w)
                sub_41bc40(var_44.w)
        
        int32_t* eax_57 = sub_57e990(esi_3)
        
        if (edi_5 != 0)
            sub_57f650(eax_57, var_4c, esi_3, var_48, cond:5_1, 0xffffffff, 0, 1, 1)
        else
            sub_57f4b0(arg4, ecx_6, esi_3, arg4, cond:5_1, 0xffffffff, 0, 1, 1)
    else if (ecx_30 != 0)
        int16_t var_5c_6 = edx_25.w
        edx_25.b = 0
        uint32_t eax_56 = zx.d(*(eax_2 + &data_8fcadc))
        sub_4200a0(eax_56, edx_25.b, esi_3, eax_56.b, var_5c_6, 0)
    
    eax_1 = sub_4eca30(esi_3)
    
    if (data_1b8a6ec == 0 && arg5 == 0 && data_187c51f == 0)
        eax_1 = sub_4ec540()
    
    data_1af17bc = 1

return eax_1
