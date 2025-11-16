// 函数: sub_729280
// 地址: 0x729280
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t* var_10 = esi

if (esi[5] != 0xca)
    *(*esi + 0x14) = 0x15
    *(*esi + 0x18) = esi[5]
    (**esi)(esi)

sub_72bb60(esi)
int32_t i_2 = 0

if (esi[9] s> 0)
    void* ecx_3 = esi[0x31] + 0x24
    void* var_8_1 = ecx_3
    int32_t i
    
    do
        int32_t eax_11 = esi[0x48]
        int32_t edi_1 = 1
        int32_t ebx_1
        ebx_1.b = esi[0x12].b != 0
        
        if (eax_11 s<= (ebx_1 << 2) + 4)
            int32_t edx_1 = esi[0x46]
            int32_t eax_5 = *(ecx_3 - 0x1c)
            int32_t var_18_1 = eax_5
            int32_t var_1c_1 = edx_1
            
            do
                if (mods.dp.d(sx.q(edx_1), eax_5 * edi_1 * 2) != 0)
                    break
                
                edx_1 = var_1c_1
                edi_1 *= 2
                eax_5 = var_18_1
            while (eax_11 * edi_1 s<= (ebx_1 << 2) + 4)
            
            esi = var_10
            ecx_3 = var_8_1
        
        int32_t edi_2 = 1
        *ecx_3 = eax_11 * edi_1
        int32_t ebx_3 = esi[0x49]
        int32_t eax_13
        eax_13.b = esi[0x12].b != 0
        
        if (ebx_3 s<= (eax_13 << 2) + 4)
            int32_t edx_4 = esi[0x47]
            int32_t eax_15 = *(ecx_3 - 0x18)
            int32_t var_18_2 = eax_15
            int32_t var_c_2 = edx_4
            
            do
                if (mods.dp.d(sx.q(edx_4), eax_15 * edi_2 * 2) != 0)
                    break
                
                edx_4 = var_c_2
                edi_2 *= 2
                eax_15 = var_18_2
            while (ebx_3 * edi_2 s<= (eax_13 << 2) + 4)
            
            esi = var_10
            ecx_3 = var_8_1
        
        int32_t edx_7 = *ecx_3
        int32_t ebx_4 = ebx_3 * edi_2
        *(ecx_3 + 4) = ebx_4
        int32_t eax_21 = ebx_4 * 2
        
        if (edx_7 s<= eax_21)
            int32_t eax_22 = edx_7 * 2
            
            if (ebx_4 s> eax_22)
                *(ecx_3 + 4) = eax_22
        else
            *ecx_3 = eax_21
        
        ecx_3 += 0x58
        i = i_2 + 1
        var_8_1 = ecx_3
        i_2 = i
    while (i s< esi[9])

int32_t i_1 = 0

if (esi[9] s> 0)
    void* edi_4 = esi[0x31] + 8
    
    do
        int32_t eax_23 = *(edi_4 + 0x1c)
        edi_4 += 0x58
        i_1 += 1
        int32_t ecx_11 = esi[0x46] * esi[0x62]
        *(edi_4 - 0x34) = divs.dp.d(sx.q(eax_23 * *(edi_4 - 0x58) * esi[7] - 1 + ecx_11), ecx_11)
        int32_t ecx_13 = esi[0x62] * esi[0x47]
        *(edi_4 - 0x30) =
            divs.dp.d(sx.q(*(edi_4 - 0x38) * *(edi_4 - 0x54) * esi[8] - 1 + ecx_13), ecx_13)
    while (i_1 s< esi[9])

int32_t eax_38 = esi[0xb] - 1

if (eax_38 u> 4)
    esi[0x19] = esi[9]
else
    switch (eax_38)
        case 0
            esi[0x19] = 1
        case 1, 2
            esi[0x19] = 3
        case 3, 4
            esi[0x19] = 4

int32_t eax_40 = 1

if (*(esi + 0x4a) == 0)
    eax_40 = esi[0x19]

esi[0x1a] = eax_40
char eax_41 = sub_7291e0(esi)

if (eax_41 == 0)
    esi[0x1b] = 1
    return eax_41

int32_t eax_42 = esi[0x47]
esi[0x1b] = eax_42
return eax_42
