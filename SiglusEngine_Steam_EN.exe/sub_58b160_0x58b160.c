// 函数: sub_58b160
// 地址: 0x58b160
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
        int32_t eax_9 = data_1cd44bc
        int32_t eax_11 = data_1cd44c8
        int32_t eax_13
        eax_13.b = *edi
        int32_t ebx_20 = eax_11 + *(((eax_9
            + *(((eax_7 + *(((ebx_7 - eax_7) << 2) + data_1cd4444) - eax_9) << 2) + data_1cd43b0)
            - eax_11) << 2) + data_1cd4384) - eax_13
        *edi = eax_13.b + (*((ebx_20 << 2) + esi_5)).b
        int32_t eax_15 = data_1cd44cc
        int32_t ebx_23
        ebx_23.b = edi[1]
        int32_t eax_17 = data_1cd44b8
        int32_t eax_19 = data_1cd44c4
        int32_t eax_21
        eax_21.b = edi[1]
        int32_t ebx_36 = eax_19 + *(((eax_17 +
            *(((eax_15 + *(((ebx_23 - eax_15) << 2) + data_1cd4444) - eax_17) << 2) + data_1cd43b0)
            - eax_19) << 2) + data_1cd438c) - eax_21
        edi[1] = eax_21.b + (*((ebx_36 << 2) + esi_5)).b
        int32_t eax_23 = data_1cd44cc
        int32_t ebx_39
        ebx_39.b = edi[2]
        int32_t eax_25 = data_1cd44b4
        int32_t eax_27 = data_1cd44c0
        int32_t eax_29
        eax_29.b = edi[2]
        int32_t ebx_52 = eax_27 + *(((eax_25 +
            *(((eax_23 + *(((ebx_39 - eax_23) << 2) + data_1cd4444) - eax_25) << 2) + data_1cd43b0)
            - eax_27) << 2) + data_1cd4394) - eax_29
        result = eax_29.b + (*((ebx_52 << 2) + esi_5)).b
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
