// 函数: sub_585060
// 地址: 0x585060
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = data_1cd43e8
int32_t* esi = data_1cd43dc
int32_t i_1 = data_1cd43cc
int32_t result
int32_t i

do
    int32_t j_1 = data_1cd43d0
    int32_t j
    
    do
        result = *esi & 0xffffff
        
        if (result != data_20f3398)
            *edi = result
        
        esi = &esi[1]
        edi = &edi[1]
        j = j_1
        j_1 -= 1
    while (j != 1)
    edi += data_1cd43e4
    esi += data_1cd43d8
    i = i_1
    i_1 -= 1
while (i != 1)
return result
