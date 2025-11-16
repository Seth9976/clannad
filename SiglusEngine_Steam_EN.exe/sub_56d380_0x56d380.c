// 函数: sub_56d380
// 地址: 0x56d380
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax = data_1318c38
int32_t i_6
int32_t i_3
int32_t esi_1
void* edi

if (eax s< 0 || eax s>= data_7031bc)
label_56d45e:
    edi = &data_20db9e0
    data_20db9d4 = 0
    sub_4d1ba0(eax, 0x7d00, &data_20db9e0, 0xa5)
    void* eax_6 = &data_20db9e8
    int32_t i_4 = 0x7d0
    int32_t i
    
    do
        *eax_6 = 2
        eax_6 += 0x10
        i = i_4
        i_4 -= 1
    while (i != 1)
    i_3 = data_20db9d4
    esi_1 = data_1318c3c
    i_6 = i_3
else
    esi_1 = data_1318c3c
    
    if (esi_1 u> 1)
        goto label_56d45e
    
    eax = (esi_1 + (eax << 1)) * 0x7a0 + &data_98bf04
    void* edx_1 = *(eax + 0x27c)
    
    if (edx_1 == 0)
        goto label_56d45e
    
    i_3 = *(eax + 0x274)
    edi = &data_20db9e0
    data_20db9d4 = i_3
    void* ecx = &data_20db9e0
    
    if (esi_1 != 0)
        ecx = &data_20db9f0
    
    i_6 = i_3
    
    if (i_3 s> 0)
        int32_t edi_1 = data_1392710
        void* ecx_1 = ecx + 8
        int32_t* edx_2 = edx_1 + 0x190
        int32_t i_7 = i_3
        int32_t i_1
        
        do
            if (*edx_2 == 0)
                int32_t eax_3 = *ecx_1
                
                if (eax_3 != 0)
                    if (eax_3 == 1)
                        goto label_56d435
                    
                    i_3 = i_7
                else
                    *(ecx_1 + 4) = edi_1
                    *ecx_1 = 1
                label_56d435:
                    i_3 = i_7
                    
                    if (edi_1 - *(ecx_1 + 4) u>= 0x7d0)
                        *ecx_1 = 2
            else
                *ecx_1 = 0
            
            ecx_1 += 0x20
            edx_2 = &edx_2[0x1f6]
            i_1 = i_3
            i_3 -= 1
            i_7 = i_3
        while (i_1 != 1)
        i_3 = i_6
        edi = &data_20db9e0

if (esi_1 != 0)
    edi = &data_20db9f0

WPARAM esi_2 = 0
int32_t ecx_2 = 0

if (i_3 s> 0)
    void* eax_7 = &data_20e36e8
    void* edx_3 = edi + 8
    
    do
        int32_t edi_2
        
        if (data_1318c2c == 0)
            edi_2 = *edx_3
        
        if (data_1318c2c != 0 || edi_2 == 0 || edi_2 == 1)
            esi_2 += 1
            *(eax_7 - 8) = data_1318c38
            *(eax_7 - 4) = data_1318c3c
            *eax_7 = ecx_2
            eax_7 += 0x18
        
        ecx_2 += 1
        edx_3 += 0x20
    while (ecx_2 s< i_6)

data_20ef260 = esi_2
void* result = esi_2 * 0x18 + &data_20e36e0

if (esi_2 s< 0x7d0)
    int32_t i_5 = 0x7d0 - esi_2
    int32_t i_2
    
    do
        *result = 0xffffffff
        result += 0x18
        __builtin_memset(result - 0x14, 0xff, 0x14)
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

int32_t edx_4 = data_20ef264

if (edx_4 == esi_2)
    return result

sub_56c3a0(result, edx_4, data_1af0ac4, esi_2)
HWND ecx_4 = data_1af0ac4
data_20ef264 = data_20ef260
data_1316f90 = 0
data_1316f94 = 0xffffffff
return sub_4c15d0(ecx_4)
