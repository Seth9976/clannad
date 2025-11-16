// 函数: sub_418780
// 地址: 0x418780
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
void* esi = &arg1[0x20]
data_1321eb8 = *(arg1 + 0x10)

if (arg2 - 0x20 s> 0)
    do
        uint32_t eax_1 = zx.d(i.b)
        esi += 1
        i += 1
        eax_1.b = *(eax_1 + 0x610a70)
        *(esi - 1) ^= eax_1.b
    while (i s< arg2 - 0x20)

int32_t eax_2 = sub_4d0f10(arg1, "CGTABLE2")
BOOL result

if (eax_2 != 0)
    int32_t var_c = 0
    void* var_8 = nullptr
    int32_t* edx_3 = &var_c
    int32_t* eax_4 = &var_8
    int32_t* var_1c_1 = &var_8
    
    if (sub_4d0f10(arg1, "CGTABLE") != 0)
        result = sub_4bae00(eax_4, edx_3, &arg1[0x20], var_1c_1)
    else
        result = sub_4bb540(eax_4, edx_3, &arg1[0x20], var_1c_1)
    
    int32_t ecx_6 = var_c
    
    if (ecx_6 != 0)
        BOOL eax_6 = sub_4d6960(sub_4d6560(result, result, ecx_6, "AvgCgTable_old"), &data_1321ec0, 
            &data_1321ebc, data_1321eb8 * 0x3c, "AvgCgTable")
        char* esi_2 = data_1321ec0
        int32_t edi_1 = 0
        void* ebx_1 = var_8
        
        if (data_1321eb8 s> 0)
            while (true)
                sub_4d1c30(eax_6, ebx_1, esi_2, 0x20)
                int32_t eax_7 = *(ebx_1 + 0x20)
                *(esi_2 + 0x20) = eax_7
                sub_4d1ba0(eax_7, 0x14, &esi_2[0x24], 0)
                *(esi_2 + 0x38) = 0
                char* ecx_13 = esi_2
                
                while (true)
                    eax_6.b = *ecx_13
                    
                    if (eax_6.b u>= 0x80 && (eax_6.b u< 0xa0 || eax_6.b u> 0xdf) && eax_6.b u< 0xfe)
                        ecx_13 = &ecx_13[2]
                        continue
                    
                    if (eax_6.b == 0)
                        break
                    
                    if (eax_6.b u>= 0x61 && eax_6.b u<= 0x7a)
                        eax_6.b -= 0x20
                        *ecx_13 = eax_6.b
                    
                    ecx_13 = &ecx_13[1]
                
                edi_1 += 1
                esi_2 = &esi_2[0x3c]
                ebx_1 += 0x24
                
                if (edi_1 s>= data_1321eb8)
                    break
        
        return sub_4d6c40(&var_c, &var_8)
else
    result = sub_4bb540(eax_2, &data_1321ebc, &arg1[0x20], &data_1321ec0)
    int32_t ecx_2 = data_1321ebc
    
    if (ecx_2 != 0)
        sub_4d6560(result, result, ecx_2, "AvgCgTable")
        result = data_1321eb8
        char* edx_2 = data_1321ec0
        int32_t esi_1 = 0
        
        if (result s> 0)
            while (true)
                char* ecx_3 = edx_2
                
                if (edx_2 != 0)
                    while (true)
                        result.b = *ecx_3
                        
                        if (result.b u>= 0x80 && (result.b u< 0xa0 || result.b u> 0xdf)
                                && result.b u< 0xfe)
                            ecx_3 = &ecx_3[2]
                            continue
                        
                        if (result.b == 0)
                            break
                        
                        if (result.b u>= 0x61 && result.b u<= 0x7a)
                            result.b -= 0x20
                            *ecx_3 = result.b
                        
                        ecx_3 = &ecx_3[1]
                    
                    result = data_1321eb8
                
                esi_1 += 1
                edx_2 = &edx_2[0x3c]
                
                if (esi_1 s>= result)
                    break

return result
