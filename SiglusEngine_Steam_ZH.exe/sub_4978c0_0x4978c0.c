// 函数: sub_4978c0
// 地址: 0x4978c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t ebx = arg3
int32_t edi
int32_t var_14 = edi
int32_t* edi_1 = arg1
void* eax = edi_1[1]

if (ebx u> 0x3b9ac9f0)
    void* eax_1 = *edi_1
    *(eax_1 + 0x14) = 0x36
    *(eax_1 + 0x18) = 1
    (*eax_1)(edi_1)

int32_t eax_3 = ebx & 7

if (eax_3 u> 0)
    ebx += 8 - eax_3
    arg3 = ebx

if (arg2 s< 0 || arg2 s>= 2)
    void* eax_4 = *edi_1
    *(eax_4 + 0x14) = 0xe
    *(eax_4 + 0x18) = arg2
    (*eax_4)(edi_1)

void** i = *(eax + (arg2 << 2) + 0x34)
arg1 = nullptr

for (; i != 0; i = *i)
    if (i[2] u>= ebx)
        goto label_4979d7
    
    arg1 = i

uint32_t esi_1

if (arg1 != 0)
    esi_1 = *((arg2 << 2) + &data_ac7e20)
else
    esi_1 = *((arg2 << 2) + &data_ac7e18)

if (esi_1 u> 0x3b9aca00 - (ebx + 0x10))
    esi_1 = 0x3b9aca00 - (ebx + 0x10)

int32_t var_18_3 = esi_1 + ebx + 0x10

for (i = sub_4e2b30(edi_1); i == 0; i = sub_4e2b30(edi_1))
    esi_1 u>>= 1
    
    if (esi_1 u< 0x32)
        void* eax_8 = *edi_1
        *(eax_8 + 0x14) = 0x36
        *(eax_8 + 0x18) = 2
        (*eax_8)(edi_1)
    
    int32_t var_18_5 = esi_1 + ebx + 0x10

int32_t edx_1 = esi_1 + ebx + 0x10
ebx = arg3
*(eax + 0x4c) += edx_1
*i = nullptr
i[1] = 0
i[2] = esi_1 + arg3

if (arg1 != 0)
    *arg1 = i
else
    *(eax + (arg2 << 2) + 0x34) = i

label_4979d7:
int32_t ecx_4 = i[1]
i[1] = ecx_4 + ebx
i[2] -= ebx
return ecx_4 + i + 0x10
