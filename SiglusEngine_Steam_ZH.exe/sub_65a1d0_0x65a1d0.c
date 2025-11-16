// 函数: sub_65a1d0
// 地址: 0x65a1d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = data_bac498
*(arg1 + 0xac) = *(arg1 + 0xa8)
*(arg1 + 0xb4) = 0
sub_5979b0(arg1 + 0xa8, *(arg1 + 0xb4) + 0xc)
int32_t eax_2 = *(arg1 + 0xa8)

if (eax_2 == *(arg1 + 0xac))
    eax_2 = 0

int64_t* ecx_2 = *(arg1 + 0xb4) + eax_2
*ecx_2 = *(esi + 0x22)
void* esi_1 = data_bac498
ecx_2[1].d = *(esi + 0x2a)
*(arg1 + 0xb4) += 0xc
sub_5979b0(arg1 + 0xa8, *(arg1 + 0xb4) + 0x20)
int32_t ecx_4 = *(arg1 + 0xa8)

if (ecx_4 == *(arg1 + 0xac))
    ecx_4 = 0

sub_748840(*(arg1 + 0xb4) + ecx_4, esi_1 + 0x30, 0x20)
*(arg1 + 0xb4) += 0x20
int32_t* result
result.b = 1
return result
