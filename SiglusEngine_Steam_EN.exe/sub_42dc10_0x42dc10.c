// 函数: sub_42dc10
// 地址: 0x42dc10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = *arg2
void* edi_1 = &arg2[1]

while (i != 0x9c40)
    if (i - 0x7531 u<= 0x65)
        switch (i)
            case 0x7531
                *(arg3 + 4) = *edi_1
                edi_1 += 4
            case 0x7594
                *(arg3 + 0x18) = *edi_1
                edi_1 += 4
            case 0x7595
                *(arg3 + 0x1c) = *edi_1
                edi_1 += 4
            case 0x7596
                *(arg3 + 0x20) = *edi_1
                edi_1 += 4
    
    i = *edi_1
    edi_1 += 4

int32_t eax_6 = *edi_1
*(arg3 + 0x2c) = eax_6
int32_t* var_8 = edi_1 + 4

if (eax_6 s<= 0)
    *arg4 = edi_1 + 4
    return 0

uint32_t eax_7 = eax_6 * 0xb8
sub_4d6960(eax_7, arg3 + 0x28, arg3 + 0x24, eax_7, "HAIKEI_VAL")
int32_t ebx = 0
int32_t esi_1 = *(arg3 + 0x28)

if (*(arg3 + 0x2c) s<= 0)
    *arg4 = edi_1 + 4
    return 0

void* edi_3 = edi_1 + 4

while (true)
    sub_42d5d0(esi_1)
    sub_42da90(&var_8, edi_3, esi_1, &var_8)
    ebx += 1
    esi_1 += 0xb8
    
    if (ebx s>= *(arg3 + 0x2c))
        break
    
    edi_3 = var_8

*arg4 = var_8
return 0
