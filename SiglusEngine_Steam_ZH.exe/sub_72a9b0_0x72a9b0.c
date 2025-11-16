// 函数: sub_72a9b0
// 地址: 0x72a9b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1[6]
char* edi = *ebx
int32_t esi = ebx[1]

if (*(arg1[0x6b] + 0xd) == 0)
    *(*arg1 + 0x14) = 0x3c
    _strncpy(*arg1 + 0x18, "LSE", 0x50)
    (**arg1)(arg1)

int32_t* ecx_1 = arg1

if (ecx_1[9] s< 3)
    goto label_72ae4d

if (esi != 0)
    goto label_72aa2c

if (ebx[3](ecx_1) != 0)
    edi = *ebx
    esi = ebx[1]
    ecx_1 = arg1
label_72aa2c:
    void* edi_1 = &edi[1]
    uint32_t edx_2 = zx.d(*edi) << 8
    int32_t esi_1 = esi - 1
    
    if (esi != 1)
        goto label_72aa53
    
    if (ebx[3](arg1) != 0)
        edi_1 = *ebx
        esi_1 = ebx[1]
        ecx_1 = arg1
    label_72aa53:
        int32_t esi_2 = esi_1 - 1
        void* edi_2 = edi_1 + 1
        
        if (edx_2 + zx.d(*edi_1) != 0x18)
            *(*arg1 + 0x14) = 0xc
            (**arg1)(arg1)
            ecx_1 = arg1
        
        if (esi_2 != 0)
            goto label_72aa93
        
        if (ebx[3](arg1) != 0)
            edi_2 = *ebx
            esi_2 = ebx[1]
            ecx_1 = arg1
        label_72aa93:
            int32_t esi_3 = esi_2 - 1
            void* edi_3 = edi_2 + 1
            
            if (zx.d(*edi_2) != 0xd)
                *(*arg1 + 0x14) = 0x46
                *(*arg1 + 0x18) = arg1[0x65]
                (**arg1)(arg1)
                ecx_1 = arg1
            
            if (esi_3 != 0)
                goto label_72aae0
            
            if (ebx[3](arg1) != 0)
                edi_3 = *ebx
                esi_3 = ebx[1]
                ecx_1 = arg1
            label_72aae0:
                void* edi_4 = edi_3 + 1
                uint32_t edx_6 = zx.d(*edi_3) << 8
                int32_t esi_4 = esi_3 - 1
                
                if (esi_3 != 1)
                    goto label_72ab0b
                
                if (ebx[3](arg1) != 0)
                    edi_4 = *ebx
                    esi_4 = ebx[1]
                    ecx_1 = arg1
                label_72ab0b:
                    esi = esi_4 - 1
                    edi = edi_4 + 1
                    
                    if (edx_6 + zx.d(*edi_4) != 0xff)
                        goto label_72ae4d
                    
                    if (esi != 0)
                        goto label_72ab3a
                    
                    if (ebx[3](arg1) != 0)
                        edi = *ebx
                        esi = ebx[1]
                        ecx_1 = arg1
                    label_72ab3a:
                        uint32_t eax_24 = zx.d(*edi)
                        esi -= 1
                        edi = &edi[1]
                        
                        if (eax_24 != 3)
                            goto label_72ae4d
                        
                        if (esi != 0)
                            goto label_72ab67
                        
                        if (ebx[3](arg1) != 0)
                            edi = *ebx
                            esi = ebx[1]
                        label_72ab67:
                            esi -= 1
                            uint32_t ecx_4 = zx.d(*edi)
                            edi = &edi[1]
                            
                            if (ecx_4 != *(arg1[0x31] + 0x58))
                            label_72ae45:
                                ecx_1 = arg1
                            label_72ae4d:
                                *(*ecx_1 + 0x14) = 0x1c
                                (**arg1)(arg1)
                            label_72ae63:
                                arg1[0x43] = 1
                                int32_t* result
                                result.b = 1
                                *ebx = edi
                                ebx[1] = esi
                                return result
                            
                            if (esi != 0)
                                goto label_72ab9a
                            
                            if (ebx[3](arg1) != 0)
                                edi = *ebx
                                esi = ebx[1]
                            label_72ab9a:
                                esi -= 1
                                uint32_t ecx_5 = zx.d(*edi)
                                edi = &edi[1]
                                
                                if (ecx_5 != *arg1[0x31])
                                    goto label_72ae45
                                
                                if (esi != 0)
                                    goto label_72abcc
                                
                                if (ebx[3](arg1) != 0)
                                    edi = *ebx
                                    esi = ebx[1]
                                label_72abcc:
                                    esi -= 1
                                    uint32_t ecx_6 = zx.d(*edi)
                                    edi = &edi[1]
                                    
                                    if (ecx_6 != *(arg1[0x31] + 0xb0))
                                        goto label_72ae45
                                    
                                    if (esi != 0)
                                        goto label_72abff
                                    
                                    if (ebx[3](arg1) != 0)
                                        edi = *ebx
                                        esi = ebx[1]
                                    label_72abff:
                                        uint32_t eax_35 = zx.d(*edi)
                                        esi -= 1
                                        edi = &edi[1]
                                        
                                        if (eax_35 != 0x80)
                                            goto label_72ae45
                                        
                                        if (esi != 0)
                                            goto label_72ac2e
                                        
                                        if (ebx[3](arg1) != 0)
                                            edi = *ebx
                                            esi = ebx[1]
                                        label_72ac2e:
                                            void* edi_5 = &edi[1]
                                            uint32_t ecx_8 = zx.d(*edi) << 8
                                            int32_t esi_5 = esi - 1
                                            
                                            if (esi != 1)
                                                goto label_72ac56
                                            
                                            if (ebx[3](arg1) != 0)
                                                edi_5 = *ebx
                                                esi_5 = ebx[1]
                                            label_72ac56:
                                                esi = esi_5 - 1
                                                edi = edi_5 + 1
                                                
                                                if (ecx_8 != neg.d(zx.d(*edi_5)))
                                                    goto label_72ae45
                                                
                                                if (esi != 0)
                                                    goto label_72ac7f
                                                
                                                if (ebx[3](arg1) != 0)
                                                    edi = *ebx
                                                    esi = ebx[1]
                                                label_72ac7f:
                                                    void* edi_6 = &edi[1]
                                                    uint32_t ecx_11 = zx.d(*edi) << 8
                                                    int32_t esi_6 = esi - 1
                                                    
                                                    if (esi != 1)
                                                        goto label_72aca7
                                                    
                                                    if (ebx[3](arg1) != 0)
                                                        edi_6 = *ebx
                                                        esi_6 = ebx[1]
                                                    label_72aca7:
                                                        esi = esi_6 - 1
                                                        edi = edi_6 + 1
                                                        
                                                        if (ecx_11 != neg.d(zx.d(*edi_6)))
                                                            goto label_72ae45
                                                        
                                                        if (esi != 0)
                                                            goto label_72accd
                                                        
                                                        if (ebx[3](arg1) != 0)
                                                            edi = *ebx
                                                            esi = ebx[1]
                                                        label_72accd:
                                                            uint32_t eax_43 = zx.d(*edi)
                                                            esi -= 1
                                                            edi = &edi[1]
                                                            
                                                            if (eax_43 != 0)
                                                                goto label_72ae45
                                                            
                                                            if (esi != 0)
                                                                goto label_72acf9
                                                            
                                                            if (ebx[3](arg1) != 0)
                                                                edi = *ebx
                                                                esi = ebx[1]
                                                            label_72acf9:
                                                                void* edi_7 = &edi[1]
                                                                uint32_t ecx_14 = zx.d(*edi) << 8
                                                                int32_t esi_7 = esi - 1
                                                                
                                                                if (esi != 1)
                                                                    goto label_72ad21
                                                                
                                                                if (ebx[3](arg1) != 0)
                                                                    edi_7 = *ebx
                                                                    esi_7 = ebx[1]
                                                                label_72ad21:
                                                                    esi = esi_7 - 1
                                                                    edi = edi_7 + 1
                                                                    
                                                                    if (ecx_14 + zx.d(*edi_7) != 1)
                                                                        goto label_72ae45
                                                                    
                                                                    if (esi != 0)
                                                                        goto label_72ad4d
                                                                    
                                                                    if (ebx[3](arg1) != 0)
                                                                        edi = *ebx
                                                                        esi = ebx[1]
                                                                    label_72ad4d:
                                                                        void* edi_8 = &edi[1]
                                                                        uint32_t ecx_17 = zx.d(*edi) << 8
                                                                        int32_t esi_8 = esi - 1
                                                                        
                                                                        if (esi != 1)
                                                                            goto label_72ad75
                                                                        
                                                                        if (ebx[3](arg1) != 0)
                                                                            edi_8 = *ebx
                                                                            esi_8 = ebx[1]
                                                                        label_72ad75:
                                                                            esi = esi_8 - 1
                                                                            edi = edi_8 + 1
                                                                            
                                                                            if (ecx_17 != neg.d(zx.d(*edi_8)))
                                                                                goto label_72ae45
                                                                            
                                                                            if (esi != 0)
                                                                                goto label_72ad9b
                                                                            
                                                                            if (ebx[3](arg1) != 0)
                                                                                edi = *ebx
                                                                                esi = ebx[1]
                                                                            label_72ad9b:
                                                                                uint32_t eax_51 = zx.d(*edi)
                                                                                esi -= 1
                                                                                edi = &edi[1]
                                                                                
                                                                                if (eax_51 != 0)
                                                                                    goto label_72ae45
                                                                                
                                                                                if (esi != 0)
                                                                                    goto label_72adc7
                                                                                
                                                                                if (ebx[3](arg1) != 0)
                                                                                    edi = *ebx
                                                                                    esi = ebx[1]
                                                                                label_72adc7:
                                                                                    void* edi_9 = &edi[1]
                                                                                    uint32_t ecx_20 = zx.d(*edi) << 8
                                                                                    int32_t esi_9 = esi - 1
                                                                                    
                                                                                    if (esi != 1)
                                                                                        goto label_72adef
                                                                                    
                                                                                    if (ebx[3](arg1) != 0)
                                                                                        edi_9 = *ebx
                                                                                        esi_9 = ebx[1]
                                                                                    label_72adef:
                                                                                        esi = esi_9 - 1
                                                                                        edi = edi_9 + 1
                                                                                        
                                                                                        if (ecx_20 + zx.d(*edi_9) != 1)
                                                                                            goto label_72ae45
                                                                                        
                                                                                        if (esi != 0)
                                                                                            goto label_72ae17
                                                                                        
                                                                                        if (ebx[3](arg1) != 0)
                                                                                            edi = *ebx
                                                                                            esi = ebx[1]
                                                                                        label_72ae17:
                                                                                            void* edi_10 = &edi[1]
                                                                                            uint32_t ecx_23 = zx.d(*edi) << 8
                                                                                            int32_t esi_10 = esi - 1
                                                                                            
                                                                                            if (esi != 1)
                                                                                                goto label_72ae3f
                                                                                            
                                                                                            if (ebx[3](arg1) != 0)
                                                                                                edi_10 = *ebx
                                                                                                esi_10 = ebx[1]
                                                                                            label_72ae3f:
                                                                                                esi = esi_10 - 1
                                                                                                edi = edi_10 + 1
                                                                                                
                                                                                                if (ecx_23 == neg.d(zx.d(*edi_10)))
                                                                                                    goto label_72ae63
                                                                                                
                                                                                                goto label_72ae45

return 0
