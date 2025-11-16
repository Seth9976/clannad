// 函数: sub_42e190
// 地址: 0x42e190
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*arg2 != 0x2710 || arg2[1] != 0x2710)
    return 

int32_t i = arg2[2]
void* edi_1 = &arg2[3]

while (i != 0x4e20)
    if (i - 0x2774 u<= 3)
        switch (i)
            case 0x2774
                int32_t eax_2 = *edi_1
                edi_1 += 4
                arg1[0xe] = eax_2
            case 0x2775
                int32_t eax_3 = *edi_1
                edi_1 += 4
                arg1[0xf] = eax_3
            case 0x2776
                int32_t eax_4 = *edi_1
                edi_1 += 4
                arg1[0x10] = eax_4
            case 0x2777
                arg1[0x11] = *edi_1
                int32_t eax_6 = *(edi_1 + 4)
                edi_1 += 8
                arg1[0x12] = eax_6
    
    i = *edi_1
    edi_1 += 4

void* eax = *edi_1
void* edi_2 = edi_1 + 4
arg1[0x15] = eax
void* var_c = edi_2

if (eax s<= 0)
    return 

uint32_t eax_7 = eax * 0x178
sub_4d6960(eax_7, &arg1[0x14], &arg1[0x13], eax_7, "HAIKEI_LAYER")
eax = arg1[0x14]
int32_t esi_1 = 0
void* var_8_1 = eax

if (arg1[0x15] s<= 0)
    return 

while (true)
    sub_42d790(eax)
    sub_42dd90(&var_c, edi_2, var_8_1, &var_c)
    esi_1 += 1
    eax = var_8_1 + 0x178
    var_8_1 = eax
    
    if (esi_1 s>= arg1[0x15])
        break
    
    edi_2 = var_c
