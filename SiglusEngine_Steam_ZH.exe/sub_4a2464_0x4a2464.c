// 函数: sub_4a2464
// 地址: 0x4a2464
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_1 = arg2 << 2
int32_t* eax_1 = *(arg1 + 0x18) + esi_1
void* edx = *eax_1
int32_t i = *(edx + 0x2c)
int32_t var_c = esi_1

if ((i.b & 1) == 0)
    return 0

int32_t edi
int32_t var_20_1 = edi
uint32_t edi_1 = arg2

if (edi_1 u> 0)
    void* eax_2 = &eax_1[-1]
    void* var_8_1 = eax_2
    
    while (i u< *(*eax_2 + 0x2c))
        edi_1 -= 1
        eax_2 = var_8_1 - 4
        var_8_1 = eax_2
        
        if (edi_1 u<= 0)
            break

uint32_t i_7 = (arg2 - edi_1) u>> 1

if (i_7 != 0)
    int32_t edx_2 = edi_1 << 2
    int32_t var_8_2 = edx_2
    uint32_t i_5 = i_7
    uint32_t i_1
    
    do
        int32_t eax_7 = *(arg1 + 0x18)
        int32_t* edx_3 = edx_2 + eax_7
        int32_t ebx = *edx_3
        *edx_3 = *(esi_1 + eax_7 - 4)
        *(esi_1 + *(arg1 + 0x18) - 4) = ebx
        edx_2 = var_8_2 + 4
        esi_1 -= 4
        i_1 = i_5
        i_5 -= 1
        var_8_2 = edx_2
    while (i_1 != 1)
    esi_1 = var_c

uint32_t eax_10 = edi_1
uint32_t var_14_1 = eax_10

if (edi_1 u<= 0)
label_4a2534:
    uint32_t i_8 = (edi_1 - eax_10) u>> 1
    
    if (i_8 != 0)
        int32_t esi_3 = eax_10 << 2
        int32_t var_10_2 = esi_3
        uint32_t eax_12 = edi_1 << 2
        uint32_t i_6 = i_8
        uint32_t i_2
        
        do
            int32_t edx_7 = *(arg1 + 0x18)
            int32_t* esi_4 = esi_3 + edx_7
            int32_t ebx_7 = *esi_4
            *esi_4 = *(eax_12 + edx_7 - 4)
            *(eax_12 + *(arg1 + 0x18) - 4) = ebx_7
            esi_3 = var_10_2 + 4
            eax_12 -= 4
            i_2 = i_6
            i_6 -= 1
            var_10_2 = esi_3
        while (i_2 != 1)
        eax_10 = var_14_1
        esi_1 = var_c
else
    int32_t i_3 = *(edx + 0x2c)
    int32_t* ebx_2 = *(arg1 + 0x18) + (edi_1 << 2) - 4
    
    if (i_3 u<= *(*ebx_2 + 0x2c))
        int32_t* var_8_3 = ebx_2
        
        while (i_3 == *(*var_8_3 + 0x2c))
            var_8_3 -= 4
            eax_10 -= 1
            var_14_1 = eax_10
            
            if (eax_10 u<= 0)
                break
        
        goto label_4a2534
    
    eax_10 = edi_1 - 1

int32_t result

if (eax_10 != edi_1)
    uint32_t edx_12 = (arg2 - eax_10) u>> 1
    
    if (edx_12 != 0)
        int32_t edi_3 = eax_10 << 2
        arg2 = edx_12
        uint32_t i_4
        
        do
            int32_t eax_13 = *(arg1 + 0x18)
            int32_t* edx_13 = edi_3 + eax_13
            int32_t ebx_8 = *edx_13
            *edx_13 = *(esi_1 + eax_13 - 4)
            *(esi_1 + *(arg1 + 0x18) - 4) = ebx_8
            edi_3 += 4
            esi_1 -= 4
            i_4 = arg2
            arg2 -= 1
        while (i_4 != 1)
        esi_1 = var_c
    
    int32_t* eax_17 = *(arg1 + 0x18) + esi_1
    int32_t edx_14 = eax_17[-1]
    eax_17[-1] = *eax_17
    *(esi_1 + *(arg1 + 0x18)) = edx_14
    result = 1
else
    result = 0

return result
