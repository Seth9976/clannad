// 函数: sub_6218d0
// 地址: 0x6218d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* esi = data_bac4dc
int32_t eax = esi[1]

if (arg1 u< eax)
    ecx = *esi

if (arg1 u>= eax || ecx u> arg1)
    if (eax == esi[2])
        int32_t var_14_2 = ecx
        eax = sub_5da6b0(esi)
    
    int32_t* ecx_4 = esi[1]
    
    if (ecx_4 != 0)
        *ecx_4 = *arg1
        eax = arg1[1]
        ecx_4[1] = eax
else
    int32_t edi_2 = (arg1 - ecx) s>> 3
    
    if (eax == esi[2])
        int32_t var_14_1 = ecx
        eax = sub_5da6b0(esi)
    
    int32_t* edx_1 = esi[1]
    
    if (edx_1 != 0)
        int32_t ecx_2 = *esi
        *edx_1 = *(ecx_2 + (edi_2 << 3))
        int32_t eax_2 = *(ecx_2 + (edi_2 << 3) + 4)
        edx_1[1] = eax_2
        esi[1] += 8
        return eax_2

esi[1] += 8
return eax
