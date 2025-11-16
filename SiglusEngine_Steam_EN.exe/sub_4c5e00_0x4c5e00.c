// 函数: sub_4c5e00
// 地址: 0x4c5e00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg3
char* esi = arg3
int32_t result = 0xffffffff
void* ecx = &data_20ae9bc
int32_t result_1 = 0

while (true)
    if (*ecx == 0)
        result = result_1
        
        if (result_1 != 0xffffffff)
            break
    else
        result_1 += 1
        ecx += 0x3c
        
        if (result_1 s< 0x20)
            continue
    
    int32_t edi_1 = 0xffffffff
    void* edx = &data_20ae9c8
    
    for (int32_t i = 0; i s< 0x20; )
        int32_t ecx_1 = *edx
        
        if (ecx_1 s>= 2 && (edi_1 == 0xffffffff || ecx_1 s> edi_1))
            edi_1 = ecx_1
            result = i
        
        i += 1
        edx += 0x3c
    
    if (result == 0xffffffff)
        int32_t edx_1 = edx | result
        void* eax = &data_20ae9c4
        
        for (int32_t i_1 = 0; i_1 s< 0x20; )
            if (edx_1 == 0xffffffff || *eax s< edx_1)
                edx_1 = *eax
                result = i_1
            
            i_1 += 1
            eax += 0x3c
    
    break

int32_t edi_4 = result * 0xf
HGDIOBJ ho = *((edi_4 << 2) + &data_20ae9bc)

if (ho != 0)
    DeleteObject(ho)

HGDIOBJ ho_1 = *((edi_4 << 2) + &data_20ae9c0)

if (ho_1 != 0)
    DeleteObject(ho_1)

*((edi_4 << 2) + &data_20ae990) = arg2
*((edi_4 << 2) + &data_20ae9bc) = arg4
*((edi_4 << 2) + &data_20ae9c0) = arg5
void* eax_4 = (edi_4 << 2) + &data_20ae99c
*((edi_4 << 2) + &data_20ae994) = 0
*((edi_4 << 2) + &data_20ae998) = 0x190
*((edi_4 << 2) + &data_20ae9c4) = 0
*((edi_4 << 2) + &data_20ae9c8) = 0

if (eax_4 != 0 && esi != 0)
    while (*esi != 0)
        char ecx_2 = *esi
        
        if (ecx_2 u< 0x80)
        label_4c5f2c:
            *eax_4 = ecx_2
            eax_4 += 1
            esi = &esi[1]
        else
            if (ecx_2 u< 0xa0)
                if (ecx_2 u>= 0xfe)
                    goto label_4c5f2c
            else if (ecx_2 u<= 0xdf || ecx_2 u>= 0xfe)
                goto label_4c5f2c
            
            *eax_4 = ecx_2
            *(eax_4 + 1) = esi[1]
            eax_4 += 2
            esi = &esi[2]
    
    *eax_4 = 0

return result
