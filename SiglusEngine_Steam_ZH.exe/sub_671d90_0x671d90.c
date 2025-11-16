// 函数: sub_671d90
// 地址: 0x671d90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = data_bac4a0

if (*(ecx + 0xc8) != 0)
    int32_t* edi_1 = data_bac42c
    int32_t* edx_1 = data_bac448
    
    if (*edi_1 != *edx_1 || edi_1[1] != edx_1[1])
        *(ecx + 0x108) = *data_bac47c

int32_t eax_5 = sub_600e10(data_bac468 + 0xd8)
void* edx_2 = data_bac4a0
int32_t* ecx_3 = data_bac47c

if (eax_5 == 1)
    *(edx_2 + 0x108) = *ecx_3

if (*(edx_2 + 0x105) == 0)
    *(edx_2 + 0x105) = 1
    *(edx_2 + 0x108) = *ecx_3

char* eax_8

if (data_bac498[2] == 0)
    eax_8 = sub_620b10()
    
    if (eax_8.b != 0)
        eax_8.b = 1
        return eax_8
    
    if (*(edx_2 + 0xcc) == eax_8.b)
        eax_8.b = data_bac484[0x138] == 0
    
    void* ecx_4 = data_bac4c8
    void* ecx_5
    
    if (*(ecx_4 + 0x51c) == 2)
        if (eax_8.b != 0)
            eax_8 = data_bac458
            
            if (eax_8[0x39b] != 0)
                goto label_671ea5
        
        ecx_5 = ecx_4 + 0x510
    label_671e8c:
        eax_8 = sub_6b1fd0(ecx_5)
        
        if (eax_8.b == 0)
            goto label_671ea5
        
    label_671fd0:
        *(edx_2 + 0x10c) = 1
        eax_8.b = 1
        return eax_8
    
    if (*(ecx_4 + 0x1c8c) == 2)
        if (eax_8.b != 0)
            eax_8 = data_bac458
            
            if (eax_8[0x3e6] != 0)
                goto label_671ea5
        
        ecx_5 = ecx_4 + 0x1c80
        goto label_671e8c
    
label_671ea5:
    eax_8 = sub_635890(eax_8, 2, 0x100, 2)
    
    if (eax_8.b != 0)
        eax_8.b = 1
        return eax_8
    
    void* edx_3 = data_bac4e4
    
    if (*(edx_3 + 0x198) != eax_8.b && sub_6b20a0(data_bac4c8 + 0xf8).b != 0)
        eax_8.b = 1
        return eax_8
    
    int32_t eax_10
    
    if (*(edx_3 + 0x15c) == 2 && *(arg1 + 0x1f8) s>= 0 && *(arg1 + 0x1fc) != 0)
        eax_10 = sub_600e10(data_bac468 + 0xd8)
    
    void* ecx_9
    int32_t* edi_2
    
    if (*(edx_3 + 0x15c) != 2 || *(arg1 + 0x1f8) s< 0 || *(arg1 + 0x1fc) == 0 || eax_10 == 1)
        ecx_9 = data_bac4a0
        edi_2 = data_bac47c
    else
        ecx_9 = data_bac4a0
        edi_2 = data_bac47c
        
        if (*(ecx_9 + 0x114) == 0)
            *(ecx_9 + 0x114) = 1
            *(ecx_9 + 0x118) = *edi_2
        
        if (*edi_2 - *(ecx_9 + 0x118) s> 0x1f4)
            int32_t eax_13
            eax_13.b = 1
            return eax_13
    
    if (sub_620b70().b != 0)
        if (*(arg1 + 0x1f8) s< 0 || *(arg1 + 0x1fc) == 0 || *(arg1 + 0x1fd) != 0)
            int32_t ebx_1 = *(data_bac458 + 0x360)
            int32_t eax_16 = sub_620ba0()
            int32_t edx_5
            
            if (ebx_1 s<= 0)
                edx_5 = eax_16 * (*(*(arg1 + 0x228) + 0x188) - *(arg1 + 0x1dc))
            else
                edx_5 = eax_16 * ebx_1
            
            int32_t edx_6 = edx_5 + sub_620bd0()
            
            if (*edi_2 - *(ecx_9 + 0x108) s> edx_6)
                *(ecx_9 + 0x10c) = 1
                eax_8.b = 1
                return eax_8
        else if (sub_600e10(data_bac468 + 0xd8) != 1)
            edx_2 = data_bac4a0
            int32_t* ecx_12 = data_bac47c
            
            if (*(edx_2 + 0x114) == 0)
                *(edx_2 + 0x114) = 1
                *(edx_2 + 0x118) = *ecx_12
            
            if (*ecx_12 - *(edx_2 + 0x118) s> *(data_bac4e4 + 0x148))
                goto label_671fd0

eax_8.b = 0
return eax_8
