// 函数: sub_4c8d30
// 地址: 0x4c8d30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = arg2
int32_t* esi = arg3
void* result_2 = result
int32_t* var_18 = esi
int32_t var_14 = 0

if (arg4 s> 0)
    void** ecx = &esi[1]
    int32_t* edi_1 = result + 4
    void** var_8_1 = ecx
    int32_t ebx_1 = 0
    
    do
        int32_t edx = 0
        bool cond:0_1 = ebx_1 s< 0
        
        if (ebx_1 s<= 0)
        label_4c8d9f:
            
            if (not(cond:0_1) && ebx_1 s< *esi)
                result = *ecx
                
                if (result != 0 && ecx[1] != 0)
                    void* esi_2 = esi + result
                    
                    if (esi != neg.d(result))
                        result = zx.d(*(esi_2 + 2))
                        void* result_3 = esi_2 + 0x74
                        void* result_1 = result
                        int32_t var_10_1 = 0
                        
                        if (result s> 0)
                            int32_t ecx_9
                            
                            do
                                result = result_3
                                uint32_t ebx_2 = zx.d(*(result + 6))
                                uint32_t ecx_6 = zx.d(*(result + 4))
                                uint32_t ebx_3 = zx.d(*(result + 8))
                                
                                if (ecx_6 != 0 && ecx_6 != 1)
                                    break
                                
                                int32_t var_34_1 = 0
                                int32_t var_38_1 = 0xff
                                int32_t var_3c_1 = 0
                                int32_t var_40_1 = 0
                                int32_t var_44_1 = 0
                                result = sub_584980(result, arg6, arg5, arg7, result_3 + 0x5c, 
                                    ebx_2, ebx_3, 0, 0, 0, zx.d(*result) + edi_1[-1], 
                                    zx.d(*(result + 2)) + *edi_1, 0xffffffff, 0xff, 0xffffffff, 
                                    0xffffffff, ecx_6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                                    nullptr)
                                ecx_9 = var_10_1 + 1
                                var_10_1 = ecx_9
                                result_3 = result_3 + 0x5c + ((ebx_3 * ebx_2) << 2)
                            while (ecx_9 s< result_1)
                            ebx_1 = var_14
                            ecx = var_8_1
        else
            result = result_2 + 8
            
            while (edi_1[-1] != *(result - 8) || *edi_1 != *(result - 4) || edi_1[1] != *result
                    || edi_1[2] != *(result + 4))
                edx += 1
                result += 0x18
                
                if (edx s>= ebx_1)
                    ecx = var_8_1
                    cond:0_1 = ebx_1 s< 0
                    esi = var_18
                    goto label_4c8d9f
            
            ecx = var_8_1
        
        esi = var_18
        ebx_1 += 1
        ecx = &ecx[2]
        var_14 = ebx_1
        edi_1 = &edi_1[6]
        var_8_1 = ecx
    while (ebx_1 s< arg4)

return result
