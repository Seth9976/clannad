// 函数: sub_6e6ca0
// 地址: 0x6e6ca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_314
void* esi = &var_314

for (int32_t i = 0; i s< 3; )
    int32_t eax_1 = *(arg1 + (i << 2) + 0x104)
    void* edi_1 = esi
    i += 1
    esi += 0x100
    int32_t ecx
    int32_t edi_2
    edi_2, ecx = __memfill_u32(edi_1, eax_1, 0x40)

int32_t edx = *(arg1 + 0xc9f0)
int32_t eax_2 = *(arg1 + 0xc9ec)

if (edx s< 4)
    eax_2 = sub_6ec810(arg1 + 0xc9e4, 4)
    edx = *(arg1 + 0xc9f0)

*(arg1 + 0xc9ec) = eax_2 << 4
int32_t edx_1 = edx - 4
*(arg1 + 0xc9f0) = edx - 4
uint32_t var_10 = eax_2 u>> 0x1c
int32_t eax_4 = *(arg1 + 0xc9ec)

if (edx_1 s< 4)
    eax_4 = sub_6ec810(arg1 + 0xc9e4, 4)
    edx_1 = *(arg1 + 0xc9f0)

*(arg1 + 0xc9ec) = eax_4 << 4
uint32_t var_c = eax_4 u>> 0x1c
*(arg1 + 0xc9f0) = edx_1 - 4
*(arg1 + 0xce38) = 0
int32_t eax_7 = sub_6e6770(&var_314, &var_10, arg1, &var_314)
int32_t edx_3 = *(arg1 + 0xc9ec)
int32_t edi_3 = eax_7
int32_t eax_8 = *(arg1 + 0xc9f0)

if (eax_8 s< 4)
    edx_3 = sub_6ec810(arg1 + 0xc9e4, 4)
    eax_8 = *(arg1 + 0xc9f0)

uint32_t edx_4 = edx_3 u>> 0x1c
*(arg1 + 0xc9ec) = edx_3 << 4
int32_t ebx_1 = eax_8 - 4
*(arg1 + 0xc9f0) = eax_8 - 4
int32_t eax_10 = *(arg1 + 0xc9ec)

if (ebx_1 s< 4)
    eax_10 = sub_6ec810(arg1 + 0xc9e4, 4)
    ebx_1 = *(arg1 + 0xc9f0)

*(arg1 + 0xc9ec) = eax_10 << 4
*(arg1 + 0xc9f0) = ebx_1 - 4
int32_t esi_2 = 1
void* i_1 = 1
uint32_t result = eax_10 u>> 0x1c
void* i_2 = 1

do
    uint32_t ebx_2 = zx.d(*(i_1 + 0xadc06c))
    edx_4 += 0x10
    result += 0x10
    var_10 = edx_4
    
    if (esi_2 s< ebx_2)
        do
            int32_t eax_12 = sub_6e6a50(&var_10, esi_2, arg1, &var_10, &var_314, edi_3)
            esi_2 += 1
            edi_3 = eax_12
        while (esi_2 s< ebx_2)
        
        edx_4 = var_10
        i_1 = i_2
    
    i_1 += 1
    i_2 = i_1
while (i_1 s< 5)

return result
