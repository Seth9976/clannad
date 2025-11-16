// 函数: sub_5434b0
// 地址: 0x5434b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = *arg1 == 0
void* esi = arg2
void* var_8 = arg1

if (not(cond:0))
    do
        arg2.b = *arg1
        
        if (arg2.b u< 0x80)
        label_54364d:
            *esi = arg2.b
            esi += 1
            arg1 = &arg1[1]
            var_8 = arg1
        else
            if (arg2.b u< 0xa0)
                if (arg2.b u>= 0xfe)
                    goto label_54364d
            else if (arg2.b u<= 0xdf || arg2.b u>= 0xfe)
                goto label_54364d
            
            int32_t edi_1
            
            if (arg2.b u< 0xa0 || arg2.b u> 0xdf)
                edi_1 = zx.d(arg2.b) << 8 | zx.d(arg1[1])
            else
                edi_1 = 0
            
            void** eax
            eax.b = arg1[2]
            void* const ebx_3
            
            if (eax.b u< 0x80)
                ebx_3 = nullptr
            else if (eax.b u< 0xa0)
                if (eax.b u>= 0xfe)
                    ebx_3 = nullptr
                else
                    ebx_3 = zx.d(eax.b) << 8 | zx.d(arg1[3])
            else if (eax.b u<= 0xdf || eax.b u>= 0xfe)
                ebx_3 = nullptr
            else
                ebx_3 = zx.d(eax.b) << 8 | zx.d(arg1[3])
            
            int32_t var_14
            void* var_10
            int32_t var_c
            void* eax_6
            void* edx_2
            
            if (edi_1 == 0x8196)
                if (ebx_3 - 0x8260 u> 0x19)
                    goto label_54363d
                
                sub_4ec270(&var_c, &var_8, arg1, &var_c, &var_10, &var_14)
                arg2 = var_10
                
                if (arg2 == 0xffffffff)
                    void* edi_5 = var_c * 0x21 + &data_132a150
                    eax, arg2 = sub_4cfd70(esi, edi_5)
                    void* ecx_2 = edi_5 + 1
                    
                    do
                        eax.b = *edi_5
                        edi_5 += 1
                    while (eax.b != 0)
                    
                    arg1 = var_8
                    esi += edi_5 - ecx_2
                else if (arg2 == 0xfffffffe)
                    arg1 = var_8
                else
                    int32_t ecx_3 = var_c
                    eax_6 = (ecx_3 << 5) + arg2
                    edx_2 = ecx_3 + &data_132a150
                label_543626:
                    int32_t edi_10 = var_14
                    eax, arg2 = sub_4cfdc0(eax_6, edx_2 + eax_6, esi, edi_10)
                    esi += edi_10
                    arg1 = var_8
            else if (edi_1 != 0x8193 || ebx_3 - 0x8260 u> 0x19)
            label_54363d:
                *esi = arg2.b
                eax.b = arg1[1]
                *(esi + 1) = eax.b
                esi += 2
                arg1 = &arg1[2]
                var_8 = arg1
            else
                sub_4ec270(&var_c, &var_8, arg1, &var_c, &var_10, &var_14)
                arg2 = var_10
                
                if (arg2 != 0xffffffff)
                    if (arg2 != 0xfffffffe)
                        int32_t ecx_7 = var_c
                        eax_6 = (ecx_7 << 5) + arg2
                        edx_2 = ecx_7 + &data_710418
                        goto label_543626
                    
                    arg1 = var_8
                else
                    char* edi_8 = var_c * 0x21 + &data_710418
                    eax, arg2 = sub_4cfd70(esi, edi_8)
                    
                    do
                        eax.b = *edi_8
                        edi_8 = &edi_8[1]
                    while (eax.b != 0)
                    
                    arg1 = var_8
                    esi += edi_8 - &edi_8[1]
    while (*arg1 != 0)

*esi = 0
