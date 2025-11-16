// 函数: sub_5c5610
// 地址: 0x5c5610
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HRESULT result = 0

if (arg1[3] == 0 || arg1[5] == 0)
    result = std::money_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getmfld(
        arg1, arg4)

int32_t* ecx = arg1[3]

if (ecx == 0)
    return result

int32_t eax = arg1[5]

if (eax != 0 && arg3 == 1)
    uint32_t edx_1 = *arg2
    arg4 = edx_1
    int32_t ebx_1
    
    if (edx_1 != 0)
        int16_t* ebx_2 = edx_1
        int16_t* ebx_3 = ebx_2
        uint32_t* eax_1
        
        do
            eax_1.w = *ebx_3
            ebx_3 = &ebx_3[1]
        while (eax_1.w != 0)
        ebx_1 = (ebx_3 - &ebx_2[1]) s>> 1
    else
        ebx_1 = 0
    
    int32_t edi_1 = arg1[6]
    int32_t edi_2 = edi_1 - 1
    
    if (edi_1 - 1 s>= 0)
        void* esi_1 = arg1[5] + edi_2 * 0xc
        int32_t* var_8_1 = esi_1
        int32_t temp2_1
        
        do
            int32_t esi_2 = *(esi_1 + 4)
            
            if (ebx_1 == esi_2)
                int32_t esi_3 = esi_2 * 2
                int32_t* ecx_4 = *var_8_1
                int32_t i_1 = esi_3 - 4
                
                if (esi_3 u>= 4)
                    int32_t i
                    
                    do
                        if (*ecx_4 != *edx_1)
                            goto label_5c56ba
                        
                        ecx_4 = &ecx_4[1]
                        edx_1 += 4
                        i = i_1
                        i_1 -= 4
                    while (i u>= 4)
                
                if (i_1 == 0xfffffffc)
                    *arg5 = *(eax + edi_2 * 0xc + 8)
                    return 0
                
            label_5c56ba:
                int32_t eax_2
                eax_2.b = *ecx_4
                
                if (eax_2.b == *edx_1)
                    if (i_1 == 0xfffffffd)
                        *arg5 = *(eax + edi_2 * 0xc + 8)
                        return 0
                    
                    eax_2.b = *(ecx_4 + 1)
                    
                    if (eax_2.b == *(edx_1 + 1))
                        if (i_1 == 0xfffffffe)
                            *arg5 = *(eax + edi_2 * 0xc + 8)
                            return 0
                        
                        eax_2.b = *(ecx_4 + 2)
                        
                        if (eax_2.b == *(edx_1 + 2))
                            if (i_1 == 0xffffffff)
                                *arg5 = *(eax + edi_2 * 0xc + 8)
                                return 0
                            
                            eax_2.b = *(ecx_4 + 3)
                            
                            if (eax_2.b == *(edx_1 + 3))
                                *arg5 = *(eax + edi_2 * 0xc + 8)
                                return 0
                
                edx_1 = arg4
            
            esi_1 = var_8_1 - 0xc
            temp2_1 = edi_2
            edi_2 -= 1
            var_8_1 = esi_1
        while (temp2_1 - 1 s>= 0)

return (*(*ecx + 0x28))(ecx, arg2, arg3, arg5)
