// 函数: sub_58d230
// 地址: 0x58d230
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* edi = data_1cd43e8
char* esi = data_1cd43dc
int32_t edx = data_1cd43a4
int32_t i_1 = data_1cd43cc
char result
int32_t i

do
    int32_t j_1 = data_1cd43d0
    int32_t j
    
    do
        int32_t eax_1
        eax_1.b = *esi
        char* esi_2 = data_1c45994 + (eax_1 << 2)
        int32_t eax_3
        eax_3.b = *edi
        int32_t ebx_1
        ebx_1.b = *esi_2
        *edi = eax_3.b + (*(((ebx_1 - eax_3) << 2) + edx)).b
        int32_t eax_5
        eax_5.b = edi[1]
        int32_t ebx_5
        ebx_5.b = esi_2[1]
        edi[1] = eax_5.b + (*(((ebx_5 - eax_5) << 2) + edx)).b
        int32_t eax_7
        eax_7.b = edi[2]
        int32_t ebx_9
        ebx_9.b = esi_2[2]
        result = eax_7.b + (*(((ebx_9 - eax_7) << 2) + edx)).b
        edi[2] = result
        esi = &esi[1]
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
