// 函数: sub_58b4f0
// 地址: 0x58b4f0
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
        int32_t eax_12 = data_1cd44c8
        char eax_13 = eax_12.b + (*(((eax_10
            + *(((eax_8 + *(((ebx_11 - eax_8) << 2) + data_1cd43c8) - eax_10) << 2) + data_1cd43b0)
            - eax_12) << 2) + data_1cd4384)).b
        *edi = eax_13
        int32_t eax_14 = data_1cd44cc
        int32_t ebx_23
        ebx_23.b = edi[1]
        int32_t eax_15 = eax_14 + *(((ebx_23 - eax_14) << 2) + data_1cd4444)
        int32_t ebx_27 = eax_15
        eax_15.b = not.b(eax_15.b)
        int32_t eax_17 = data_1cd44b8
        int32_t eax_19 = data_1cd44c4
        char eax_20 = eax_19.b + (*(((eax_17 +
            *(((eax_15 + *(((ebx_27 - eax_15) << 2) + data_1cd43c8) - eax_17) << 2) + data_1cd43b0)
            - eax_19) << 2) + data_1cd438c)).b
        edi[1] = eax_20
        int32_t eax_21 = data_1cd44cc
        int32_t ebx_39
        ebx_39.b = edi[2]
        int32_t eax_22 = eax_21 + *(((ebx_39 - eax_21) << 2) + data_1cd4444)
        int32_t ebx_43 = eax_22
        eax_22.b = not.b(eax_22.b)
        int32_t eax_24 = data_1cd44b4
        int32_t eax_26 = data_1cd44c0
        result = eax_26.b + (*(((eax_24 +
            *(((eax_22 + *(((ebx_43 - eax_22) << 2) + data_1cd43c8) - eax_24) << 2) + data_1cd43b0)
            - eax_26) << 2) + data_1cd4394)).b
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
