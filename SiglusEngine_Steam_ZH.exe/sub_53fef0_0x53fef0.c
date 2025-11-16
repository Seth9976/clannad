// 函数: sub_53fef0
// 地址: 0x53fef0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = data_bac4a0
int32_t ebx = *(esi + 0x6c)

if (ebx != arg1)
    *(esi + 0x6c) = arg1

int32_t* edi = data_bac4a4
int32_t edx_2

if (*(esi + 0x6c) s>= 0)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x77280773, edi[1] - *edi)
    edx_2 = edx_1 s>> 9

if (*(esi + 0x6c) s< 0 || (edx_2 u>> 0x1f) + edx_2 s<= *(esi + 0x6c))
    *(esi + 0x6c) = 0

int32_t edx_3 = *(esi + 0x6c)

if (edx_3 != ebx)
    *(esi + 0x70) = *(edi[3] + edx_3 * 0x10 + 0xc)

int32_t ebx_1 = *(esi + 0x70)
int32_t result

if (ebx_1 s>= 0)
    int32_t* ecx_7 = (edx_3 << 4) + edi[3]
    result = (ecx_7[1] - *ecx_7) s>> 3

if (ebx_1 s< 0 || result s<= ebx_1)
    result = *(edi[3] + edx_3 * 0x10 + 0xc)
    *(esi + 0x70) = result

return result
