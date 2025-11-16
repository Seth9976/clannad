// 函数: sub_585330
// 地址: 0x585330
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* edi = data_1cd43e8
char* esi = data_1cd43dc
int32_t i_1 = data_1cd43cc
char result
int32_t i

do
    int32_t j_1 = data_1cd43d0
    int32_t j
    
    do
        *edi &= *esi
        edi[1] &= esi[1]
        result = esi[2]
        edi[2] &= result
        esi = &esi[4]
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    edi = &edi[data_1cd43e4]
    esi = &esi[data_1cd43d8]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
