// 函数: sub_5c34e0
// 地址: 0x5c34e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = data_1cd4408
int32_t* edi = data_1cd4404
int32_t ecx = data_1cd440c

while (true)
    int32_t* var_10_1 = esi
    int32_t* var_14_1 = edi
    int32_t edx_1 = data_1cd4418
    int32_t ecx_1 = data_1cd4410
label_5c3504:
    int32_t result = *esi
    *edi = result
    int32_t edx_2 = edx_1
    
    while (true)
        esi = &esi[1]
        edx_2 += data_1cd43f0
        
        if (edx_2 s>= data_1cd43f8)
            edx_1 = edx_2 - data_1cd43f8
            edi = &edi[1]
            int32_t temp2_1 = ecx_1
            ecx_1 -= 1
            
            if (temp2_1 == 1)
                goto label_5c3532
            
            goto label_5c3504
        
        int32_t temp0_1 = ecx_1
        ecx_1 -= 1
        
        if (temp0_1 == 1)
        label_5c3532:
            int32_t temp1_1 = ecx
            ecx -= 1
            
            if (temp1_1 == 1)
                return result
            
            esi = var_10_1 + data_1cd4400
            edi = var_14_1 + data_1cd43fc
            break
