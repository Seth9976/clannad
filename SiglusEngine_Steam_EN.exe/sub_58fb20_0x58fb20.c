// 函数: sub_58fb20
// 地址: 0x58fb20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1cd44f8 == 0)
    if (data_1cd44f4 != 0)
        char* edi = data_1cd4500
        int32_t i_3 = data_1cd44f4 + 1
        int32_t esi_2 = data_1cd43c8
        int32_t edx_5 = data_1cd44fc
        char eax_12
        int32_t i
        
        do
            int32_t ebx_2
            ebx_2.b = *edi
            int32_t eax_7
            eax_7.b = not.b(ebx_2.b)
            *edi = eax_7.b + (*(((ebx_2 - eax_7) << 2) + esi_2)).b
            int32_t ebx_6
            ebx_6.b = edi[1]
            int32_t eax_9
            eax_9.b = not.b(ebx_6.b)
            edi[1] = eax_9.b + (*(((ebx_6 - eax_9) << 2) + esi_2)).b
            int32_t ebx_10
            ebx_10.b = edi[2]
            int32_t eax_11
            eax_11.b = not.b(ebx_10.b)
            eax_12 = eax_11.b + (*(((ebx_10 - eax_11) << 2) + esi_2)).b
            edi[2] = eax_12
            edi = &edi[edx_5]
            i = i_3
            i_3 -= 1
        while (i != 1)
        return eax_12
    
    char* esi = data_1cd4500
    uint32_t edx = zx.d(*esi)
    *esi = *(data_1cd43c8 + ((edx * 2 - 0xff) << 2)) + (0xff - edx).b
    void* esi_1 = data_1cd4500
    uint32_t edx_2 = zx.d(*(esi_1 + 1))
    *(esi_1 + 1) = *(data_1cd43c8 + ((edx_2 * 2 - 0xff) << 2)) + (0xff - edx_2).b
    void* edx_4 = data_1cd4500
    uint32_t ecx_2 = zx.d(*(edx_4 + 2))
    char eax_6 = *(data_1cd43c8 + ((ecx_2 * 2 - 0xff) << 2)) + (0xff - ecx_2).b
    *(edx_4 + 2) = eax_6
    return eax_6

if (data_1cd44f4 == 0)
    char* edi_1 = data_1cd4500
    int32_t i_4 = data_1cd44f8 + 1
    int32_t esi_3 = data_1cd43c8
    int32_t edx_6 = data_1c4ce24
    char eax_18
    int32_t i_1
    
    do
        int32_t ebx_14
        ebx_14.b = *edi_1
        int32_t eax_13
        eax_13.b = not.b(ebx_14.b)
        *edi_1 = eax_13.b + (*(((ebx_14 - eax_13) << 2) + esi_3)).b
        int32_t ebx_18
        ebx_18.b = edi_1[1]
        int32_t eax_15
        eax_15.b = not.b(ebx_18.b)
        edi_1[1] = eax_15.b + (*(((ebx_18 - eax_15) << 2) + esi_3)).b
        int32_t ebx_22
        ebx_22.b = edi_1[2]
        int32_t eax_17
        eax_17.b = not.b(ebx_22.b)
        eax_18 = eax_17.b + (*(((ebx_22 - eax_17) << 2) + esi_3)).b
        edi_1[2] = eax_18
        edi_1 = &edi_1[edx_6]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    return eax_18

char* edi_2 = data_1cd4500
int32_t i_5 = data_1c45978 + 1
int32_t edx_7 = data_1ccce5c
int32_t esi_4 = data_1cd43c8
char eax_24
int32_t i_2

do
    int32_t ebx_26
    ebx_26.b = *edi_2
    int32_t eax_19
    eax_19.b = not.b(ebx_26.b)
    *edi_2 = eax_19.b + (*(((ebx_26 - eax_19) << 2) + esi_4)).b
    int32_t ebx_30
    ebx_30.b = edi_2[1]
    int32_t eax_21
    eax_21.b = not.b(ebx_30.b)
    edi_2[1] = eax_21.b + (*(((ebx_30 - eax_21) << 2) + esi_4)).b
    int32_t ebx_34
    ebx_34.b = edi_2[2]
    int32_t eax_23
    eax_23.b = not.b(ebx_34.b)
    eax_24 = eax_23.b + (*(((ebx_34 - eax_23) << 2) + esi_4)).b
    edi_2[2] = eax_24
    edi_2 = &edi_2[data_1ccce80]
    edx_7 += data_1c4ce38
    
    if (edx_7 s>= 0)
        edi_2 = &edi_2[data_1c4ce3c]
        edx_7 -= data_1cd4324
    
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
return eax_24
