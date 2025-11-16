// 函数: sub_4e7ac7
// 地址: 0x4e7ac7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg2
char* var_8 = *esi
int32_t edi
int32_t var_28 = edi
void* edi_1 = arg1
char* edx = *(edi_1 + 0x34)
int32_t* ebx = *(edi_1 + 4)
int32_t var_c = esi[1]
arg2 = *(edi_1 + 0x20)
arg1 = *(edi_1 + 0x1c)
int32_t eax_4 = *(edi_1 + 0x30)
void* eax_6

if (edx u>= eax_4)
    eax_6 = *(edi_1 + 0x2c) - edx
else
    eax_6 = eax_4 - edx - 1

while (true)
    void* var_10_1 = eax_6
    
    while (true)
    label_4e7f2c:
        char* ecx_25 = *ebx
        int32_t var_2c_4
        void* eax_36
        
        if (ecx_25 u<= 9)
            switch (ecx_25)
                case nullptr
                    if (eax_6 u>= 0x102 && var_c u>= 0xa)
                        *(edi_1 + 0x20) = arg2
                        *(edi_1 + 0x1c) = arg1
                        esi[1] = var_c
                        esi[2] += var_8 - *esi
                        *esi = var_8
                        *(edi_1 + 0x34) = edx
                        int32_t eax_14 = sub_4e8682(zx.d(ebx[4].b), zx.d(*(ebx + 0x11)), ebx[5], 
                            ebx[6], edi_1, esi)
                        edx = *(edi_1 + 0x34)
                        arg3 = eax_14
                        var_8 = *esi
                        var_c = esi[1]
                        arg2 = *(edi_1 + 0x20)
                        arg1 = *(edi_1 + 0x1c)
                        int32_t eax_19 = *(edi_1 + 0x30)
                        void* eax_21
                        
                        if (edx u>= eax_19)
                            eax_21 = *(edi_1 + 0x2c) - edx
                        else
                            eax_21 = eax_19 - edx - 1
                        
                        var_10_1 = eax_21
                        
                        if (arg3 != 0)
                            int32_t eax_23
                            eax_23.b = arg3 != 1
                            *ebx = eax_23 * 2 + 7
                        label_4e7d4e:
                            eax_6 = var_10_1
                            continue
                    
                    ebx[3] = zx.d(ebx[4].b)
                    ebx[2] = ebx[5]
                    *ebx = 1
                    goto label_4e7be8
                case 1
                label_4e7be8:
                    
                    while (true)
                        int32_t eax_30 = ebx[3]
                        
                        if (arg1 u>= eax_30)
                            char* eax_33 = ebx[2] + ((*((eax_30 << 2) + &data_ad00f8) & arg2) << 3)
                            arg2 u>>= eax_33[1]
                            arg1 -= zx.d(eax_33[1])
                            uint32_t ecx_6 = zx.d(*eax_33)
                            
                            if (ecx_6 == 0)
                                eax_36 = *(eax_33 + 4)
                                *ebx = 6
                                goto label_4e7d4b
                            
                            if ((ecx_6.b & 0x10) != 0)
                                ebx[2] = ecx_6 & 0xf
                                ebx[1] = *(eax_33 + 4)
                                *ebx = 2
                                goto label_4e7d4e
                            
                            if ((ecx_6.b & 0x40) == 0)
                                ebx[3] = ecx_6
                                eax_36 = &eax_33[*(eax_33 + 4) << 3]
                                goto label_4e7d4b
                            
                            if ((ecx_6.b & 0x20) != 0)
                                *ebx = 7
                                goto label_4e7d4e
                            
                            *ebx = 9
                            esi[6] = "invalid literal/length code"
                            goto label_4e7f75
                        
                        if (var_c == 0)
                            break
                        
                        arg3 = 0
                        var_c -= 1
                        arg2 |= zx.d(*var_8) << arg1.b
                        var_8 = &var_8[1]
                        arg1 += 8
                    
                label_4e7f8b:
                    var_2c_4 = arg3
                    *(edi_1 + 0x20) = arg2
                    *(edi_1 + 0x1c) = arg1
                    esi[1] = 0
                    goto label_4e7f50
                case 2
                    while (true)
                        int32_t eax_41 = ebx[2]
                        
                        if (arg1 u>= eax_41)
                            int32_t ecx_11 = ebx[2]
                            ebx[1] += *((eax_41 << 2) + &data_ad00f8) & arg2
                            arg2 u>>= ecx_11.b
                            arg1 -= ecx_11
                            ebx[3] = zx.d(*(ebx + 0x11))
                            ebx[2] = ebx[6]
                            *ebx = 3
                            goto label_4e7cf3
                        
                        if (var_c == 0)
                            break
                        
                        arg3 = 0
                        var_c -= 1
                        arg2 |= zx.d(*var_8) << arg1.b
                        var_8 = &var_8[1]
                        arg1 += 8
                    
                    goto label_4e7f8b
                case 3
                label_4e7cf3:
                    
                    while (true)
                        int32_t eax_50 = ebx[3]
                        
                        if (arg1 u>= eax_50)
                            char* eax_53 = ebx[2] + ((*((eax_50 << 2) + &data_ad00f8) & arg2) << 3)
                            arg2 u>>= eax_53[1]
                            arg1 -= zx.d(eax_53[1])
                            uint32_t eax_55 = zx.d(*eax_53)
                            
                            if ((eax_55.b & 0x10) != 0)
                                ebx[2] = eax_55 & 0xf
                                ebx[3] = *(eax_53 + 4)
                                *ebx = 4
                                goto label_4e7d4e
                            
                            if ((eax_55.b & 0x40) != 0)
                                *ebx = 9
                                esi[6] = "invalid distance code"
                                goto label_4e7f75
                            
                            ebx[3] = eax_55
                            eax_36 = &eax_53[*(eax_53 + 4) << 3]
                        label_4e7d4b:
                            ebx[2] = eax_36
                            goto label_4e7d4e
                        
                        if (var_c == 0)
                            break
                        
                        arg3 = 0
                        var_c -= 1
                        arg2 |= zx.d(*var_8) << arg1.b
                        var_8 = &var_8[1]
                        arg1 += 8
                    
                    goto label_4e7f8b
                case 4
                    while (true)
                        int32_t eax_62 = ebx[2]
                        
                        if (arg1 u>= eax_62)
                            int32_t ecx_17 = ebx[2]
                            ebx[3] += *((eax_62 << 2) + &data_ad00f8) & arg2
                            arg2 u>>= ecx_17.b
                            arg1 -= ecx_17
                            *ebx = 5
                            goto label_4e7da2
                        
                        if (var_c == 0)
                            break
                        
                        arg3 = 0
                        var_c -= 1
                        arg2 |= zx.d(*var_8) << arg1.b
                        var_8 = &var_8[1]
                        arg1 += 8
                    
                    goto label_4e7f8b
                case 5
                label_4e7da2:
                    int32_t ecx_18 = *(edi_1 + 0x28)
                    void* i_2 = edx - ebx[3]
                    void* i_1 = i_2
                    
                    if (i_2 u< ecx_18)
                        void* i
                        
                        do
                            i = i_1 + *(edi_1 + 0x2c) - ecx_18
                            i_1 = i
                        while (i u< *(edi_1 + 0x28))
                    
                    eax_6 = var_10_1
                    int32_t eax_74
                    
                    while (true)
                        if (ebx[1] == 0)
                            *ebx = 0
                            goto label_4e7f2c
                        
                        if (eax_6 == 0)
                            int32_t eax_70 = *(edi_1 + 0x2c)
                            
                            if (edx != eax_70)
                            label_4e7e07:
                                *(edi_1 + 0x34) = edx
                                eax_74 = sub_4e856f(edi_1, esi, arg3)
                                edx = *(edi_1 + 0x34)
                                int32_t eax_75 = *(edi_1 + 0x30)
                                
                                if (edx u>= eax_75)
                                    eax_6 = *(edi_1 + 0x2c) - edx
                                else
                                    eax_6 = eax_75 - edx - 1
                                
                                int32_t ecx_20 = *(edi_1 + 0x2c)
                                
                                if (edx == ecx_20)
                                    char* ecx_21 = *(edi_1 + 0x28)
                                    
                                    if (eax_75 != ecx_21)
                                        edx = ecx_21
                                        
                                        if (edx u>= eax_75)
                                            eax_6 = ecx_20 - edx
                                        else
                                            eax_6 = eax_75 - edx - 1
                                
                                if (eax_6 == 0)
                                    break
                            else
                                int32_t eax_71 = *(edi_1 + 0x30)
                                char* ecx_19 = *(edi_1 + 0x28)
                                
                                if (eax_71 == ecx_19)
                                    goto label_4e7e07
                                
                                edx = ecx_19
                                
                                if (edx u>= eax_71)
                                    eax_6 = eax_70 - edx
                                else
                                    eax_6 = eax_71 - edx - 1
                                
                                if (eax_6 == 0)
                                    goto label_4e7e07
                        
                        arg3 = 0
                        void* ecx_22
                        ecx_22.b = *i_1
                        *edx = ecx_22.b
                        edx = &edx[1]
                        i_1 += 1
                        eax_6 -= 1
                        var_10_1 = eax_6
                        
                        if (i_1 == *(edi_1 + 0x2c))
                            i_1 = *(edi_1 + 0x28)
                        
                        ebx[1] -= 1
                    
                    var_2c_4 = eax_74
                    goto label_4e7f3c
                case 6
                    if (eax_6 != 0)
                    label_4e7f1b:
                        arg3 = 0
                        ecx_25.b = ebx[2].b
                        *edx = ecx_25.b
                        edx = &edx[1]
                        eax_6 -= 1
                        *ebx = 0
                        break
                    
                    int32_t eax_81 = *(edi_1 + 0x2c)
                    
                    if (edx == eax_81)
                        int32_t eax_82 = *(edi_1 + 0x30)
                        ecx_25 = *(edi_1 + 0x28)
                        
                        if (eax_82 != ecx_25)
                            edx = ecx_25
                            
                            if (edx u>= eax_82)
                                eax_6 = eax_81 - edx
                            else
                                eax_6 = eax_82 - edx - 1
                            
                            if (eax_6 != 0)
                                goto label_4e7f1b
                    
                    *(edi_1 + 0x34) = edx
                    int32_t eax_85 = sub_4e856f(edi_1, esi, arg3)
                    edx = *(edi_1 + 0x34)
                    int32_t eax_86 = *(edi_1 + 0x30)
                    
                    if (edx u>= eax_86)
                        eax_6 = *(edi_1 + 0x2c) - edx
                    else
                        eax_6 = eax_86 - edx - 1
                    
                    ecx_25 = *(edi_1 + 0x2c)
                    char* var_18_6 = ecx_25
                    
                    if (edx == ecx_25)
                        ecx_25 = *(edi_1 + 0x28)
                        
                        if (eax_86 != ecx_25)
                            edx = ecx_25
                            
                            if (edx u>= eax_86)
                                eax_6 = var_18_6 - edx
                            else
                                eax_6 = eax_86 - edx - 1
                    
                    if (eax_6 != 0)
                        goto label_4e7f1b
                    
                    var_2c_4 = eax_85
                    goto label_4e7f3c
                case 7
                    if (arg1 u> 7)
                        arg1 -= 8
                        var_c += 1
                        var_8 -= 1
                    
                    *(edi_1 + 0x34) = edx
                    int32_t eax_99 = sub_4e856f(edi_1, esi, arg3)
                    edx = *(edi_1 + 0x34)
                    
                    if (*(edi_1 + 0x30) == edx)
                        *ebx = 8
                    label_4e7ff1:
                        var_2c_4 = 1
                        goto label_4e7f3c
                    
                    *(edi_1 + 0x20) = arg2
                    *(edi_1 + 0x1c) = arg1
                    esi[1] = var_c
                    void* ebx_2 = var_8 - *esi
                    *esi = var_8
                    esi[2] += ebx_2
                    var_2c_4 = eax_99
                case 8
                    goto label_4e7ff1
                case 9
                label_4e7f75:
                    var_2c_4 = 0xfffffffd
                    goto label_4e7f3c
        else
            var_2c_4 = 0xfffffffe
        label_4e7f3c:
            *(edi_1 + 0x20) = arg2
            *(edi_1 + 0x1c) = arg1
            esi[1] = var_c
        label_4e7f50:
            void* ecx_27 = var_8 - *esi
            *esi = var_8
            esi[2] += ecx_27
        *(edi_1 + 0x34) = edx
        return sub_4e856f(edi_1, esi, var_2c_4)
