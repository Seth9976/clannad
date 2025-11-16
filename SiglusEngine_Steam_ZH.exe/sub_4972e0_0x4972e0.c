// 函数: sub_4972e0
// 地址: 0x4972e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[8] s> 0xffdc || arg1[7] s> 0xffdc)
    void* eax = *arg1
    *(eax + 0x14) = 0x29
    *(eax + 0x18) = 0xffdc
    (*eax)(arg1)

int32_t ecx = arg1[0x36]

if (ecx != 8)
    void* eax_1 = *arg1
    *(eax_1 + 0x14) = 0xf
    *(eax_1 + 0x18) = ecx
    (*eax_1)(arg1)

int32_t ecx_1 = arg1[9]

if (ecx_1 s> 0xa)
    void* eax_2 = *arg1
    *(eax_2 + 0x14) = 0x1a
    *(eax_2 + 0x18) = ecx_1
    *(eax_2 + 0x1c) = 0xa
    (*eax_2)(arg1)

int32_t i = 0
bool cond:0 = arg1[9] s<= 0
arg1[0x4e] = 1
arg1[0x4f] = 1

if (not(cond:0))
    void* edi_1 = arg1[0x37] + 0xc
    
    do
        int32_t eax_4 = *(edi_1 - 4)
        int32_t eax_5
        
        if (eax_4 s> 0 && eax_4 s<= 4)
            eax_5 = *edi_1
        
        if (eax_4 s<= 0 || eax_4 s> 4 || eax_5 s<= 0 || eax_5 s> 4)
            void* eax_6 = *arg1
            *(eax_6 + 0x14) = 0x12
            (*eax_6)(arg1)
        
        int32_t eax_7 = arg1[0x4e]
        int32_t ecx_4 = *(edi_1 - 4)
        
        if (eax_7 s<= ecx_4)
            eax_7 = ecx_4
        
        int32_t ecx_5 = *edi_1
        arg1[0x4e] = eax_7
        int32_t eax_8 = arg1[0x4f]
        
        if (eax_8 s<= ecx_5)
            eax_8 = ecx_5
        
        arg1[0x4f] = eax_8
        i += 1
        edi_1 += 0x54
    while (i s< arg1[9])

void* eax_10 = arg1[0x37]
int32_t ebx = 0
bool cond:1 = arg1[9] s<= 0
arg1[0x50] = 8

if (not(cond:1))
    void* edi_2 = eax_10 + 0x1c
    int32_t eax_20
    
    do
        int32_t ecx_8 = *(edi_2 - 0x14) * arg1[7]
        int32_t eax_12 = arg1[0x4e] << 3
        *(edi_2 + 8) = 8
        int32_t eax_13 = sub_498530(ecx_8, eax_12)
        int32_t edx_1 = arg1[0x4f]
        *edi_2 = eax_13
        int32_t eax_16 = sub_498530(*(edi_2 - 0x10) * arg1[8], edx_1 << 3)
        int32_t edx_4 = *(edi_2 - 0x14) * arg1[7]
        int32_t ecx_9 = arg1[0x4e]
        *(edi_2 + 4) = eax_16
        int32_t eax_17 = sub_498530(edx_4, ecx_9)
        int32_t ecx_11 = *(edi_2 - 0x10) * arg1[8]
        *(edi_2 + 0xc) = eax_17
        *(edi_2 + 0x10) = sub_498530(ecx_11, arg1[0x4f])
        eax_20 = arg1[9]
        *(edi_2 + 0x14) = 1
        *(edi_2 + 0x30) = 0
        ebx += 1
        edi_2 += 0x54
    while (ebx s< eax_20)

int32_t eax_22 = sub_498530(arg1[8], arg1[0x4f] << 3)
int32_t ecx_12 = arg1[0x53]
arg1[0x51] = eax_22

if (ecx_12 s>= arg1[9])
    int32_t eax_23 = arg1[0x38]
    
    if (eax_23 == 0)
        *(arg1[0x6e] + 0x10) = 0
        return eax_23

void* eax_24 = arg1[0x6e]
*(eax_24 + 0x10) = 1
return eax_24
