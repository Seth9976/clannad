// 函数: sub_4d9b60
// 地址: 0x4d9b60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edx = data_6400ec
HRESULT result = 0
int32_t ecx_1

if (edx != 0)
    ecx_1 = data_6400f4

if (edx == 0 || ecx_1 == 0)
    result = sub_4d9ec0(arg3)
    ecx_1 = data_6400f4
    edx = data_6400ec

if (edx != 0)
    int32_t* edx_1 = arg1
    
    if (ecx_1 != 0 && arg2 == 1)
        int16_t* eax = *edx_1
        int32_t edi_1
        
        if (eax != 0)
            int16_t* edi_2 = eax
            
            do
                eax.w = *edi_2
                edi_2 = &edi_2[1]
            while (eax.w != 0)
            
            ecx_1 = data_6400f4
            edi_1 = (edi_2 - &edi_2[1]) s>> 1
        else
            edi_1 = 0
        
        int32_t eax_1 = data_6400f8
        int32_t var_8_1 = eax_1 - 1
        
        if (eax_1 - 1 s>= 0)
            uint32_t esi_2 = (eax_1 - 1) * 0xc
            arg3 = esi_2
            int32_t ecx_3 = ecx_1
            
            while (true)
                int32_t esi_3 = *(esi_2 + ecx_3 + 4)
                
                if (edi_1 == esi_3)
                    int32_t esi_4 = esi_3 * 2
                    int32_t* edx_3 = *(arg3 + ecx_3)
                    int32_t* eax_4 = *arg1
                    int32_t i_1 = esi_4 - 4
                    
                    if (esi_4 u>= 4)
                        int32_t i
                        
                        do
                            if (*edx_3 != *eax_4)
                                goto label_4d9c26
                            
                            edx_3 = &edx_3[1]
                            eax_4 = &eax_4[1]
                            i = i_1
                            i_1 -= 4
                        while (i u>= 4)
                    
                    if (i_1 == 0xfffffffc)
                        *arg4 = *(data_6400f4 + var_8_1 * 0xc + 8)
                        return 0
                    
                label_4d9c26:
                    ecx_3.b = *edx_3
                    
                    if (ecx_3.b == *eax_4)
                        if (i_1 == 0xfffffffd)
                            *arg4 = *(data_6400f4 + var_8_1 * 0xc + 8)
                            return 0
                        
                        ecx_3.b = *(edx_3 + 1)
                        
                        if (ecx_3.b == *(eax_4 + 1))
                            if (i_1 == 0xfffffffe)
                                *arg4 = *(data_6400f4 + var_8_1 * 0xc + 8)
                                return 0
                            
                            ecx_3.b = *(edx_3 + 2)
                            
                            if (ecx_3.b == *(eax_4 + 2))
                                if (i_1 == 0xffffffff)
                                    *arg4 = *(data_6400f4 + var_8_1 * 0xc + 8)
                                    return 0
                                
                                ecx_3.b = *(edx_3 + 3)
                                
                                if (ecx_3.b == *(eax_4 + 3))
                                    *arg4 = *(data_6400f4 + var_8_1 * 0xc + 8)
                                    return 0
                    
                    ecx_3 = data_6400f4
                
                arg3 -= 0xc
                int32_t esi_6 = var_8_1 - 1
                var_8_1 = esi_6
                
                if (esi_6 s< 0)
                    break
                
                esi_2 = arg3
            
            edx_1 = arg1
    
    int32_t* var_14_1 = arg4
    int32_t* ecx_6 = data_6400ec
    int32_t var_18_1 = arg2
    result = (*(*ecx_6 + 0x28))(ecx_6, edx_1)

return result
