// 函数: sub_732da0
// 地址: 0x732da0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
uint32_t eax
eax.b = 0
void* var_14 = esi
uint32_t var_8 = eax
void* edi = *(esi + 0x1a0)

if (*(esi + 0xc9) == 0 || *(esi + 0x8c) == 0)
    eax.b = 0
    return eax

if (*(edi + 0x70) == 0)
    *(edi + 0x70) = (**(esi + 4))(esi, 1, *(esi + 0x24) * 0x18)
    eax = var_8

void* ecx_1 = *(edi + 0x70)
void* var_c = ecx_1
int32_t i_1 = 0

if (*(esi + 0x24) s> 0)
    int32_t ebx_1 = 0
    int32_t* edi_2 = *(esi + 0xc4) + 0x50
    int32_t i
    
    do
        int16_t* eax_12 = *edi_2
        int32_t* edx_2
        
        if (eax_12 != 0 && *eax_12 != 0 && eax_12[1] != 0 && eax_12[8] != 0 && eax_12[0x10] != 0
                && eax_12[9] != 0 && eax_12[2] != 0)
            edx_2 = *(esi + 0x8c) + ebx_1
        
        if (eax_12 == 0 || *eax_12 == 0 || eax_12[1] == 0 || eax_12[8] == 0 || eax_12[0x10] == 0
                || eax_12[9] == 0 || eax_12[2] == 0 || *edx_2 s< 0)
            eax_12.b = 0
            return eax_12
        
        *(ecx_1 + 4) = edx_2[1]
        char ecx_2 = var_8.b
        
        if (edx_2[1] != 0)
            ecx_2 = 1
        
        *(8 + var_c) = *(8 + edx_2)
        char ecx_4 = ecx_2
        
        if (*(8 + edx_2) != 0)
            ecx_4 = 1
        
        *(var_c + 0xc) = edx_2[3]
        char ecx_5 = ecx_4
        
        if (edx_2[3] != 0)
            ecx_5 = 1
        
        *(var_c + 0x10) = edx_2[4]
        char ecx_6 = ecx_5
        
        if (edx_2[4] != 0)
            ecx_6 = 1
        
        *(var_c + 0x14) = edx_2[5]
        eax = zx.d(ecx_6)
        
        if (edx_2[5] != 0)
            eax = 1
        
        esi = var_14
        i = i_1 + 1
        ecx_1 = var_c + 0x18
        var_8 = eax
        ebx_1 += 0x100
        var_c = ecx_1
        edi_2 = &edi_2[0x16]
        i_1 = i
    while (i s< *(esi + 0x24))

return eax
