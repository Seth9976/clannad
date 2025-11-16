// 函数: sub_5fb930
// 地址: 0x5fb930
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *arg1

if (result s< 0)
label_5fb9a3:
    *arg1 = 0xffffffff
label_5fb9a9:
    *arg1 = 0xffffffff
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0
else
    void* ecx = data_bac510
    
    if (*(ecx + 0xa48b50) s<= result)
        goto label_5fb9a3
    
    int32_t ebx_1 = 0
    void* ecx_1 = ecx + result * 0xc
    int32_t edi_1 = 0
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x2aaaaaab, *(ecx_1 + 0xa47f54) - *(ecx_1 + 0xa47f50))
    int32_t edx_2 = edx_1 s>> 1
    result = (edx_2 u>> 0x1f) + edx_2
    int32_t result_1 = result
    
    if (result s<= 0)
        goto label_5fb9a3
    
    int32_t ecx_5 = 0
    
    while (true)
        int32_t edx_4 = *(ecx_5 + *(ecx_1 + 0xa47f50) + 8)
        result = arg1[1] - ebx_1
        
        if (result s< edx_4)
            break
        
        edi_1 += 1
        ebx_1 += edx_4
        ecx_5 += 0xc
        
        if (edi_1 s>= result_1)
            goto label_5fb9a3
    
    if (edi_1 == 0xffffffff)
        goto label_5fb9a3
    
    bool cond:0_1 = *arg1 != 0xffffffff
    int32_t ecx_6 = edi_1 * 3
    arg1[2] = *(*(ecx_1 + 0xa47f50) + (ecx_6 << 2))
    result = *(*(ecx_1 + 0xa47f50) + (ecx_6 << 2) + 4)
    arg1[3] = result
    
    if (not(cond:0_1))
        goto label_5fb9a9

return result
