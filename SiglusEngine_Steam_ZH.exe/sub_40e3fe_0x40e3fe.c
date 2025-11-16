// 函数: sub_40e3fe
// 地址: 0x40e3fe
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* result_7 = arg2
char var_6 = 0
char var_5 = 0

if (result_7 != 0)
    goto label_40e418

int16_t* result_5
void* result
int16_t* edx

if (*(arg1 + 0x24c) == 0)
    result, edx = sub_40b67c(arg1, &result_5, 0x10)
    
    if (result s>= 0)
        goto label_40e44a
else
    result_7 = *(arg1 + 0x24c)
    arg2 = result_7
label_40e418:
    result_5 = result_7
label_40e44a:
    void* var_18_1 = nullptr
    void* edi
    void* var_48_2 = edi
    
    if (*(arg1 + 0x264) u> 0)
        result = *(arg1 + 0x250)
        int16_t* result_4 = result_5
        int16_t* ebx_1 = &result_4[1]
        void* var_1c_2 = result - result_4
        void* result_1 = result
        int16_t* var_28_1 = ebx_1
        
        while (true)
            result_4.w = ebx_1[-1]
            
            if (result_4.w != 0xffff)
                int32_t temp3_1 = *(arg1 + 0x218) & 2
                void* edi_1
                bool cond:3_1
                
                if (temp3_1 == 0)
                    int32_t eax_1
                    eax_1.w = *ebx_1
                    
                    if (result_4.w == eax_1.w)
                        var_5 = 1
                    else
                        edx.w = ebx_1[1]
                        
                        if (eax_1.w == edx.w)
                            var_5 = 1
                        else
                            cond:3_1 = edx.w != result_4.w
                        label_40e52f:
                            
                            if (not(cond:3_1))
                                var_5 = 1
                else
                    edx = *(arg1 + 0x244)
                    result_4 = zx.d(result_4.w) << 1
                    edi_1.w = *(result_4 + edx)
                    uint32_t eax_3 = zx.d(*ebx_1) << 1
                    
                    if (edi_1.w == *(eax_3 + edx))
                        var_5 = 1
                    else
                        edi_1 = *(arg1 + 0x244)
                        eax_3.w = *(eax_3 + edi_1)
                        edx = zx.d(ebx_1[1]) << 1
                        
                        if (eax_3.w != *(edx + edi_1))
                            edx.w = *(edx + edi_1)
                            cond:3_1 = edx.w != *(result_4 + edi_1)
                            goto label_40e52f
                        
                        var_5 = 1
                
                if ((*(arg1 + 0x218) & 1) != 0)
                    int32_t eax_5 = 0
                    void* result_3 = result_1
                    
                    while (true)
                        uint32_t ecx_4 = zx.d(*(&ebx_1[-1] - result_1 + result_3))
                        edx = zx.d(ebx_1[-1 + modu.dp.d(0:(eax_5 + 1), 3)])
                        result = *(arg1 + 0x23c)
                        int16_t var_2c_1 = edx.w
                        
                        if (ecx_4 u>= result)
                            break
                        
                        if (edx u>= result)
                            break
                        
                        result_4 = result_3
                        result.w = *result_4
                        
                        if (result.w != 0xffff)
                            if (zx.d(result.w) u>= *(arg1 + 0x264))
                                break
                            
                            edi_1 = &result_5[zx.d(*result_4) * 3]
                            result, result_4 =
                                sub_40c163(zx.d(*result_4) * 6 + *(arg1 + 0x250), var_18_1.w)
                            
                            if (result u>= 3)
                                break
                            
                            if (temp3_1 != 0)
                                int16_t ecx_7 = *(edi_1 + (result << 1))
                                result_4 = zx.d(ecx_4.w) << 1
                                int16_t eax_13 = *(edi_1 + (modu.dp.d(0:(result + 1), 3) << 1))
                                edx = *(arg1 + 0x244)
                                edi_1.w = *(result_4 + edx)
                                result = zx.d(ecx_7) << 1
                                uint32_t ebx_2
                                
                                if (edi_1.w == *(edx + result))
                                    ebx_2.w = edx[zx.d(var_2c_1)]
                                    ebx_1 = var_28_1
                                
                                if (edi_1.w != *(edx + result) || ebx_2.w != edx[zx.d(eax_13)])
                                    int16_t* result_2 = *(arg1 + 0x244)
                                    edi_1.w = result_2[zx.d(var_2c_1)]
                                    
                                    if (edi_1.w != *(result_2 + result))
                                        break
                                    
                                    result = result_2
                                    result_4.w = *(result + result_4)
                                    
                                    if (result_4.w != *(result + (zx.d(eax_13) << 1)))
                                        break
                        
                        eax_5 += 1
                        result_3 += 2
                        
                        if (eax_5 u>= 3)
                            goto label_40e653
                    
                    goto label_40e6a1
            else
                result.w = *ebx_1
                
                if (result_4.w != result.w)
                    goto label_40e6a1
                
                if (result.w != ebx_1[1])
                    goto label_40e6a1
                
                if ((*(arg1 + 0x218) & 1) != 0)
                    result_4.w = *result_1
                    
                    if (result_4.w != 0xffff)
                        goto label_40e6a1
                    
                    edx = var_1c_2 + ebx_1
                    result.w = *edx
                    
                    if (result_4.w != result.w)
                        goto label_40e6a1
                    
                    if (result.w != edx[1])
                        goto label_40e6a1
            
        label_40e653:
            var_18_1 += 1
            result_1 += 6
            ebx_1 = &ebx_1[3]
            var_28_1 = ebx_1
            
            if (var_18_1 u>= *(arg1 + 0x264))
                if (var_5 == 0)
                    break
                
                var_6 = 0
                goto label_40e6a1
    
    if ((*(arg1 + 0x218) & 0x10) != 0 && *(arg1 + 0x25c) != 0)
        int16_t* result_6 = result_5
        result = sub_40e6c1(arg1)
    
    if ((*(arg1 + 0x218) & 0x10) == 0 || *(arg1 + 0x25c) == 0 || result.b != 0)
        var_6 = 1
label_40e6a1:

if (result_5 != 0 && arg2 == 0)
    int32_t* esi_1 = *(arg1 + 0x248)
    (*(*esi_1 + 0x30))(esi_1)

result.b = var_6
return result
