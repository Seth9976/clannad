// 函数: sub_4c84d0
// 地址: 0x4c84d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* result = arg2
char* edx = nullptr
data_20af200 = result
data_702778 = 0
data_20af158 = 0
uint32_t ecx = zx.d(*result)
void* ebx = arg1
void* esi = nullptr
data_20af1fc = ebx

if (ecx != 0)
    int32_t* var_c_1 = &arg2
    
    while (true)
        esi += 1
        
        if (ecx == 0x5e)
            char eax = *(esi + result)
            esi += 1
            *(edx + ebx) = eax
            edx = &edx[1]
        label_4c86ea:
            data_20af158 = edx
        else if (ecx != 0x25)
            *(edx + ebx) = ecx.b
            
            if (ecx s< 0x80)
                edx = &edx[1]
            else if (ecx - 0xa0 u> 0x3f)
                char* eax_15
                eax_15.b = *(esi + arg2)
                *(edx + ebx + 1) = eax_15.b
                edx = &edx[2]
                esi += 1
            else
                edx = &edx[1]
            
        label_4c86ea_1:
            data_20af158 = edx
        else
            char* ecx_1 = arg2
            int32_t ebx_1 = 0
            int32_t edi_1 = 0xffffffff
            int32_t var_14_1 = 0xffffffff
        label_4c8538:
            int32_t var_8_1 = ebx_1
            
            while (true)
                uint32_t eax_1 = zx.d(*(esi + ecx_1))
                esi += 1
                
                if (eax_1 s> 0x60)
                    eax_1 -= 0x20
                
                switch (eax_1)
                    case 0x21
                        ebx_1 |= 1
                        goto label_4c8538
                    case 0x24
                        ebx_1 |= 4
                        goto label_4c8538
                    case 0x25
                        ebx = arg1
                        *(edx + ebx) = 0x25
                        edx = &edx[1]
                        goto label_4c86ea_1
                    case 0x2d
                        ebx_1 |= 2
                        goto label_4c8538
                    case 0x43
                        ebx = arg1
                        char* edi_4 = &var_c_1[1]
                        var_c_1 = edi_4
                        eax_1.b = *edi_4
                        *(edx + ebx) = eax_1.b
                        edx = &edx[1]
                        goto label_4c86ea_1
                    case 0x53
                        void* eax_13 = &var_c_1[1]
                        ebx = arg1
                        var_c_1 = eax_13
                        sub_4c8760(eax_13, *eax_13, ebx, edi_1, ebx_1)
                        edx = data_20af158
                        break
                
                ecx_1 = arg2
                
                if (eax_1 - 0x30 u> 9)
                    if (eax_1 != 0x44 && eax_1 != 0x58)
                        continue
                    
                    int32_t ecx_3 = 0x10
                    
                    if (eax_1 == 0x44)
                        ecx_3 = 0xa
                    
                    void* eax_6 = &var_c_1[1]
                    var_c_1 = eax_6
                    int32_t ecx_4 = *eax_6
                    
                    if ((ebx_1.b & 4) != 0)
                        if (ecx_4 s>= 0)
                            ebx_1 &= 0xfffffffb
                            var_8_1 = ebx_1
                        else
                            ecx_4 = neg.d(ecx_4)
                    
                    uint32_t i = divu.dp.d(0:ecx_4, ecx_3)
                    uint32_t eax_8
                    eax_8.b = ecx_3.b
                    eax_8.w = muls.dp.b(eax_8.b, i.b)
                    ecx_4.b -= eax_8.b
                    uint32_t eax_9 = 1
                    data_20af1f0 = ecx_4.b
                    
                    if (i != 0)
                        uint32_t edi_2 = 1
                        
                        do
                            char ecx_5 = i.b
                            i = divu.dp.d(0:i, ecx_3)
                            uint32_t eax_11
                            eax_11.b = ecx_3.b
                            eax_11.w = muls.dp.b(eax_11.b, i.b)
                            (&data_20af1f0)[edi_2] = ecx_5 - eax_11.b
                            edi_2 += 1
                        while (i != 0)
                        
                        ebx_1 = var_8_1
                        edi_1 = var_14_1
                        eax_9 = edi_2
                    
                    ebx = arg1
                    sub_4c8850(eax_9, eax_9, ebx, edi_1, ebx_1)
                    edx = data_20af158
                    break
                
                if (eax_1 == 0x30)
                    ebx_1 |= 8
                    var_8_1 = ebx_1
                
                uint32_t i_1 = zx.d(*(esi + ecx_1))
                void* esi_1 = esi + 1
                edi_1 = eax_1 - 0x30
                var_14_1 = edi_1
                
                if (i_1 s>= 0x30)
                    while (i_1 s<= 0x39)
                        edi_1 = i_1 + ((edi_1 + ((edi_1 - 6) << 2)) << 1)
                        i_1 = zx.d(*(esi_1 + arg2))
                        esi_1 += 1
                        
                        if (i_1 s< 0x30)
                            break
                    
                    var_14_1 = edi_1
                
                ecx_1 = arg2
                esi = esi_1 - 1
        
        result = arg2
        ecx = zx.d(*(esi + result))
        
        if (ecx == 0)
            break

*(edx + ebx) = 0
data_20af15c = esi + 1
data_20af154 = 0
return result
