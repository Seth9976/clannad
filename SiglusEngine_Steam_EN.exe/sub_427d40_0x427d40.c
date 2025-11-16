// 函数: sub_427d40
// 地址: 0x427d40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg5 s< 0x20)
    int32_t* ecx_1 = arg4 + ((arg5 + 1) << 2)
    *ecx_1 = 0xffffffff
    int32_t* ecx_3 = arg4 + ((arg5 + 0x21) << 2)
    *ecx_3 = 0xffffffff
    int32_t* ecx_5 = arg4 + ((arg5 + 0x41) << 2)
    *ecx_5 = 0xffffffff
    *(arg4 + (arg5 << 2) + 0x184) = 0xffffffff
    
    if (*arg3 != 0 && arg2[0x13] != 0 && arg2[0x12].b != 0)
        int32_t edx_1 = arg6
        
        if (edx_1 == 0xffffffff)
            edx_1 = *arg2
        
        int32_t eax_4 = arg3[5]
        int32_t ecx_10
        int32_t edx_5
        int32_t ebx_2
        int32_t edi_3
        
        if (eax_4 == 0 || eax_4 == 1 || eax_4 == 3)
            if (edx_1 == 0)
                ecx_10 = arg2[1] + arg7
                ebx_2 = arg3[3] - 1 + ecx_10
                edx_5 = arg2[2] + arg8
                edi_3 = arg3[4] - 1 + edx_5
            label_427e29:
                int32_t eax_7 = arg2[0x1e]
                
                if (eax_7 != 0xffffffff || arg2[0x1f] != eax_7 || arg2[0x20] != eax_7
                        || arg2[0x21] != eax_7)
                    if (eax_7 s> ecx_10)
                        ecx_10 = eax_7
                    
                    int32_t eax_8 = arg2[0x20]
                    
                    if (eax_8 s< ebx_2)
                        ebx_2 = eax_8
                    
                    int32_t eax_9 = arg2[0x21]
                    
                    if (arg2[0x1f] s> edx_5)
                        edx_5 = arg2[0x1f]
                    
                    if (eax_9 s< edi_3)
                        edi_3 = eax_9
                
                if (ecx_10 s<= ebx_2 && edx_5 s<= edi_3)
                    *ecx_1 = ecx_10
                    *ecx_3 = edx_5
                    *ecx_5 = ebx_2
                    *(arg4 + (arg5 << 2) + 0x184) = edi_3
                    return 1
        else if (eax_4 == 2)
            void* eax_5 = sub_4d25b0(arg3[1], edx_1)
            
            if (eax_5 != 0)
                ecx_10 = *(eax_5 + 4) - *(eax_5 + 0x14) + arg2[1] + arg7
                edx_5 = *(eax_5 + 8) - *(eax_5 + 0x18) + arg2[2] + arg8
                ebx_2 = ecx_10 - 1 + *(eax_5 + 0xc)
                edi_3 = edx_5 - 1 + *(eax_5 + 0x10)
                goto label_427e29

return 0
