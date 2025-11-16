// 函数: sub_58a820
// 地址: 0x58a820
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
        int32_t ebx_1
        ebx_1.b = *edi
        int32_t eax_1
        eax_1.b = not.b(ebx_1.b)
        int32_t eax_3 = data_1cd44bc
        int32_t eax_5 = data_1cd44c8
        char eax_6 = eax_5.b + (*(((eax_3
            + *(((eax_1 + *(((ebx_1 - eax_1) << 2) + data_1cd43c8) - eax_3) << 2) + data_1cd43b0)
            - eax_5) << 2) + data_1cd4384)).b
        *edi = eax_6
        int32_t ebx_13
        ebx_13.b = edi[1]
        int32_t eax_7
        eax_7.b = not.b(ebx_13.b)
        int32_t eax_9 = data_1cd44b8
        int32_t eax_11 = data_1cd44c4
        char eax_12 = eax_11.b + (*(((eax_9
            + *(((eax_7 + *(((ebx_13 - eax_7) << 2) + data_1cd43c8) - eax_9) << 2) + data_1cd43b0)
            - eax_11) << 2) + data_1cd438c)).b
        edi[1] = eax_12
        int32_t ebx_25
        ebx_25.b = edi[2]
        int32_t eax_13
        eax_13.b = not.b(ebx_25.b)
        int32_t eax_15 = data_1cd44b4
        int32_t eax_17 = data_1cd44c0
        result = eax_17.b + (*(((eax_15 +
            *(((eax_13 + *(((ebx_25 - eax_13) << 2) + data_1cd43c8) - eax_15) << 2) + data_1cd43b0)
            - eax_17) << 2) + data_1cd4394)).b
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
