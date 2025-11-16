// 函数: sub_4657c0
// 地址: 0x4657c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** ecx = arg1
int32_t* esi = ecx[6]
int32_t ebx = esi[1]
int32_t edi
int32_t var_28 = edi
char* edi_1 = *esi
int32_t* var_c = esi

if (ebx != 0)
    goto label_4657f3

if (esi[3](ecx) != 0)
    edi_1 = *esi
    ebx = esi[1]
    ecx = arg1
label_4657f3:
    int32_t eax_2
    eax_2:1.b = *edi_1
    int32_t ebx_1 = ebx - 1
    void* edi_2 = &edi_1[1]
    
    if (ebx_1 != 0)
        goto label_46581a
    
    if (esi[3](ecx) != 0)
        edi_2 = *esi
        ebx_1 = esi[1]
        ecx = arg1
    label_46581a:
        int32_t ebx_2 = ebx_1 - 1
        int32_t i_1 = eax_2 + zx.d(*edi_2) - 2
        void* edi_3 = edi_2 + 1
        bool cond:3_1 = i_1 == 0
        int32_t i = i_1
        
        if (i_1 s> 0)
            do
                if (ebx_2 == 0)
                    if (esi[3](ecx) == 0)
                        return 0
                    
                    edi_3 = *esi
                    ebx_2 = esi[1]
                
                uint32_t esi_1 = zx.d(*edi_3)
                void* eax_6 = *arg1
                int32_t ecx_2 = esi_1 s>> 4
                *(eax_6 + 0x14) = 0x51
                int32_t esi_2 = esi_1 & 0xf
                *(eax_6 + 0x18) = esi_2
                ebx_2 -= 1
                edi_3 += 1
                *(eax_6 + 0x1c) = ecx_2
                (*(eax_6 + 4))(arg1, 1)
                
                if (esi_2 s>= 4)
                    void* eax_7 = *arg1
                    *(eax_7 + 0x14) = 0x1f
                    *(eax_7 + 0x18) = esi_2
                    (*eax_7)(arg1)
                
                void** ecx_4 = arg1
                
                if (ecx_4[esi_2 + 0x2a] == 0)
                    void* eax_9 = sub_4984d0(ecx_4)
                    ecx_4 = arg1
                    ecx_4[esi_2 + 0x2a] = eax_9
                
                void* esi_3 = ecx_4[esi_2 + 0x2a]
                void* var_1c_1 = esi_3
                void* const var_14_1 = &data_ac7e28
                bool cond:7_1
                
                do
                    uint16_t edx_5
                    
                    if (ecx_2 == 0)
                        if (ebx_2 == 0)
                            if (var_c[3](ecx_4) == 0)
                                return 0
                            
                            edi_3 = *var_c
                            ebx_2 = var_c[1]
                            ecx_4 = arg1
                        
                        edx_5 = zx.w(*edi_3)
                    else
                        if (ebx_2 == 0)
                            if (var_c[3](ecx_4) == 0)
                                return 0
                            
                            edi_3 = *var_c
                            ebx_2 = var_c[1]
                            ecx_4 = arg1
                        
                        int16_t edx_3
                        edx_3:1.b = *edi_3
                        ebx_2 -= 1
                        edi_3 += 1
                        
                        if (ebx_2 == 0)
                            if (var_c[3](ecx_4) == 0)
                                return 0
                            
                            edi_3 = *var_c
                            ebx_2 = var_c[1]
                            ecx_4 = arg1
                        
                        esi_3 = var_1c_1
                        edx_5 = edx_3 + zx.w(*edi_3)
                    
                    void* const eax_15
                    eax_15.w = edx_5
                    *(esi_3 + (*var_14_1 << 1)) = eax_15.w
                    ebx_2 -= 1
                    edi_3 += 1
                    cond:7_1 = var_14_1 + 4 s< U"????????????????"
                    var_14_1 += 4
                while (cond:7_1)
                
                if (*(*ecx_4 + 0x68) s>= 2)
                    void* esi_5 = esi_3 + 4
                    int32_t var_14_2 = 8
                    
                    while (true)
                        void* eax_18 = *ecx_4
                        *(eax_18 + 0x18) = zx.d(*(esi_5 - 4))
                        *(eax_18 + 0x1c) = zx.d(*(esi_5 - 2))
                        *(eax_18 + 0x20) = zx.d(*esi_5)
                        *(eax_18 + 0x24) = zx.d(*(esi_5 + 2))
                        *(eax_18 + 0x28) = zx.d(*(esi_5 + 4))
                        *(eax_18 + 0x2c) = zx.d(*(esi_5 + 6))
                        *(eax_18 + 0x30) = zx.d(*(esi_5 + 8))
                        *(eax_18 + 0x34) = zx.d(*(esi_5 + 0xa))
                        *(eax_18 + 0x14) = 0x5d
                        (*(eax_18 + 4))(ecx_4, 2)
                        esi_5 += 0x10
                        bool cond:9_1 = var_14_2 != 1
                        var_14_2 -= 1
                        
                        if (not(cond:9_1))
                            break
                        
                        ecx_4 = arg1
                
                int32_t i_2 = i - 0x41
                i = i_2
                
                if (ecx_2 != 0)
                    i = i_2 - 0x40
                
                ecx = arg1
                esi = var_c
            while (i s> 0)
            
            cond:3_1 = i == 0
        
        if (not(cond:3_1))
            void* eax_25 = *ecx
            *(eax_25 + 0x14) = 0xb
            (*eax_25)(ecx)
        
        *esi = edi_3
        esi[1] = ebx_2
        return 1

return 0
