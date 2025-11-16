// 函数: sub_5c3370
// 地址: 0x5c3370
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = data_1cd4408
int32_t* edi = data_1cd4404
int32_t ecx = data_1cd440c
int32_t result

while (true)
    int32_t* var_10_1 = esi
    int32_t* var_14_1 = edi
    int32_t edx_1 = data_1cd4418
    int32_t i_1 = data_1cd4410
    int32_t i
    
    do
        result = *esi
        *edi = result
        edi = &edi[1]
        edx_1 += data_1cd43f8
        
        if (edx_1 s>= data_1cd43f0)
            edx_1 -= data_1cd43f0
            esi = &esi[1]
        
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t temp1_1 = ecx
    ecx -= 1
    
    if (temp1_1 == 1)
        break
    
    esi = var_10_1 + data_1cd4400
    edi = var_14_1 + data_1cd43fc

return result
