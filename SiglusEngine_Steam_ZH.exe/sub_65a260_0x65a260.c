// 函数: sub_65a260
// 地址: 0x65a260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0xa8)

if (eax == *(arg1 + 0xac))
    eax.b = 0
    return eax

void* edx = data_bac498
int32_t ecx = eax
*(arg1 + 0xb4) = 0

if (ecx == *(arg1 + 0xac))
    ecx = 0

int64_t* eax_1 = *(arg1 + 0xb4)
*(edx + 0x22) = *(eax_1 + ecx)
*(edx + 0x2a) = *(eax_1 + ecx + 8)
*(arg1 + 0xb4) += 0xc
int32_t ecx_1 = *(arg1 + 0xa8)

if (ecx_1 == *(arg1 + 0xac))
    ecx_1 = 0

sub_748840(edx + 0x30, *(arg1 + 0xb4) + ecx_1, 0x20)
*(arg1 + 0xb4) += 0x20
int32_t* eax_5
eax_5.b = 1
return eax_5
