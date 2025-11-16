// 函数: sub_4a50d0
// 地址: 0x4a50d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg3
char* esi = arg2
*arg8 = 0
*arg9 = 0

if (esi != 0)
    int32_t* ecx_2 = result[5]
    int32_t ebx_1 = result[4]
    void* edi_1 = *result
    int32_t var_c_1 = 0
    void* edx = result[1]
    void* edx_1 = result[2]
    int32_t eax = result[3]
    void* ecx_3 = nullptr
    int32_t edx_2 = 0
    void* var_8_1 = nullptr
    int32_t var_24_1 = 0
    int32_t* var_18_1 = nullptr
    int32_t eax_5
    
    if (eax s< 1)
        eax_5 = data_70300c * 2
    else
        int32_t eax_2
        int32_t edx_3
        edx_3:eax_2 = sx.q(edi_1)
        edx_2 = 0
        eax_5 = ((eax_2 + (edx_3 & 3)) s>> 2) + (edx + edi_1) * eax + 2
        ecx_3 = nullptr
    
    void* var_20_1
    
    if (ebx_1 u> 0xff)
        var_20_1 = &data_12a2990
    else
        var_20_1 = &(&data_12a2990)[ebx_1 * 2]
    
    void* var_1c_1
    
    if (ecx_2 u> 0xff)
        var_1c_1 = &data_12a2d8c
    else
        var_1c_1 = &(&data_12a2990)[ecx_2 * 2]
    
    int32_t* eax_8
    eax_8.b = *esi
    int32_t ecx_27
    int32_t* edx_23
    
    if (eax_8.b == 0)
        ecx_27 = 0
        edx_23 = nullptr
    else
        do
            uint32_t var_40
            
            if (eax_8.b u< 0x80)
            label_4a5313:
                
                if (eax_8.b != 0x23)
                label_4a550e:
                    int32_t ebx_9 = (edx + edi_1) s>> 1
                    
                    if (ebx_9 + edx_2 s> eax_5)
                        var_8_1 += edx_1 + edi_1
                        edx_2 = 0
                        var_c_1 = 0
                    
                    if (arg4 != 0 || arg5 != arg4)
                        int32_t var_74_11 = 1
                        int32_t* var_80_5
                        int32_t var_7c_5
                        int32_t var_78_5
                        
                        if (arg10 != 0)
                            var_78_5 = 0xffffffff
                            var_7c_5 = 2
                            var_80_5 = arg11
                        else if (data_131923c == 0)
                            var_78_5 = 0xffffffff
                            var_7c_5 = 0xffffffff
                            var_80_5 = arg11
                        else
                            var_78_5 = 0
                            var_7c_5 = 0
                            var_80_5 = nullptr
                        
                        sub_4c6e40(arg4, edi_1, ecx_3, var_80_5, var_7c_5, var_78_5)
                        char* ecx_23 = var_1c_1
                        char* edx_20 = var_20_1
                        uint32_t eax_38 = zx.d(*esi)
                        var_40 = eax_38
                        sub_4c7f10(eax_38, arg5, arg4, arg6, arg7, eax_38, var_c_1, var_8_1, 
                            edx_20, ecx_23, edx_20, ecx_23, arg12.b)
                        edx_2 = var_c_1
                    
                    int32_t ecx_25 = var_24_1
                    int32_t eax_39 = edx_2 + edi_1
                    
                    if (eax_39 s> ecx_25)
                        ecx_25 = eax_39
                    
                    int32_t* eax_41 = var_8_1 + edi_1
                    var_24_1 = ecx_25
                    int32_t* ecx_26 = var_18_1
                    
                    if (eax_41 s> ecx_26)
                        ecx_26 = eax_41
                    
                    edx_2 += ebx_9
                    int32_t* var_18_3 = ecx_26
                    var_18_1 = ecx_26
                    esi = &esi[1]
                    var_c_1 = edx_2
                    ecx_3 = var_8_1
                else
                    eax_8.b = esi[1]
                    ecx_3 = &esi[1]
                    
                    if (eax_8.b == 0x23)
                        esi = ecx_3 + 1
                        ecx_3 = var_8_1
                    else if (eax_8.b == 0x64 || eax_8.b == 0x44)
                        esi = ecx_3 + 1
                        var_8_1 += edx_1 + edi_1
                        edx_2 = 0
                        var_c_1 = edx_2
                        ecx_3 = var_8_1
                    else
                        int32_t var_14
                        char* var_10
                        
                        if (eax_8.b == 0x63 || eax_8.b == 0x43)
                            var_10 = ecx_3 + 1
                            int32_t eax_31
                            
                            if (sub_4d11d0(&var_14, &var_10, ecx_3 + 1, &var_14) == 0)
                                eax_31 = var_14
                                
                                if (eax_31 u<= 0xff)
                                    goto label_4a54a9
                                
                                var_20_1 = &(&data_12a2990)[0]
                            else
                                eax_31 = result[4]
                            label_4a54a9:
                                
                                if (eax_31 u<= 0xff)
                                    var_20_1 = &(&data_12a2990)[eax_31 * 2]
                                else
                                    var_20_1 = &data_12a2990
                            
                            if (ecx_2 u> 0xff)
                                esi = var_10
                                edx_2 = var_c_1
                                var_1c_1 = nullptr
                            else
                                esi = var_10
                                edx_2 = var_c_1
                                var_1c_1 = &(&data_12a2990)[ecx_2 * 2]
                            
                            ecx_3 = var_8_1
                        else if (eax_8.b == 0x73 || eax_8.b == 0x53)
                            var_10 = ecx_3 + 1
                            
                            if (sub_4d11d0(&var_14, &var_10, ecx_3 + 1, &var_14) == 0)
                                eax_8 = var_14
                                edi_1 = 0x10
                                esi = var_10
                                edx_2 = var_c_1
                                
                                if (eax_8 u<= 0x40)
                                    edi_1 = eax_8
                            else
                                esi = var_10
                                edx_2 = var_c_1
                                edi_1 = *result
                            
                            ecx_3 = var_8_1
                        else if (eax_8.b == 0x78 || eax_8.b == 0x58)
                            eax_8.b = *(ecx_3 + 1)
                            var_10 = ecx_3 + 1
                            
                            if (eax_8.b == 0x72 || eax_8.b == 0x52)
                                var_10 = ecx_3 + 2
                                edx_2 = var_c_1
                                
                                if (sub_4d11d0(&var_14, &var_10, ecx_3 + 2, &var_14) != 0)
                                    esi = var_10
                                else
                                    edx_2 += var_14
                                    esi = var_10
                                    var_c_1 = edx_2
                            else if (sub_4d11d0(&var_14, &var_10, ecx_3 + 1, &var_14) != 0)
                                edx_2 = var_c_1
                                esi = var_10
                            else
                                edx_2 = var_14
                                esi = var_10
                                var_c_1 = edx_2
                            
                            ecx_3 = var_8_1
                        else
                            if (eax_8.b != 0x79 && eax_8.b != 0x59)
                                goto label_4a550e
                            
                            eax_8.b = *(ecx_3 + 1)
                            var_10 = ecx_3 + 1
                            
                            if (eax_8.b == 0x72 || eax_8.b == 0x52)
                                var_10 = ecx_3 + 2
                                eax_8 = sub_4d11d0(&var_14, &var_10, ecx_3 + 2, &var_14)
                                ecx_3 = var_8_1
                                
                                if (eax_8 != 0)
                                    esi = var_10
                                    edx_2 = var_c_1
                                else
                                    ecx_3 += var_14
                                    esi = var_10
                                    edx_2 = var_c_1
                                    var_8_1 = ecx_3
                            else if (sub_4d11d0(&var_14, &var_10, ecx_3 + 1, &var_14) != 0)
                                ecx_3 = var_8_1
                                esi = var_10
                                edx_2 = var_c_1
                            else
                                ecx_3 = var_14
                                esi = var_10
                                edx_2 = var_c_1
                                var_8_1 = ecx_3
            else
                if (eax_8.b u< 0xa0)
                    if (eax_8.b u>= 0xfe)
                        goto label_4a5313
                    
                    goto label_4a51bb
                
                if (eax_8.b u<= 0xdf || eax_8.b u>= 0xfe)
                    goto label_4a5313
                
            label_4a51bb:
                
                if (edx + edx_2 + edi_1 s> eax_5)
                    var_c_1 = 0
                    var_8_1 = ecx_3 + edx_1 + edi_1
                
                uint32_t var_54
                uint32_t var_50
                uint32_t var_4c
                int32_t var_48
                uint32_t var_44
                int32_t var_34
                uint32_t* eax_15
                int32_t ecx_10
                eax_15, ecx_10 = sub_4eba80(&var_40, edx_2, esi, &var_40, &var_54, &var_50, 
                    &var_4c, &var_48, &var_44, &var_34)
                int32_t ebx_3 = var_34
                
                if (arg4 != 0 || arg5 != 0)
                    if (ebx_3 != 0)
                        void* eax_18 = var_1c_1
                        char* ecx_15 = nullptr
                        
                        if (var_44 != 0)
                            ecx_15 = var_20_1
                        
                        if (arg10 == 0 && data_131923c != 0)
                            eax_18 = nullptr
                        
                        void var_58
                        void* var_74_4 = &var_58
                        void var_5c
                        void* var_78_4 = &var_5c
                        void var_64
                        void var_60
                        sub_41f460(eax_18, arg5, arg4, arg6, arg7, var_48, edi_1, 0xffffffff, 
                            var_c_1, var_8_1, ecx_15, eax_18, ecx_15.b, eax_18, arg12, arg11, 
                            &var_64, &var_60)
                    else
                        int32_t var_74_2 = 1
                        int32_t* var_80_2
                        int32_t var_7c_2
                        int32_t var_78_2
                        
                        if (arg10 != ebx_3.b)
                            var_78_2 = 0xffffffff
                            var_7c_2 = 2
                            var_80_2 = arg11
                        else if (data_131923c == 0)
                            var_78_2 = 0xffffffff
                            var_7c_2 = 0xffffffff
                            var_80_2 = arg11
                        else
                            var_78_2 = 0
                            var_7c_2 = 0
                            var_80_2 = nullptr
                        
                        sub_4c6e40(eax_15, edi_1, ecx_10, var_80_2, var_7c_2, var_78_2)
                        uint32_t ecx_13 = zx.d(*esi) << 8 | zx.d(esi[1])
                        var_40 = ecx_13
                        sub_4c7f10(var_1c_1, arg5, arg4, arg6, arg7, ecx_13, var_c_1, var_8_1, 
                            var_20_1, var_1c_1, var_20_1, var_1c_1, arg12.b)
                
                int32_t eax_19 = var_24_1
                edx_2 = var_c_1 + edx + edi_1
                ecx_3 = var_8_1
                var_c_1 = edx_2
                
                if (edx_2 s> eax_19)
                    eax_19 = edx_2
                
                var_24_1 = eax_19
                int32_t* ebx_5 = var_18_1
                int32_t* eax_21 = edx + ecx_3 + edi_1
                
                if (eax_21 s> ebx_5)
                    ebx_5 = eax_21
                
                int32_t* var_18_2 = ebx_5
                var_18_1 = ebx_5
                
                if (var_34 != 0)
                    esi = &esi[8]
                else
                    esi = &esi[2]
            eax_8.b = *esi
        while (eax_8.b != 0)
        
        ecx_27 = var_24_1
        
        if (ecx_27 s> 0)
            ecx_27 += 3
        
        edx_23 = var_18_1
        
        if (edx_23 s> 0)
            edx_23 += 3
    
    int32_t eax_43 = data_70300c * 2
    
    if (ecx_27 s> eax_43)
        ecx_27 = eax_43
    
    int32_t* eax_45 = data_7030dc * 2
    
    if (edx_23 s> eax_45)
        edx_23 = eax_45
    
    *arg8 = ecx_27
    result = arg9
    *result = edx_23

return result
