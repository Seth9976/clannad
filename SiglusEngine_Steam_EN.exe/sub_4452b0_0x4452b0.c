// 函数: sub_4452b0
// 地址: 0x4452b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

data_1392cc4 = 0

if (arg1 s<= 0xfffffffe)
    data_1392cc4 = 0
    data_13701e0 = 1
    data_1392cc8 = 1
    data_f89aec = 0xffffffff
    data_f89af0 = 0xffffffff
    data_f89af4 = 0xffffffff
    data_f89af8 = 0xffffffff
    return 

if (arg1 != 0xffffffff)
    if (arg1 u<= 0x12b)
        int32_t eax = *((arg1 << 2) + &data_1392cd0)
        
        if (eax s< 0x2710)
            *(eax * 0x24 + &data_13701f7) = 1
    
    return 

void* eax_1 = &data_1392cd8
int32_t i_1 = arg1 + 0x33
int32_t i

do
    int32_t ecx = *(eax_1 - 8)
    
    if (ecx s< 0x2710)
        int32_t ecx_1 = ecx * 9
        
        if (*((ecx_1 << 2) + &data_13701f5) != 0)
            *((ecx_1 << 2) + &data_13701f7) = 1
    
    int32_t ecx_2 = *(eax_1 - 4)
    
    if (ecx_2 s< 0x2710)
        int32_t ecx_3 = ecx_2 * 9
        
        if (*((ecx_3 << 2) + &data_13701f5) != 0)
            *((ecx_3 << 2) + &data_13701f7) = 1
    
    int32_t ecx_4 = *eax_1
    
    if (ecx_4 s< 0x2710)
        int32_t ecx_5 = ecx_4 * 9
        
        if (*((ecx_5 << 2) + &data_13701f5) != 0)
            *((ecx_5 << 2) + &data_13701f7) = 1
    
    int32_t ecx_6 = *(eax_1 + 4)
    
    if (ecx_6 s< 0x2710)
        int32_t ecx_7 = ecx_6 * 9
        
        if (*((ecx_7 << 2) + &data_13701f5) != 0)
            *((ecx_7 << 2) + &data_13701f7) = 1
    
    int32_t ecx_8 = *(eax_1 + 8)
    
    if (ecx_8 s< 0x2710)
        int32_t ecx_9 = ecx_8 * 9
        
        if (*((ecx_9 << 2) + &data_13701f5) != 0)
            *((ecx_9 << 2) + &data_13701f7) = 1
    
    int32_t ecx_10 = *(eax_1 + 0xc)
    
    if (ecx_10 s< 0x2710)
        int32_t ecx_11 = ecx_10 * 9
        
        if (*((ecx_11 << 2) + &data_13701f5) != 0)
            *((ecx_11 << 2) + &data_13701f7) = 1
    
    eax_1 += 0x18
    i = i_1
    i_1 -= 1
while (i != 1)
