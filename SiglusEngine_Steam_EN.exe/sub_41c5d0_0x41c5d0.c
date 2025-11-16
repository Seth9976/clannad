// 函数: sub_41c5d0
// 地址: 0x41c5d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax
eax.b = *arg1
void* ebx = nullptr
char* var_8 = arg1

if (arg2 != 0)
    ebx = data_134ce68

void* var_c = ebx
int32_t result = 0

if (eax.b == 0)
    return 0

while (true)
    int32_t edi_6 = 0
    void* var_18
    int32_t var_14
    void* ecx_3
    void** edx
    void* ebx_3
    
    if (eax.b u< 0x80)
    label_41c766:
        
        if (eax.b == 0x23)
            char* temp0_1 = arg1
            arg1 = &arg1[1]
            char const* const esi_6 = "TITLE_FLAG"
            var_8 = arg1
            char* edx_5 = arg1
            
            if (temp0_1 == 0xffffffff)
            labelid_3:
                sub_41c570(arg1, &var_8)
            else
                int32_t edi_4 = 0
                
                if (*arg1 == 0)
                labelid_3:
                    sub_41c570(arg1, &var_8)
                else
                    while (true)
                        eax.b = *edx_5
                        
                        if (eax.b != *esi_6)
                            goto label_41c645_2
                        
                        if (eax.b u< 0x80)
                        label_41c7c1:
                            edx_5 = &edx_5[1]
                            esi_6 = &esi_6[1]
                            edi_4 += 1
                        else
                            if (eax.b u< 0xa0)
                                if (eax.b u>= 0xfe)
                                    goto label_41c7c1
                            else if (eax.b u<= 0xdf || eax.b u>= 0xfe)
                                goto label_41c7c1
                            
                            eax.b = edx_5[1]
                            
                            if (eax.b != esi_6[1])
                                goto label_41c645_2
                            
                            edx_5 = &edx_5[2]
                            esi_6 = &esi_6[2]
                            edi_4 += 2
                        
                        if (edi_4 != 0xa)
                            if (*edx_5 != 0)
                                continue
                            else if (*esi_6 != 0)
                                goto label_41c645_2
                        
                        var_8 = &arg1[0xa]
                        int32_t var_1c
                        
                        if (sub_4d11d0(&var_1c, &var_8, &arg1[0xa], &var_1c) != 0)
                            break
                        
                        int32_t edi_5 = var_1c
                        
                        if (edi_5 u> 0x13)
                            break
                        
                        char* esi_7 = var_8
                        edx = &var_8
                        
                        if (*esi_7 != 0x3d)
                            sub_41c570(esi_7, edx)
                        else
                            var_8 = &esi_7[1]
                            int32_t ecx_7
                            eax, ecx_7 = sub_41c570(&esi_7[1], edx)
                            
                            if (ebx != 0 && eax s> 0)
                                int32_t var_2c_4 = ecx_7
                                eax, edx = sub_41c0c0(&esi_7[1])
                                *((edi_5 << 2) + &data_134ce6c) = eax
                        
                        goto label_41c74f
                    
                    sub_41c570(var_8, &var_8)
        else
            int32_t esi_9
            
            if (eax.b == 0x41 || eax.b == 0x61)
                esi_9 = 0
            label_41c978:
                arg1 = &arg1[1]
            label_41c979:
                eax.b = *arg1
                var_8 = arg1
                char* ecx_11
                
                if (eax.b != 0x5b)
                    if ((eax.b == 0x42 || eax.b == 0x62) && arg1[1] == 0x5b)
                        esi_9 += 0x1a
                        ecx_11 = &arg1[2]
                        goto label_41c9fd
                    
                    if (eax.b == 0x32)
                        edx.b = arg1[1]
                        
                        if (edx.b == 0x42)
                            if (arg1[2] == 0x5b)
                                goto label_41c9b2
                        else if (edx.b == 0x62 && arg1[2] == 0x5b)
                        label_41c9b2:
                            esi_9 += 0x34
                            ecx_11 = &arg1[3]
                            goto label_41c9fd
                    
                    if (eax.b == 0x34)
                        edx.b = arg1[1]
                        
                        if (edx.b == 0x42)
                            if (arg1[2] == 0x5b)
                                goto label_41c9ce
                        else if (edx.b == 0x62 && arg1[2] == 0x5b)
                        label_41c9ce:
                            esi_9 += 0x4e
                            ecx_11 = &arg1[3]
                            goto label_41c9fd
                    
                    if (eax.b != 0x38)
                    labelid_3:
                        sub_41c570(arg1, &var_8)
                    else
                        eax.b = arg1[1]
                        
                        if ((eax.b == 0x42 || eax.b == 0x62) && arg1[2] == 0x5b)
                            esi_9 += 0x68
                            ecx_11 = &arg1[3]
                            goto label_41c9fd
                        
                    labelid_3:
                        sub_41c570(arg1, &var_8)
                else
                    ecx_11 = &arg1[1]
                label_41c9fd:
                    var_8 = ecx_11
                    
                    if (sub_4d11d0(&var_14, &var_8, ecx_11, &var_14) != 0)
                        sub_41c570(var_8, &var_8)
                    else
                        int32_t ebx_4 = var_14
                        char* ecx_4
                        
                        if (ebx_4 s< 0 || (edi_6 == 0 && ebx_4 s>= (&data_63ecb0)[esi_9]))
                        label_41c741:
                            ecx_4 = var_8
                        label_41c744:
                            sub_41c570(ecx_4, &var_8)
                            ebx = var_c
                        else
                            ecx_4 = var_8
                            
                            if (*ecx_4 != 0x5d || ecx_4[1] != 0x3a)
                                goto label_41c744
                            
                            var_8 = &ecx_4[2]
                            
                            if (sub_4d11d0(&var_18, &var_8, &ecx_4[2], &var_18) != 0)
                                goto label_41c741
                            
                            char* edi_7 = var_8
                            edx = &var_8
                            
                            if (*edi_7 != 0x3a)
                                sub_41c570(edi_7, edx)
                                ebx = var_c
                            else
                                result += 1
                                var_8 = &edi_7[1]
                                edx = sub_41c570(&edi_7[1], edx)
                                
                                if (var_c == 0)
                                    ebx = var_c
                                else
                                    eax = var_18
                                    *(var_c + 8) = ebx_4
                                    ebx_3 = var_c
                                    *(var_c + 4) = esi_9
                                    *(ebx_3 + 0xc) = eax
                                    
                                    if (edx s<= 0)
                                        ebx = ebx_3 + 0x20
                                        var_c = ebx
                                    else
                                        void* var_2c_7 = var_c
                                        ecx_3 = &edi_7[1]
                                    label_41c72a:
                                        eax, edx = sub_41c0c0(ecx_3)
                                        *(ebx_3 + 0x1c) = eax
                                        ebx = ebx_3 + 0x20
                                        var_c = ebx
            else
                switch (eax.b == 0x42)
                    case 0x42, 0x62
                        esi_9 = 1
                        goto label_41c978
                    case 0x43, 0x63
                        esi_9 = 2
                        goto label_41c978
                    case 0x44, 0x64
                        esi_9 = 3
                        goto label_41c978
                    case 0x45, 0x65
                        esi_9 = 4
                        goto label_41c978
                    case 0x46, 0x66
                        esi_9 = 5
                        goto label_41c978
                    case 0x47, 0x67
                        esi_9 = 6
                        goto label_41c978
                    case 0x48, 0x68
                        esi_9 = 7
                        edi_6 = 1
                        goto label_41c978
                    case 0x49, 0x69
                        esi_9 = 8
                        edi_6 = 1
                        goto label_41c978
                    case 0x4a, 0x6a
                        esi_9 = 9
                        edi_6 = 1
                        goto label_41c978
                
                if ((eax.b == 0x4d || eax.b == 0x6d) && arg1[1] == 0x5b)
                    esi_9 = 0xc
                    arg1 = &arg1[1]
                    goto label_41c979
                
                if ((eax.b == 0x53 || eax.b == 0x73) && arg1[1] == 0x5b)
                    esi_9 = 0x12
                    arg1 = &arg1[1]
                    goto label_41c979
                
                if (eax.b == 0x5a || eax.b == 0x7a)
                    esi_9 = 0x19
                    goto label_41c978
                
                sub_41c570(arg1, &var_8)
    else
        if (eax.b u< 0xa0)
            if (eax.b u>= 0xfe)
                goto label_41c766
            
            goto label_41c61e
        
        if (eax.b u<= 0xdf || eax.b u>= 0xfe)
            goto label_41c766
        
    label_41c61e:
        
        if (eax.b u< 0xa0 || eax.b u> 0xdf)
            uint32_t edi_3 = zx.d(eax.b) << 8 | zx.d(arg1[1])
            
            if (edi_3 == 0x8196 || edi_3 == 0x8193)
                uint32_t eax_1
                eax_1.b = arg1[2]
                
                if (eax_1.b u< 0x80)
                labelid_3:
                    sub_41c570(arg1, &var_8)
                else if (eax_1.b u< 0xa0)
                    if (eax_1.b u< 0xfe)
                        goto label_41c66c
                    
                labelid_3:
                    sub_41c570(arg1, &var_8)
                else if (eax_1.b u<= 0xdf || eax_1.b u>= 0xfe)
                labelid_3:
                    sub_41c570(arg1, &var_8)
                else
                label_41c66c:
                    uint32_t esi_3 = zx.d(eax_1.b) << 8 | zx.d(arg1[3])
                    
                    if (esi_3 - 0x8260 u> 0x19)
                    labelid_3:
                        sub_41c570(arg1, &var_8)
                    else
                        int32_t eax_3
                        eax_3.b = arg1[4]
                        uint32_t edx_3
                        
                        if (eax_3.b u< 0x80)
                            edx_3 = 0
                        else if (eax_3.b u< 0xa0)
                            if (eax_3.b u>= 0xfe)
                                edx_3 = 0
                            else
                                edx_3 = zx.d(eax_3.b) << 8 | zx.d(arg1[5])
                        else if (eax_3.b u<= 0xdf || eax_3.b u>= 0xfe)
                            edx_3 = 0
                        else
                            edx_3 = zx.d(eax_3.b) << 8 | zx.d(arg1[5])
                        
                        void* ecx
                        int32_t ebx_1
                        
                        if (arg1[4] != 0x3a)
                            if (edx_3 - 0x8260 u<= 0x19 && arg1[6] == 0x3a)
                                ecx = &arg1[7]
                                ebx_1 = edx_3 - 0xdc006 + esi_3 * 0x1a
                                goto label_41c6cf
                            
                        label_41c645:
                            sub_41c570(arg1, &var_8)
                        else
                            ecx = &arg1[5]
                            ebx_1 = esi_3 - 0x8260
                        label_41c6cf:
                            var_14 = ebx_1
                            var_8 = ecx
                            
                            if (sub_4d11d0(&var_18, &var_8, ecx, &var_18) != 0)
                                goto label_41c741
                            
                            char* esi_4 = var_8
                            edx = &var_8
                            
                            if (*esi_4 != 0x3a)
                                sub_41c570(esi_4, edx)
                                ebx = var_c
                            else
                                result += 1
                                var_8 = &esi_4[1]
                                edx = sub_41c570(&esi_4[1], edx)
                                
                                if (var_c == 0)
                                    ebx = var_c
                                else
                                    *(var_c + 8) = ebx_1
                                    ebx_3 = var_c
                                    int32_t eax_9
                                    eax_9.b = edi_3 != 0x8196
                                    *(var_c + 4) = eax_9 - 0x63
                                    *(ebx_3 + 0xc) = var_18
                                    
                                    if (edx s> 0)
                                        void* var_2c_2 = var_c
                                        ecx_3 = &esi_4[1]
                                        goto label_41c72a
                                    
                                    ebx = ebx_3 + 0x20
                                    var_c = ebx
            else
            label_41c645_1:
                sub_41c570(arg1, &var_8)
        else
        label_41c645_2:
            sub_41c570(arg1, &var_8)
label_41c74f:
    arg1 = var_8
    eax.b = *arg1
    
    if (eax.b == 0)
        break

return result
