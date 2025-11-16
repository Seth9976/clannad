// 函数: sub_49a843
// 地址: 0x49a843
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t* arg_4
int32_t* esi = arg_4
int32_t* result = &esi[0x35]
*result += 1

if (*result u>= esi[0x30])
    int32_t ebx
    int32_t var_10_1 = ebx
    int32_t edi
    int32_t var_14_1 = edi
    
    if (*(esi + 0x113) != 0)
        *result = 0
        int32_t var_18_1 = esi[0x32] + 1
        sub_4986f0(esi, (esi[0x36]).b, 0)
        bool cond:3_1
        
        do
            esi[0x45].b += 1
            ebx.b = esi[0x45].b
            
            if (ebx.b u>= 7)
                goto label_49a917
            
            uint32_t ecx_2 = zx.d(ebx.b) << 2
            int32_t edi_1 = *(ecx_2 + &data_ac8548)
            result = divu.dp.d(0:(esi[0x2e] - *(ecx_2 + 0xac852c) + edi_1 - 1), edi_1)
            int32_t edx_6 = ((zx.d(*(esi + 0x119)) * result + 7) u>> 3) + 1
            bool cond:1_1 = (esi[0x18].b & 2) != 0
            esi[0x34] = result
            esi[0x33] = edx_6
            
            if (cond:1_1)
                break
            
            int32_t edi_2 = *(ecx_2 + 0xac8580)
            result = divu.dp.d(0:(esi[0x2f] - *(ecx_2 + 0xac8564) + edi_2 - 1), edi_2)
            cond:3_1 = esi[0x34] == 0
            esi[0x30] = result
        while (cond:3_1)
    
    if (*(esi + 0x113) == 0 || ebx.b u>= 7)
    label_49a917:
        
        if ((esi[0x17].b & 0x20) == 0)
            esi[0x1c] = &arg_4:3
            esi[0x1d] = 1
            
            while (true)
                if (esi[0x1a] == 0)
                    while (esi[0x3f] == 0)
                        sub_49a08a(esi, 0)
                        sub_468e37(esi, &var_8, 4)
                        esi[0x3f] = sub_499762(&var_8)
                        sub_466a6c(esi)
                        sub_4997a6(esi, &esi[0x43], 4)
                        
                        if (esi[0x43] != 0x54414449)
                            sub_46691d(esi, "Not enough image data")
                            noreturn
                    
                    int32_t eax_9 = esi[0x28]
                    int32_t edx_9 = esi[0x3f]
                    char* ecx_4 = esi[0x27]
                    esi[0x1a] = eax_9
                    esi[0x19] = ecx_4
                    
                    if (eax_9 u> edx_9)
                        esi[0x1a] = edx_9
                    
                    sub_4997a6(esi, ecx_4, esi[0x1a])
                    esi[0x3f] -= esi[0x1a]
                
                int32_t* eax_11 = sub_4993ef(&esi[0x19], 1)
                
                if (eax_11 == 1)
                    if (esi[0x1d] == 0 || esi[0x1a] != 0 || esi[0x3f] != 0)
                        sub_46691d(esi, "Extra compressed data")
                        noreturn
                    
                    esi[0x16] |= 8
                    esi[0x17] |= 0x20
                    esi[0x1d] = 0
                    break
                
                if (eax_11 != 0)
                    char const* const eax_12 = esi[0x1f]
                    
                    if (eax_12 == 0)
                        eax_12 = "Decompression Error"
                    
                    sub_46691d(esi, eax_12)
                    noreturn
                
                if (esi[0x1d] == 0)
                    sub_46691d(esi, "Extra compressed data")
                    noreturn
        
        if (esi[0x3f] != 0 || esi[0x1a] != 0)
            sub_46691d(esi, "Extra compression data")
            noreturn
        
        result = sub_499270(&esi[0x19])
        esi[0x16] |= 8

return result
