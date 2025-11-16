// 函数: sub_586290
// 地址: 0x586290
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* edi = data_1cd4490
int32_t esi = data_1cd43a4
int32_t edx = data_1cd4488
int32_t i = data_1cd4484
char result

do
    int32_t j = data_1cd4480
    
    do
        int32_t eax_1
        eax_1.b = *edi
        *edi = eax_1.b + (*(((data_1cd447c - eax_1) << 2) + esi)).b
        int32_t eax_3
        eax_3.b = edi[1]
        edi[1] = eax_3.b + (*(((data_1cd4478 - eax_3) << 2) + esi)).b
        int32_t eax_5
        eax_5.b = edi[2]
        result = eax_5.b + (*(((data_1cd4474 - eax_5) << 2) + esi)).b
        edi[2] = result
        edi = &edi[4]
        j -= 1
    while (j != 0)
    
    edi = &edi[edx]
    i -= 1
while (i != 0)

return result
