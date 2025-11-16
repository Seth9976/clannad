// 函数: sub_58d1e0
// 地址: 0x58d1e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = data_1cd43e8
char* esi = data_1cd43dc
int32_t i = data_1cd43cc
int32_t result

do
    int32_t j = data_1cd43d0
    
    do
        int32_t eax_1
        eax_1.b = *esi
        result = *(data_1c45994 + (eax_1 << 2))
        *edi = result
        esi = &esi[1]
        edi = &edi[1]
        j -= 1
    while (j != 0)
    
    edi += data_1cd43e4
    esi = &esi[data_1cd43d8]
    i -= 1
while (i != 0)

return result
