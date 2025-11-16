// 函数: sub_588980
// 地址: 0x588980
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* edi = data_1cd4500
int32_t edx = data_1cd44fc
int32_t i_1 = data_1cd44f8
char result
int32_t i

do
    int32_t j_1 = data_1cd44f4
    int32_t j
    
    do
        int32_t eax_1
        eax_1.b = *edi
        int32_t eax_3
        eax_3.b = edi[1]
        int32_t eax_5
        eax_5.b = edi[2]
        data_1cd44cc = (*(data_1cd4334 + (eax_1 << 2)) + *(data_1cd4330 + (eax_3 << 2))
            + *(data_1cd432c + (eax_5 << 2))) u>> 8
        int32_t eax_7 = data_1cd44cc
        int32_t ebx_7
        ebx_7.b = *edi
        int32_t eax_9 = data_1cd44c8
        *edi = eax_9.b +
            (*(((eax_7 + *(((ebx_7 - eax_7) << 2) + data_1cd4444) - eax_9) << 2) + data_1cd4384)).b
        int32_t eax_11 = data_1cd44cc
        int32_t ebx_15
        ebx_15.b = edi[1]
        int32_t eax_13 = data_1cd44c4
        edi[1] = eax_13.b + (
            *(((eax_11 + *(((ebx_15 - eax_11) << 2) + data_1cd4444) - eax_13) << 2) + data_1cd438c)).b
        int32_t eax_15 = data_1cd44cc
        int32_t ebx_23
        ebx_23.b = edi[2]
        int32_t eax_17 = data_1cd44c0
        result = eax_17.b + (
            *(((eax_15 + *(((ebx_23 - eax_15) << 2) + data_1cd4444) - eax_17) << 2) + data_1cd4394)).b
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
