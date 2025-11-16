// 函数: sub_5c3300
// 地址: 0x5c3300
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = data_1cd4408
int32_t* edi = data_1cd4404
int32_t ecx = data_1cd440c
int32_t ebx = data_1cd4414

while (true)
    int32_t* var_14_1 = esi
    int32_t* var_18_1 = edi
    int32_t i_1 = data_1cd4410
    int32_t result
    int32_t i
    
    do
        result = *esi
        *edi = result
        esi = &esi[1]
        edi = &edi[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t ebx_1 = ebx
    esi = var_14_1
    int32_t ecx_1 = ecx
    
    while (true)
        esi += data_1cd4400
        ebx_1 += data_1cd43ec
        
        if (ebx_1 s< data_1cd43f4)
            int32_t temp1_1 = ecx_1
            ecx_1 -= 1
            
            if (temp1_1 != 1)
                continue
        else
            ebx = ebx_1 - data_1cd43f4
            edi = var_18_1 + data_1cd43fc
            ecx = ecx_1 - 1
            
            if (ecx_1 != 1)
                break
        
        return result
