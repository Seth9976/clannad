// 函数: sub_577970
// 地址: 0x577970
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg4
*(edi + 0x3888) = *(arg2 + 0x270)
int32_t* result = arg5

if (*result != 2)
    sub_576f50(arg3)
    int32_t arg_c
    
    if (*(edi + 0x2c68) != 0)
        sub_5775a0(arg3, &arg_c)
    
    if (arg_c != 0)
        sub_577760(arg3)
    
    int32_t edx_1 = *(edi + 0x294)
    int32_t ecx_2 = *(edi + 0x298)
    int32_t eax_3 = *(edi + 0x29c) - 1 + edx_1
    int32_t eax_5 = *(edi + 0x2a0) + ecx_2 - 1
    int32_t eax_6 = data_1332b60
    
    if (eax_3 s>= eax_6)
        eax_6 = sub_577180(eax_6, eax_6 - eax_3 - 1, arg3, 0, 0)
        edx_1 = *(edi + 0x294)
    
    if (edx_1 s< 0)
        sub_577180(eax_6, neg.d(edx_1), arg3, 0, 0)
    
    int32_t eax_7 = data_1332b64
    int32_t eax_10
    
    if (eax_5 s< eax_7)
        eax_10 = ecx_2
    else
        sub_577180(eax_7 - eax_5 - 1, 0, arg3, eax_7 - eax_5 - 1, 0)
        eax_10 = *(edi + 0x298)
    
    if (eax_10 s< 0)
        int32_t eax_11 = neg.d(eax_10)
        sub_577180(eax_11, 0, arg3, eax_11, 0)
    
    int32_t ebx_1 = *(edi + 0x294)
    int32_t ecx_10 = *(edi + 0x298)
    int32_t edx_8 = *(edi + 0x29c) - 1 + ebx_1
    int32_t eax_14 = *(edi + 0x2a0) - 1 + ecx_10
    int32_t ebx_2
    
    if (*(edi + 0x2c68) == 0)
        int32_t eax_15 = 0
        int32_t edx_10 = 0
        int32_t edx_11
        int32_t edx_12
        
        if (*(arg2 + 0x284) != 0)
            int32_t edi_4 = *(arg2 + 0x29c)
            
            if (*(arg2 + 0x288) != 0)
                edi = arg4
                
                if (edi_4 == edx_8)
                    edi = arg4
                
                if (edi_4 != edx_8 || *(arg2 + 0x2a0) != eax_14)
                    if (ebx_1 s< 0)
                        goto label_577ba7
                    
                    ebx_1 = edx_8
                    
                    if (ebx_1 s>= data_1332b60)
                        goto label_577ba7
                    
                    edx_12 = *(arg2 + 0x29c)
                label_577ba5:
                    edx_10 = edx_12 - ebx_1
                label_577ba7:
                    
                    if (ecx_10 s>= 0 && eax_14 s< data_1332b64)
                        eax_15 = *(arg2 + 0x2a0) - eax_14
            else
                edi = arg4
                
                if (edi_4 != edx_8 || *(arg2 + 0x298) != ecx_10)
                    if (ebx_1 s< 0)
                        goto label_577ae8
                    
                    ebx_1 = edx_8
                    
                    if (ebx_1 s>= data_1332b60)
                        goto label_577ae8
                    
                    edx_11 = *(arg2 + 0x29c)
                label_577ae6:
                    edx_10 = edx_11 - ebx_1
                label_577ae8:
                    
                    if (ecx_10 s>= 0 && eax_14 s< data_1332b64)
                        eax_15 = *(arg2 + 0x298) - ecx_10
        else if (*(arg2 + 0x288) != 0)
            if (*(arg2 + 0x294) == ebx_1)
                edi = arg4
            
            if (*(arg2 + 0x294) != ebx_1 || *(arg2 + 0x2a0) != eax_14)
                if (ebx_1 s< 0)
                    goto label_577ba7
                
                edi = arg4
                
                if (edx_8 s>= data_1332b60)
                    goto label_577ba7
                
                edx_12 = *(arg2 + 0x294)
                goto label_577ba5
        else if (*(arg2 + 0x294) != ebx_1 || *(arg2 + 0x298) != ecx_10)
            if (ebx_1 s< 0)
                goto label_577ae8
            
            edi = arg4
            
            if (edx_8 s>= data_1332b60)
                goto label_577ae8
            
            edx_11 = *(arg2 + 0x294)
            goto label_577ae6
        ebx_2 = arg3
        sub_577180(eax_15, edx_10, ebx_2, eax_15, 1)
    else
        ebx_2 = arg3
        sub_577660(eax_14, ebx_1, ebx_2, ecx_10, edx_8, eax_14)
    
    *(edi + 0x3884) = *(edi + 0x37e4)
    *(edi + 0x388c) = *(arg2 + 0x284)
    *(edi + 0x3890) = *(arg2 + 0x288)
    *(edi + 0x3894) = *(arg2 + 0x28c)
    *(edi + 0x3898) = *(arg2 + 0x290)
    *(edi + 0x389c) = *(edi + 8)
    *(edi + 0x38a0) = *(edi + 0xc)
    *(edi + 0x38a4) = *(edi + 0x10)
    *(edi + 0x38a8) = *(edi + 0x14)
    *(edi + 0x38ac) = *(edi + 0x37e8)
    *(edi + 0x38b0) = *(edi + 0x37ec)
    *(edi + 0x3888) = *(arg2 + 0x270)
    *(edi + 0x18) = *(arg2 + 0x2a4) + *(edi + 0x2b4) + arg5[0xa]
    result = *(arg2 + 0x2a8) + *(edi + 0x2b8) + arg5[8]
    bool cond:1_1 = *(edi + 0x44) == 0
    *(edi + 0x1c) = result
    
    if (not(cond:1_1))
        return sub_577290(ebx_2)

return result
