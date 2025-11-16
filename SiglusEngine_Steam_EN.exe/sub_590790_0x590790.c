// 函数: sub_590790
// 地址: 0x590790
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1cd4484 == 0)
    if (data_1cd4480 != 0)
        char* edi = data_1cd4490
        int32_t esi_3 = data_1cd43a4
        int32_t edx = data_1cd4488
        int32_t i = data_1cd4480 + 1
        char eax_15
        
        do
            int32_t eax_10
            eax_10.b = *edi
            *edi = eax_10.b + (*(((data_1cd447c - eax_10) << 2) + esi_3)).b
            int32_t eax_12
            eax_12.b = edi[1]
            edi[1] = eax_12.b + (*(((data_1cd4478 - eax_12) << 2) + esi_3)).b
            int32_t eax_14
            eax_14.b = edi[2]
            eax_15 = eax_14.b + (*(((data_1cd4474 - eax_14) << 2) + esi_3)).b
            edi[2] = eax_15
            edi = &edi[edx]
            i -= 1
        while (i != 0)
        
        return eax_15
    
    char* esi = data_1cd4490
    *esi += *(data_1cd43a4 + ((data_1cd447c - zx.d(*esi)) << 2))
    void* esi_1 = data_1cd4490
    *(esi_1 + 1) += *(data_1cd43a4 + ((data_1cd4478 - zx.d(*(esi_1 + 1))) << 2))
    void* esi_2 = data_1cd4490
    char eax_9 = *(data_1cd43a4 + ((data_1cd4474 - zx.d(*(esi_2 + 2))) << 2))
    *(esi_2 + 2) += eax_9
    return eax_9

if (data_1cd4480 == 0)
    char* edi_1 = data_1cd4490
    int32_t i_1 = data_1cd4484 + 1
    int32_t esi_4 = data_1cd43a4
    char eax_21
    
    do
        int32_t eax_16
        eax_16.b = *edi_1
        *edi_1 = eax_16.b + (*(((data_1cd447c - eax_16) << 2) + esi_4)).b
        int32_t eax_18
        eax_18.b = edi_1[1]
        edi_1[1] = eax_18.b + (*(((data_1cd4478 - eax_18) << 2) + esi_4)).b
        int32_t eax_20
        eax_20.b = edi_1[2]
        eax_21 = eax_20.b + (*(((data_1cd4474 - eax_20) << 2) + esi_4)).b
        edi_1[2] = eax_21
        edi_1 = &edi_1[data_1c4ce34]
        i_1 -= 1
    while (i_1 != 0)
    
    return eax_21

char* edi_2 = data_1cd4490
int32_t i_2 = data_1c45978 + 1
int32_t edx_1 = data_1ccce5c
int32_t esi_5 = data_1cd43a4
char eax_27

do
    int32_t eax_22
    eax_22.b = *edi_2
    *edi_2 = eax_22.b + (*(((data_1cd447c - eax_22) << 2) + esi_5)).b
    int32_t eax_24
    eax_24.b = edi_2[1]
    edi_2[1] = eax_24.b + (*(((data_1cd4478 - eax_24) << 2) + esi_5)).b
    int32_t eax_26
    eax_26.b = edi_2[2]
    eax_27 = eax_26.b + (*(((data_1cd4474 - eax_26) << 2) + esi_5)).b
    edi_2[2] = eax_27
    edi_2 = &edi_2[data_1ccce80]
    edx_1 += data_1c4ce38
    
    if (edx_1 s>= 0)
        edi_2 = &edi_2[data_1c4ce3c]
        edx_1 -= data_1cd4324
    
    i_2 -= 1
while (i_2 != 0)

return eax_27
