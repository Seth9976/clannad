// 函数: sub_58b8b0
// 地址: 0x58b8b0
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
        int32_t esi_5 = data_1cd43a4
        int32_t eax_7 = data_1cd44cc
        int32_t ebx_7
        ebx_7.b = *edi
        int32_t eax_8 = eax_7 + *(((ebx_7 - eax_7) << 2) + data_1cd4444)
        int32_t ebx_11 = eax_8
        eax_8.b = not.b(eax_8.b)
        int32_t eax_10 = data_1cd44bc
        int32_t eax_12 = data_1cd44c8
        int32_t eax_14
        eax_14.b = *edi
        int32_t ebx_24 = eax_12 + *(((eax_10
            + *(((eax_8 + *(((ebx_11 - eax_8) << 2) + data_1cd43c8) - eax_10) << 2) + data_1cd43b0)
            - eax_12) << 2) + data_1cd4384) - eax_14
        *edi = eax_14.b + (*((ebx_24 << 2) + esi_5)).b
        int32_t eax_16 = data_1cd44cc
        int32_t ebx_27
        ebx_27.b = edi[1]
        int32_t eax_17 = eax_16 + *(((ebx_27 - eax_16) << 2) + data_1cd4444)
        int32_t ebx_31 = eax_17
        eax_17.b = not.b(eax_17.b)
        int32_t eax_19 = data_1cd44b8
        int32_t eax_21 = data_1cd44c4
        int32_t eax_23
        eax_23.b = edi[1]
        int32_t ebx_44 = eax_21 + *(((eax_19 +
            *(((eax_17 + *(((ebx_31 - eax_17) << 2) + data_1cd43c8) - eax_19) << 2) + data_1cd43b0)
            - eax_21) << 2) + data_1cd438c) - eax_23
        edi[1] = eax_23.b + (*((ebx_44 << 2) + esi_5)).b
        int32_t eax_25 = data_1cd44cc
        int32_t ebx_47
        ebx_47.b = edi[2]
        int32_t eax_26 = eax_25 + *(((ebx_47 - eax_25) << 2) + data_1cd4444)
        int32_t ebx_51 = eax_26
        eax_26.b = not.b(eax_26.b)
        int32_t eax_28 = data_1cd44b4
        int32_t eax_30 = data_1cd44c0
        int32_t eax_32
        eax_32.b = edi[2]
        int32_t ebx_64 = eax_30 + *(((eax_28 +
            *(((eax_26 + *(((ebx_51 - eax_26) << 2) + data_1cd43c8) - eax_28) << 2) + data_1cd43b0)
            - eax_30) << 2) + data_1cd4394) - eax_32
        result = eax_32.b + (*((ebx_64 << 2) + esi_5)).b
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
