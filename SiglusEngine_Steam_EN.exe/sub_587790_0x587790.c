// 函数: sub_587790
// 地址: 0x587790
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* edi = data_1cd4500
int32_t edx = data_1cd44fc
int32_t esi = data_1cd43a4
int32_t i_1 = data_1cd44f8
char result
int32_t i

do
    int32_t j_1 = data_1cd44f4
    int32_t j
    
    do
        int32_t ebx_1
        ebx_1.b = *edi
        int32_t eax_1 = data_1cd44bc
        int32_t eax_3
        eax_3.b = *edi
        *edi =
            eax_3.b + (*(((eax_1 + *(((ebx_1 - eax_1) << 2) + data_1cd43b0) - eax_3) << 2) + esi)).b
        int32_t ebx_9
        ebx_9.b = edi[1]
        int32_t eax_5 = data_1cd44b8
        int32_t eax_7
        eax_7.b = edi[1]
        edi[1] =
            eax_7.b + (*(((eax_5 + *(((ebx_9 - eax_5) << 2) + data_1cd43b0) - eax_7) << 2) + esi)).b
        int32_t ebx_17
        ebx_17.b = edi[2]
        int32_t eax_9 = data_1cd44b4
        int32_t eax_11
        eax_11.b = edi[2]
        result = eax_11.b
            + (*(((eax_9 + *(((ebx_17 - eax_9) << 2) + data_1cd43b0) - eax_11) << 2) + esi)).b
        edi[2] = result
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    edi = &edi[edx]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
