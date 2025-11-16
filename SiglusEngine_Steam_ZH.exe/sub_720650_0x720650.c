// 函数: sub_720650
// 地址: 0x720650
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *(arg1 + 0x98)
int32_t ebx = *(arg1 + 0x90)
int32_t eax_1

if (arg2 s< ecx)
    eax_1 = ebx - mods.dp.d(sx.q(ecx - arg2), ebx)
else
    eax_1 = arg2 - ecx

int32_t ecx_2 = *(arg1 + 0x9c)
int32_t edi = *(arg1 + 0x94)
*(arg1 + 0x178) = mods.dp.d(sx.q(eax_1), ebx)
int32_t eax_7

if (arg3 s< ecx_2)
    eax_7 = edi - mods.dp.d(sx.q(ecx_2 - arg3), edi)
else
    eax_7 = arg3 - ecx_2

int32_t ecx_4 = *(arg1 + 0x8c)
*(arg1 + 0x17c) = mods.dp.d(sx.q(eax_7), edi)
int32_t eax_12 = *(arg1 + 0x17c)
int32_t edx_9 = *(arg1 + 0x178)
*(arg1 + 0x174) = eax_12
*(arg1 + 0x170) = edx_9
int32_t result = eax_12 * edi + ecx_4
*(arg1 + 0x180) = result
*(arg1 + 0x184) = edi * ebx + ecx_4

if (arg4 != 0)
    result += edx_9
    *(arg1 + 0x180) = result

return result
