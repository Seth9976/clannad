// 函数: sub_58a150
// 地址: 0x58a150
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
        int32_t eax_8 = eax_7 + *(((ebx_7 - eax_7) << 2) + data_1cd4444)
        int32_t ebx_11 = eax_8
        eax_8.b = not.b(eax_8.b)
        int32_t eax_10 = data_1cd44bc
        *edi = eax_10.b + (
            *(((eax_8 + *(((ebx_11 - eax_8) << 2) + data_1cd43c8) - eax_10) << 2) + data_1cd43b0)).b
        int32_t eax_12 = data_1cd44cc
        int32_t ebx_19
        ebx_19.b = edi[1]
        int32_t eax_13 = eax_12 + *(((ebx_19 - eax_12) << 2) + data_1cd4444)
        int32_t ebx_23 = eax_13
        eax_13.b = not.b(eax_13.b)
        int32_t eax_15 = data_1cd44b8
        edi[1] = eax_15.b + (
            *(((eax_13 + *(((ebx_23 - eax_13) << 2) + data_1cd43c8) - eax_15) << 2) + data_1cd43b0)).b
        int32_t eax_17 = data_1cd44cc
        int32_t ebx_31
        ebx_31.b = edi[2]
        int32_t eax_18 = eax_17 + *(((ebx_31 - eax_17) << 2) + data_1cd4444)
        int32_t ebx_35 = eax_18
        eax_18.b = not.b(eax_18.b)
        int32_t eax_20 = data_1cd44b4
        result = eax_20.b + (
            *(((eax_18 + *(((ebx_35 - eax_18) << 2) + data_1cd43c8) - eax_20) << 2) + data_1cd43b0)).b
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
