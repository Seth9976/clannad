// 函数: sub_5906d0
// 地址: 0x5906d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1cd4484 == 0)
    if (data_1cd4480 != 0)
        int32_t* edi = data_1cd4490
        int32_t eax_1 = data_1cd448c
        int32_t edx = data_1cd4488
        int32_t i = data_1cd4480 + 1
        
        do
            *edi = eax_1
            edi += edx
            i -= 1
        while (i != 0)
        
        return eax_1
    
    int32_t eax = data_1cd448c
    *data_1cd4490 = eax
    return eax

if (data_1cd4480 == 0)
    int32_t* edi_1 = data_1cd4490
    int32_t eax_2 = data_1cd448c
    int32_t i_1 = data_1cd4484 + 1
    int32_t edx_1 = data_1c4ce34
    
    do
        *edi_1 = eax_2
        edi_1 += edx_1
        i_1 -= 1
    while (i_1 != 0)
    
    return eax_2

int32_t* edi_2 = data_1cd4490
int32_t eax_3 = data_1cd448c
int32_t i_2 = data_1c45978 + 1
int32_t ebx = data_1ccce80
int32_t edx_2 = data_1ccce5c
int32_t esi = data_1c4ce38

do
    *edi_2 = eax_3
    edi_2 += ebx
    edx_2 += esi
    
    if (edx_2 s>= 0)
        edi_2 += data_1c4ce3c
        edx_2 -= data_1cd4324
    
    i_2 -= 1
while (i_2 != 0)

return eax_3
