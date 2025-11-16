// 函数: sub_60c9f0
// 地址: 0x60c9f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = data_bac4a4
void* edi = data_bac4e4
*(edi + 0x18) = 0
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x77280773, esi[1] - *esi)
*(edi + 0x20) = 0
int32_t edx_1 = edx s>> 9
*(edi + 0x1c) = (edx_1 u>> 0x1f) + edx_1
int32_t* eax_4 = esi[3]
*(edi + 0x24) = (eax_4[1] - *eax_4) s>> 3
int32_t edx_2 = *(esi[3] + 0xc)
*(edi + 0x28) = edx_2
int32_t ecx_5 = *esi[3]
*(edi + 0x2c) = *(ecx_5 + (edx_2 << 3))
void* ecx_6 = data_bac510
*(edi + 0x30) = *(ecx_5 + (edx_2 << 3) + 4)
*(edi + 0x50) = *(ecx_6 + 0xbb64)
*(edi + 0x54) = *(ecx_6 + 0xbb68)
*(edi + 0x58) = *(ecx_6 + 0xbb6c)
int32_t eax_11
eax_11.b = *(ecx_6 + 0xbb70)
*(edi + 0x5c) = eax_11.b
*(edi + 0x60) = *(ecx_6 + 0xbb74)
int32_t result = *(ecx_6 + 0xbb78)
*(edi + 0x64) = result
return result
