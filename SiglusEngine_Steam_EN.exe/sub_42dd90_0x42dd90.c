// 函数: sub_42dd90
// 地址: 0x42dd90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = *arg2
void* edi_1 = &arg2[1]

while (i != 0x7530)
    if (i s> 0x5208)
        if (i s> 0x52d0)
            if (i - 0x52d1 u<= 0x64)
                switch (i)
                    case 0x52d1
                        *(arg3 + 0x104) = *edi_1
                        *(arg3 + 0x108) = *(edi_1 + 4)
                        *(arg3 + 0x10c) = *(edi_1 + 8)
                        *(arg3 + 0x110) = *(edi_1 + 0xc)
                        edi_1 += 0x10
                    case 0x52d2
                        *(arg3 + 0x114) = *edi_1
                        int32_t eax_33 = *(edi_1 + 4)
                        edi_1 += 8
                        *(arg3 + 0x118) = eax_33
                    case 0x52d3
                        int32_t eax_34 = *edi_1
                        edi_1 += 4
                        *(arg3 + 0x11c) = eax_34
                    case 0x5334
                        *(arg3 + 0x124) = *edi_1
                        *(arg3 + 0x128) = *(edi_1 + 4)
                        *(arg3 + 0x12c) = *(edi_1 + 8)
                        *(arg3 + 0x130) = *(edi_1 + 0xc)
                        edi_1 += 0x10
                    case 0x5335
                        int32_t eax_35 = *edi_1
                        edi_1 += 4
                        *(arg3 + 0x120) = eax_35
        else if (i == 0x52d0)
            int32_t eax_25 = *edi_1
            edi_1 += 4
            *(arg3 + 0x100) = eax_25
        else if (i - 0x5209 u<= 0x64)
            switch (i)
                case 0x5209
                    *(arg3 + 0xc4) = *edi_1
                    *(arg3 + 0xcc) = *(edi_1 + 4)
                    *(arg3 + 0xc8) = *(edi_1 + 8)
                    *(arg3 + 0xd0) = *(edi_1 + 0xc)
                    edi_1 += 0x10
                case 0x520a
                    *(arg3 + 0xd4) = *edi_1
                    *(arg3 + 0xd8) = *(edi_1 + 4)
                    *(arg3 + 0xdc) = *(edi_1 + 8)
                    *(arg3 + 0xe0) = *(edi_1 + 0xc)
                    int32_t eax_18 = *(edi_1 + 0x10)
                    edi_1 += 0x14
                    *(arg3 + 0xe4) = eax_18
                case 0x520b
                    int32_t eax_19 = *edi_1
                    edi_1 += 4
                    *(arg3 + 0xe8) = eax_19
                case 0x526c
                    int32_t eax_20 = *edi_1
                    edi_1 += 4
                    *(arg3 + 0xec) = eax_20
                case 0x526d
                    *(arg3 + 0xf0) = *edi_1
                    *(arg3 + 0xf8) = *(edi_1 + 4)
                    *(arg3 + 0xf4) = *(edi_1 + 8)
                    *(arg3 + 0xfc) = *(edi_1 + 0xc)
                    edi_1 += 0x10
    else if (i == 0x5208)
        int32_t eax_7 = *edi_1
        edi_1 += 4
        *(arg3 + 0xc0) = eax_7
    else if (i == 0x4e21)
        int32_t eax_6 = *edi_1
        edi_1 += 4
        *(arg3 + 4) = eax_6
    else if (i == 0x4e84)
        int32_t eax_5 = *edi_1
        sub_4d1c30(eax_5, edi_1 + 4, arg3 + 0x90, eax_5)
        edi_1 = edi_1 + 4 + eax_5
    else if (i == 0x4e85)
        *(arg3 + 0xb0) = *edi_1
        int32_t eax_4 = *(edi_1 + 4)
        edi_1 += 8
        *(arg3 + 0xb4) = eax_4
    
    i = *edi_1
    edi_1 += 4

int32_t eax_40 = *edi_1
void* edi_3 = edi_1 + 4
*(arg3 + 0x174) = eax_40
void* var_8 = edi_3

if (eax_40 s<= 0)
    *arg4 = edi_3
    return 0

int32_t eax_42 = eax_40 * 0x30
sub_4d6960(eax_42, arg3 + 0x170, arg3 + 0x16c, eax_42, "HAIKEI_DATA")
int32_t* esi = *(arg3 + 0x170)
int32_t var_c = 0

if (*(arg3 + 0x174) s<= 0)
    *arg4 = edi_3
    return 0

while (true)
    *esi = 0
    esi[1] = 0
    esi[6] = 0
    esi[7] = 0
    esi[8] = 0x64
    esi[9] = 0
    esi[0xa] = 0
    esi[0xb] = 0
    sub_42dc10(&var_8, edi_3, esi, &var_8)
    esi = &esi[0xc]
    int32_t eax_45 = var_c + 1
    var_c = eax_45
    
    if (eax_45 s>= *(arg3 + 0x174))
        break
    
    edi_3 = var_8

*arg4 = var_8
return 0
