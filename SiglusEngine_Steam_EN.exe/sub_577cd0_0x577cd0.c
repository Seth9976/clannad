// 函数: sub_577cd0
// 地址: 0x577cd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = &data_1090ae4
int32_t i = 0
int32_t* result_1 = &data_1090ae4
void* esi = &data_8fcd74
void* edi = &data_f8d388

do
    bool cond:0_1 = *result == 2
    *(edi - 4) = *(esi - 0x28)
    
    if (not(cond:0_1))
        int32_t var_c = 0
        sub_576f50(i)
        
        if (*(edi - 0xc24) != 0)
            sub_5775a0(i, &var_c)
            
            if (var_c != 0)
                sub_577760(i)
        
        int32_t edx_2 = *(edi - 0x35f8)
        int32_t ecx_5 = *(edi - 0x35f4)
        var_c = *(edi - 0x35f0) - 1 + edx_2
        int32_t eax_5 = *(edi - 0x35ec) + ecx_5 - 1
        int32_t ecx_7 = var_c
        int32_t eax_6 = data_1332b60
        
        if (ecx_7 s>= eax_6)
            eax_6 = sub_577180(eax_6, eax_6 - ecx_7 - 1, i, 0, 0)
            edx_2 = *(edi - 0x35f8)
        
        if (edx_2 s< 0)
            sub_577180(eax_6, neg.d(edx_2), i, 0, 0)
        
        int32_t eax_7 = data_1332b64
        int32_t eax_10
        
        if (eax_5 s< eax_7)
            eax_10 = ecx_5
        else
            sub_577180(eax_7 - eax_5 - 1, 0, i, eax_7 - eax_5 - 1, 0)
            eax_10 = *(edi - 0x35f4)
        
        if (eax_10 s< 0)
            int32_t eax_11 = neg.d(eax_10)
            sub_577180(eax_11, 0, i, eax_11, 0)
        
        int32_t ecx_13 = *(edi - 0x35f8)
        int32_t edx_7 = *(edi - 0x35f4)
        int32_t eax_14 = *(edi - 0x35f0) - 1 + ecx_13
        int32_t eax_17 = *(edi - 0x35ec) - 1 + edx_7
        bool cond:1_1 = *(edi - 0xc24) == 0
        var_c = eax_17
        
        if (cond:1_1)
            int32_t eax_18 = 0
            int32_t edx_9 = 0
            int32_t ecx_17
            int32_t ecx_23
            int32_t edx_10
            int32_t edx_11
            
            if (*(esi - 0x14) != 0)
                int32_t ecx_24 = *(esi + 4)
                
                if (*(esi - 0x10) != 0)
                    int32_t ecx_27 = *(edi - 0x35f8)
                    
                    if (ecx_24 == eax_14)
                        ecx_27 = *(edi - 0x35f8)
                    
                    if (ecx_24 != eax_14 || *(esi + 8) != var_c)
                        if (ecx_27 s< 0)
                            goto label_577f27
                        
                        ecx_23 = eax_14
                        
                        if (ecx_23 s>= data_1332b60)
                            goto label_577f27
                        
                        edx_11 = *(esi + 4)
                    label_577f1f:
                        edx_9 = edx_11 - ecx_23
                    label_577f27:
                        
                        if (*(edi - 0x35f4) s>= 0)
                            int32_t ecx_20 = var_c
                            
                            if (ecx_20 s< data_1332b64)
                                eax_18 = *(esi + 8) - ecx_20
                else
                    int32_t ecx_25 = *(edi - 0x35f8)
                    
                    if (ecx_24 == eax_14)
                        ecx_25 = *(edi - 0x35f8)
                    
                    if (ecx_24 != eax_14 || *esi != *(edi - 0x35f4))
                        if (ecx_25 s< 0)
                            goto label_577e59
                        
                        ecx_17 = eax_14
                        
                        if (ecx_17 s>= data_1332b60)
                            goto label_577e59
                        
                        edx_10 = *(esi + 4)
                    label_577e51:
                        edx_9 = edx_10 - ecx_17
                    label_577e59:
                        
                        if (*(edi - 0x35f4) s>= 0 && var_c s< data_1332b64)
                            eax_18 = *esi - *(edi - 0x35f4)
            else if (*(esi - 0x10) != 0)
                if (*(esi - 4) != ecx_13)
                label_577e94:
                    
                    if (ecx_13 s< 0)
                        goto label_577f27
                    
                    ecx_23 = *(edi - 0x35f8)
                    
                    if (eax_14 s>= data_1332b60)
                        goto label_577f27
                    
                    edx_11 = *(esi - 4)
                    goto label_577f1f
                
                ecx_13 = *(edi - 0x35f8)
                
                if (*(esi + 8) != var_c)
                    goto label_577e94
            else
                if (*(esi - 4) != ecx_13)
                label_577e39:
                    
                    if (ecx_13 s< 0)
                        goto label_577e59
                    
                    ecx_17 = *(edi - 0x35f8)
                    
                    if (eax_14 s>= data_1332b60)
                        goto label_577e59
                    
                    edx_10 = *(esi - 4)
                    goto label_577e51
                
                ecx_13 = *(edi - 0x35f8)
                
                if (*esi != *(edi - 0x35f4))
                    goto label_577e39
            sub_577180(eax_18, edx_9, i, eax_18, 1)
        else
            sub_577660(eax_17, ecx_13, i, edx_7, eax_14, eax_17)
        
        *(edi - 8) = *(edi - 0xa8)
        *edi = *(esi - 0x14)
        *(edi + 4) = *(esi - 0x10)
        *(edi + 8) = *(esi - 0xc)
        *(edi + 0xc) = *(esi - 8)
        *(edi + 0x10) = *(edi - 0x3884)
        *(edi + 0x14) = *(edi - 0x3880)
        *(edi + 0x18) = *(edi - 0x387c)
        *(edi + 0x1c) = *(edi - 0x3878)
        *(edi + 0x20) = *(edi - 0xa4)
        *(edi + 0x24) = *(edi - 0xa0)
        *(edi - 4) = *(esi - 0x28)
        *(edi - 0x3874) = *(esi + 0xc) + result_1[0xa] + *(edi - 0x35d8)
        bool cond:2_1 = *(edi - 0x3848) == 0
        *(edi - 0x3870) = *(esi + 0x10) + *(edi - 0x35d4) + result_1[8]
        
        if (not(cond:2_1))
            sub_577290(i)
    
    i += 1
    result = &result_1[0x75]
    esi += 0x2d0
    edi += 0x3920
    result_1 = result
while (i s< 0x40)

return result
