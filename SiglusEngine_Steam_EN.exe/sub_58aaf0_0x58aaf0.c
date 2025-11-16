// 函数: sub_58aaf0
// 地址: 0x58aaf0
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
        int32_t eax_1
        eax_1.b = not.b(ebx_1.b)
        int32_t eax_3 = data_1cd44bc
        int32_t eax_5 = data_1cd44c8
        int32_t eax_7
        eax_7.b = *edi
        int32_t ebx_14 = eax_5 + *(((eax_3
            + *(((eax_1 + *(((ebx_1 - eax_1) << 2) + data_1cd43c8) - eax_3) << 2) + data_1cd43b0)
            - eax_5) << 2) + data_1cd4384) - eax_7
        *edi = eax_7.b + (*((ebx_14 << 2) + esi)).b
        int32_t ebx_17
        ebx_17.b = edi[1]
        int32_t eax_9
        eax_9.b = not.b(ebx_17.b)
        int32_t eax_11 = data_1cd44b8
        int32_t eax_13 = data_1cd44c4
        int32_t eax_15
        eax_15.b = edi[1]
        int32_t ebx_30 = eax_13 + *(((eax_11
            + *(((eax_9 + *(((ebx_17 - eax_9) << 2) + data_1cd43c8) - eax_11) << 2) + data_1cd43b0)
            - eax_13) << 2) + data_1cd438c) - eax_15
        edi[1] = eax_15.b + (*((ebx_30 << 2) + esi)).b
        int32_t ebx_33
        ebx_33.b = edi[2]
        int32_t eax_17
        eax_17.b = not.b(ebx_33.b)
        int32_t eax_19 = data_1cd44b4
        int32_t eax_21 = data_1cd44c0
        int32_t eax_23
        eax_23.b = edi[2]
        int32_t ebx_46 = eax_21 + *(((eax_19 +
            *(((eax_17 + *(((ebx_33 - eax_17) << 2) + data_1cd43c8) - eax_19) << 2) + data_1cd43b0)
            - eax_21) << 2) + data_1cd4394) - eax_23
        result = eax_23.b + (*((ebx_46 << 2) + esi)).b
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
