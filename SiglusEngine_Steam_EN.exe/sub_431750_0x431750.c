// 函数: sub_431750
// 地址: 0x431750
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1 + 0x138
void* var_8 = arg1
int32_t edi
int32_t var_1c = edi

if (*(arg1 + 0x138) != 5)
    return 

int32_t eax = esi[1]

if (eax != 0)
    if (eax == 1)
        esi[1] = 2
        *(arg1 + 0x38) += 1
        return 
    
    int32_t eax_1 = data_1392710
    esi[7] = 0
    esi[1] = 0
    esi[6] = eax_1
    return 

int32_t i = data_1392710 - esi[6] + esi[7]

if (i s< esi[8])
    return 

do
    int32_t edi_4 = *(arg1 + 4)
    int32_t eax_2 = esi[0x11]
    
    if (edi_4 u> 0x1ff)
        *esi = 3
    else
        int32_t edx_1 = *(edi_4 * 0x6c + 0x1382fc4)
        
        if (edx_1 == 0 || eax_2 s< 0 || eax_2 s>= *(edi_4 * 0x6c + 0x1382fc8))
            *esi = 3
        else
            int32_t ecx_2 = *(edx_1 + eax_2 * 0x10 + 0xc)
            int32_t eax_6
            int32_t eax_7
            int32_t ecx_3
            bool cond:2_1
            
            if (ecx_2 s<= 0)
                *esi = 3
            else
                switch (*esi - 4)
                    case 0
                        eax_6 = esi[0x12]
                        ecx_3 = ecx_2 - 1
                        
                        if (eax_6 s< ecx_3)
                        label_431825:
                            eax_7 = eax_6 + 1
                            cond:2_1 = eax_6 + 1 s>= 0
                        label_431826:
                            esi[0x12] = eax_7
                            
                            if (not(cond:2_1))
                                goto label_43182b
                            
                            sub_428c70(edi_4, 0, esi, var_8 + 0x3c)
                        else if (esi[0x18] == 0 || esi[0x19] == 0xffffffff)
                            if (esi[0x14] == 0xffffffff)
                                *esi = 3
                                goto label_431866
                            
                            sub_428c70(edi_4, 0, esi, var_8 + 0x3c)
                        else
                            sub_465fd0(edi_4, 0, esi, var_8 + 0x3c)
                            sub_428c70(edi_4, 0, esi, var_8 + 0x3c)
                    case 1, 2, 3
                        int32_t edx_2 = esi[0x12]
                        
                        if (edx_2 s>= ecx_2 - 1)
                        label_43182b:
                            esi[0x12] = 0
                            sub_428c70(edi_4, 0, esi, var_8 + 0x3c)
                        else
                            esi[0x12] = edx_2 + 1
                            
                            if (edx_2 + 1 s< 0)
                                esi[0x12] = 0
                            
                            sub_428c70(edi_4, 0, esi, var_8 + 0x3c)
                    case 4
                        eax_6 = esi[0x12]
                        ecx_3 = ecx_2 - 1
                        
                        if (eax_6 s< ecx_3)
                            goto label_431825
                        
                        esi[4] = 1
                    label_431866:
                        esi[0x12] = ecx_3
                        sub_428c70(edi_4, 0, esi, var_8 + 0x3c)
                    case 5
                        int32_t edx_3 = esi[0x12]
                        
                        if (edx_3 s>= ecx_2 - 1)
                            sub_428c30(edi_4, 0, esi, var_8 + 0x3c)
                        else
                            esi[0x12] = edx_3 + 1
                            
                            if (edx_3 + 1 s>= 0)
                                sub_428c70(edi_4, 0, esi, var_8 + 0x3c)
                            else
                                sub_428c30(edi_4, 0, esi, var_8 + 0x3c)
                    case 6
                        int32_t eax_17 = sub_445700()
                        
                        if (eax_17 == 0)
                            sub_428c30(edi_4, 0, esi, var_8 + 0x3c)
                        else
                            if (eax_17 == 1)
                                int32_t ecx_5 = esi[0x12]
                                
                                if (ecx_5 s>= ecx_2 - 1)
                                    goto label_43182b
                                
                                eax_7 = ecx_5 + 1
                                cond:2_1 = eax_7 s>= 0
                                goto label_431826
                            
                            if (eax_17 == 2)
                                sub_428c30(edi_4, 0, esi, var_8 + 0x3c)
    
    i -= esi[8]
    arg1 = var_8
while (i s>= esi[8])

eax = data_1392710
esi[7] = i
esi[6] = eax
