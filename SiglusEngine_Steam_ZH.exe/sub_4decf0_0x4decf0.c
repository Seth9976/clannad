// 函数: sub_4decf0
// 地址: 0x4decf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
int32_t var_10 = ebx
int32_t* esi = arg1
int32_t edi
int32_t var_18 = edi
void* edi_1 = esi[0x70]

if (esi[0x65] != 0 || esi[0x66] != 0x3f || esi[0x67] != 0 || esi[0x68] != 0)
    void* eax_3 = *esi
    *(eax_3 + 0x14) = 0x7a
    (*(eax_3 + 4))(esi, 0xffffffff)

int32_t var_8 = 0

if (esi[0x53] s> 0)
    void* var_c_1 = edi_1 + 0x14
    arg1 = &esi[0x54]
    bool cond:1_1
    
    do
        void* eax_6 = *arg1
        int32_t ecx_2 = *(eax_6 + 0x14)
        int32_t ebx_2 = *(eax_6 + 0x18)
        sub_4de370(esi, 1, ecx_2, edi_1 + (ecx_2 << 2) + 0x28)
        sub_4de370(esi, 0, ebx_2, edi_1 + (ebx_2 << 2) + 0x38)
        int32_t* ecx_4 = var_c_1
        *ecx_4 = 0
        var_c_1 = &ecx_4[1]
        cond:1_1 = var_8 + 1 s< esi[0x53]
        var_8 += 1
        arg1 += 4
    while (cond:1_1)

void* ecx_7 = esi[0x5a]

if (ecx_7 s> 0)
    void* eax_10 = edi_1 + 0xc0
    void* edx_2 = &esi[0x5b]
    arg1 = ecx_7
    bool cond:3_1
    
    do
        void* ecx_9 = esi[*edx_2 + 0x54]
        *(eax_10 - 0x78) = *(edi_1 + (*(ecx_9 + 0x14) << 2) + 0x28)
        *(eax_10 - 0x50) = *(edi_1 + (*(ecx_9 + 0x18) << 2) + 0x38)
        
        if (*(ecx_9 + 0x30) == 0)
            *eax_10 = 0
            *(eax_10 - 0x28) = 0
        else
            *(eax_10 - 0x28) = 1
            int32_t ebx_10
            ebx_10.b = *(ecx_9 + 0x24) s> 1
            *eax_10 = ebx_10
        
        edx_2 += 4
        eax_10 += 4
        cond:3_1 = arg1 != 1
        arg1 -= 1
    while (cond:3_1)

int32_t edx_3 = esi[0x46]
*(edi_1 + 0x10) = 0
*(edi_1 + 0xc) = 0
*(edi_1 + 8) = 0
*(edi_1 + 0x24) = edx_3
return 0
