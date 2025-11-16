// 函数: sub_42ef50
// 地址: 0x42ef50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg1 + 0x174)

if (edx == 0)
    *(arg1 + 0xc) = 0xffffffff
    return 

int32_t eax = *(arg1 + 0xc)
int32_t ecx

if (eax != 0xffffffff && eax s>= 0 && eax s< edx)
    ecx = eax * 3

if (eax != 0xffffffff && eax s>= 0 && eax s< edx
        && *(*(arg1 + 0x170) + ecx * 0x10 + 8) s<= *(arg1 + 8))
    return 

int32_t edi_1 = *(arg1 + 8)
int32_t eax_2

if (edi_1 s> *(arg1 + 0x18))
    eax_2 = *(arg1 + 0x1c)
    *(arg1 + 0x20) = 1
else
    eax_2 = 0
    
    if (edx s> 0)
        int32_t* ecx_3 = *(arg1 + 0x170) + 8
        
        do
            if (*ecx_3 == edi_1)
                goto label_42efd1
            
            eax_2 += 1
            ecx_3 = &ecx_3[0xc]
        while (eax_2 s< edx)
    
    int32_t var_8
    eax_2 = var_8

label_42efd1:
void* edx_3 = eax_2 * 0x30 + *(arg1 + 0x170)

if (*(edx_3 + 0x18) == 1 && *(edx_3 + 0x1c) == 1)
    eax_2 = sub_42ed00(arg1, edx_3)

*(arg1 + 0xc) = eax_2
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
