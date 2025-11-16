// 函数: sub_52a460
// 地址: 0x52a460
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t var_14 = 0
char* var_10 = nullptr

if (data_1b8c884 s<= 0)
    return 

void* ebx_1 = &data_20c0720

do
    *(arg2 + 0x20) += 1
    char* ecx_1 = *(arg2 + 0x20)
    uint32_t eax_1 = zx.d(*ecx_1)
    *((i << 2) + &data_20c0560) = eax_1
    int32_t var_18
    int32_t* eax_2 = &var_18
    *(arg2 + 0x20) = &ecx_1[1]
    void* var_28_1 = &var_18
    
    if (eax_1 != 0)
        char** eax_4 = sub_4ef440(eax_2, arg2 + 0x20, &ecx_1[1], "S@", var_28_1)
        
        if (i s< 0x38)
            sub_4cfdf0(eax_4, var_10, ebx_1, 0x3f)
    else
        sub_4ef440(eax_2, arg2 + 0x20, &ecx_1[1], "$@", var_28_1)
        
        if (i s< 0x38)
            *((i << 2) + &data_20c0640) = var_18
    
    char* eax_5 = *(arg2 + 0x20)
    
    while (true)
        char ecx_3 = *eax_5
        
        if (ecx_3 != 0x2c && ecx_3 != 0x20)
            break
        
        eax_5 = &eax_5[1]
    
    *(arg2 + 0x20) = eax_5
    sub_4eef40(&var_18, 1)
    i += 1
    ebx_1 += 0x40
while (i s< data_1b8c884)
