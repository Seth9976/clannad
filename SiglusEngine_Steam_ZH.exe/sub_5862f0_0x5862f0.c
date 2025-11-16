// 函数: sub_5862f0
// 地址: 0x5862f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** var_c
void** var_8

if (arg3 == 1)
    int32_t ecx_5 = arg2[5]
    void** esi_2
    
    if (ecx_5 u< 8)
        esi_2 = arg2
    else
        esi_2 = *arg2
    
    void* eax_5 = esi_2 + (arg2[4] << 1)
    
    if (ecx_5 u>= 8)
        arg2 = *arg2
    
    var_c = arg2
    void** ecx_7 = nullptr
    
    if (sub_6af490(eax_5, &var_8, &var_c, eax_5) != 0)
        ecx_7 = var_8
    
    *(arg4 + 0xbc) = ecx_7
else if (arg3 == 2)
    int32_t ecx_2 = arg2[5]
    void** esi_1
    
    if (ecx_2 u< 8)
        esi_1 = arg2
    else
        esi_1 = *arg2
    
    void* eax_1 = esi_1 + (arg2[4] << 1)
    
    if (ecx_2 u>= 8)
        arg2 = *arg2
    
    var_8 = arg2
    void** ecx_4 = nullptr
    
    if (sub_6af490(eax_1, &var_c, &var_8, eax_1) != 0)
        ecx_4 = var_c
    
    *(arg4 + 0xe8) = ecx_4
