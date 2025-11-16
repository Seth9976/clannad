// 函数: sub_496d00
// 地址: 0x496d00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t ecx = esi[5]

if (ecx != 0xca)
    void* eax_1 = *esi
    *(eax_1 + 0x14) = 0x14
    *(eax_1 + 0x18) = ecx
    (*eax_1)(esi)

int32_t eax_2 = esi[0xc]
int32_t ecx_1 = esi[0xd]
int32_t eax_5

if (eax_2 << 3 u<= ecx_1)
    int32_t eax_4 = sub_498530(esi[7], 8)
    int32_t ecx_2 = esi[8]
    esi[0x1c] = eax_4
    eax_5 = sub_498530(ecx_2, 8)
    esi[0x50] = 1
else if (eax_2 << 2 u<= ecx_1)
    int32_t eax_7 = sub_498530(esi[7], 4)
    int32_t ecx_3 = esi[8]
    esi[0x1c] = eax_7
    eax_5 = sub_498530(ecx_3, 4)
    esi[0x50] = 2
else if (eax_2 * 2 u> ecx_1)
    eax_5 = esi[8]
    esi[0x1c] = esi[7]
    esi[0x50] = 8
else
    int32_t eax_9 = sub_498530(esi[7], 2)
    int32_t ecx_4 = esi[8]
    esi[0x1c] = eax_9
    eax_5 = sub_498530(ecx_4, 2)
    esi[0x50] = 4

int32_t* ecx_5 = esi[0x37]
esi[0x1d] = eax_5
int32_t* eax_10 = esi[9]
int32_t edi
int32_t var_10_7 = edi

if (eax_10 s> 0)
    ecx_5 = &ecx_5[3]
    arg1 = eax_10
    bool cond:2_1
    
    do
        int32_t eax_11 = esi[0x50]
        
        if (eax_11 s< 8)
            int32_t i = esi[0x4e] * eax_11
            
            while ((ecx_5[-1] * eax_11) << 1 s<= i)
                if ((*ecx_5 * eax_11) << 1 s> esi[0x4f] * esi[0x50])
                    break
                
                eax_11 *= 2
                
                if (eax_11 s>= 8)
                    break
        
        ecx_5[6] = eax_11
        ecx_5 = &ecx_5[0x15]
        cond:2_1 = arg1 != 1
        arg1 -= 1
    while (cond:2_1)

int32_t i_1 = 0

if (esi[9] s> 0)
    void* edi_7 = esi[0x37] + 0x24
    
    do
        int32_t eax_17 = sub_498530(*(edi_7 - 0x1c) * *edi_7 * esi[7], esi[0x4e] << 3)
        int32_t edx_6 = esi[0x4f]
        *(edi_7 + 4) = eax_17
        int32_t eax_21
        eax_21, ecx_5 = sub_498530(*(edi_7 - 0x18) * esi[8] * *edi_7, edx_6 << 3)
        *(edi_7 + 8) = eax_21
        i_1 += 1
        edi_7 += 0x54
    while (i_1 s< esi[9])

int32_t eax_24 = esi[0xb] - 1

if (eax_24 u> 4)
    ecx_5 = esi[9]
    esi[0x1e] = ecx_5
else
    switch (eax_24)
        case 0
            esi[0x1e] = 1
        case 1, 2
            esi[0x1e] = 3
        case 3, 4
            esi[0x1e] = 4

int32_t eax_26 = 1

if (esi[0x15] == 0)
    eax_26 = esi[0x1e]

esi[0x1f] = eax_26
int32_t result = sub_496c80(ecx_5, esi)

if (result == 0)
    esi[0x20] = 1
    return result

esi[0x20] = esi[0x4f]
return result
