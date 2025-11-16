// 函数: sub_71d3e0
// 地址: 0x71d3e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *arg1
int32_t i = arg1[5]
int32_t* esi = edx + arg2 * 0xc
int32_t eax_2 = *esi

if (eax_2 == i)
    return eax_2

void* ecx = edx + eax_2 * 0xc
int32_t eax_4 = esi[2]

if (eax_4 == i)
    int32_t edi = esi[1]
    *(edx + edi * 0xc) = eax_2
    
    if (*(ecx + 8) != arg2)
        *(ecx + 4) = edi
        int32_t eax_8 = arg1[5]
        *esi = eax_8
        return eax_8
    
    *(ecx + 8) = edi
    int32_t eax_7 = arg1[5]
    *esi = eax_7
    return eax_7

int32_t esi_4 = esi[1]

if (esi_4 != i)
    int32_t eax_14 = esi_4 * 3
    void* eax_15 = edx + (eax_14 << 2)
    
    if (*(edx + (eax_14 << 2) + 8) != i)
        int32_t eax_16
        
        do
            esi_4 = *(eax_15 + 8)
            eax_16 = esi_4 * 3
            eax_15 = edx + (eax_16 << 2)
        while (*(edx + (eax_16 << 2) + 8) != i)
    
    sub_71d3e0(esi_4)
    return sub_71d4d0(arg1, arg2, esi_4)

*(edx + eax_4 * 0xc) = eax_2

if (*(ecx + 8) != arg2)
    *(ecx + 4) = eax_4
    int32_t eax_13 = arg1[5]
    *esi = eax_13
    return eax_13

*(ecx + 8) = eax_4
int32_t eax_12 = arg1[5]
*esi = eax_12
return eax_12
