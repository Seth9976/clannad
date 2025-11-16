// 函数: sub_4df800
// 地址: 0x4df800
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t ecx = esi[0x65]
int32_t ebx = esi[0x66]
int32_t eax
eax.b = ecx == 0
int32_t edi
int32_t var_20 = edi
void* edi_1 = esi[0x70]
arg1 = nullptr
bool cond:1

if (eax == 0)
    if (ecx s> ebx || ebx s>= 0x40)
        arg1 = 1
    
    cond:1 = esi[0x53] == 1
else
    cond:1 = ebx == 0

if (not(cond:1))
    arg1 = 1

int32_t edx = esi[0x67]

if (edx != 0 && esi[0x68] != edx - 1)
    arg1 = 1

if (esi[0x68] s> 0xd || arg1 != 0)
    void* eax_3 = *esi
    *(eax_3 + 0x14) = 0x10
    *(eax_3 + 0x18) = ecx
    int32_t ecx_1 = esi[0x68]
    *(eax_3 + 0x1c) = ebx
    *(eax_3 + 0x20) = edx
    *(eax_3 + 0x24) = ecx_1
    (*eax_3)(esi)

arg1 = nullptr

if (esi[0x53] s> 0)
    void* var_c_1 = &esi[0x54]
    bool cond:4_1
    
    do
        int32_t ecx_3 = *(*var_c_1 + 4)
        int32_t* ebx_3 = (ecx_3 << 8) + esi[0x29]
        int32_t var_10_1 = ecx_3
        
        if (eax == 0 && *ebx_3 s< 0)
            void* eax_7 = *esi
            *(eax_7 + 0x14) = 0x73
            *(eax_7 + 0x18) = ecx_3
            *(eax_7 + 0x1c) = 0
            (*(eax_7 + 4))(esi, 0xffffffff)
            ecx_3 = var_10_1
        
        for (int32_t i = esi[0x65]; i s<= esi[0x66]; i += 1)
            int32_t eax_8 = ebx_3[i]
            int32_t edx_3
            edx_3.b = eax_8 s< 0
            
            if (esi[0x67] != (eax_8 & (edx_3 - 1)))
                void* eax_10 = *esi
                *(eax_10 + 0x14) = 0x73
                *(eax_10 + 0x18) = ecx_3
                *(eax_10 + 0x1c) = i
                (*(eax_10 + 4))(esi, 0xffffffff)
                ecx_3 = var_10_1
            
            ebx_3[i] = esi[0x68]
        
        cond:4_1 = arg1 + 1 s< esi[0x53]
        arg1 += 1
        var_c_1 += 4
    while (cond:4_1)

if (esi[0x67] != 0)
    if (eax == 0)
        *(edi_1 + 4) = sub_4df460
    else
        *(edi_1 + 4) = sub_4df370
else if (eax == 0)
    *(edi_1 + 4) = sub_4df140
else
    *(edi_1 + 4) = sub_4def10

arg1 = nullptr

if (esi[0x53] s> 0)
    void* var_10_2 = edi_1 + 0x18
    void* var_c_2 = &esi[0x54]
    bool cond:8_1
    
    do
        void* eax_17 = *var_c_2
        
        if (eax == 0)
            int32_t eax_19 = *(eax_17 + 0x18)
            sub_4de370(esi, 0, eax_19, edi_1 + (eax_19 << 2) + 0x2c)
            *(edi_1 + 0x3c) = *(edi_1 + (eax_19 << 2) + 0x2c)
        else if (esi[0x67] == 0)
            int32_t eax_18 = *(eax_17 + 0x14)
            sub_4de370(esi, 1, eax_18, edi_1 + (eax_18 << 2) + 0x2c)
        
        *var_10_2 = 0
        var_10_2 += 4
        cond:8_1 = arg1 + 1 s< esi[0x53]
        arg1 += 1
        var_c_2 += 4
    while (cond:8_1)

int32_t result = esi[0x46]
*(edi_1 + 0x10) = 0
*(edi_1 + 0xc) = 0
*(edi_1 + 8) = 0
*(edi_1 + 0x14) = 0
*(edi_1 + 0x28) = result
return result
