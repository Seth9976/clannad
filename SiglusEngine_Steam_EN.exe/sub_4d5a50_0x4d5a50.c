// 函数: sub_4d5a50
// 地址: 0x4d5a50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* esi = &data_1392cd0
int32_t j

for (int32_t i = 0; i s< 0x12c; )
    *esi = 0x2710
    j = 0
    void* ecx_1 = &data_63eee0
    
    do
        if (*ecx_1 == i)
            *esi = j
            break
        
        j += 1
        ecx_1 += 4
    while (j s< 0x12c)
    
    i += 1
    esi += 4

return j
