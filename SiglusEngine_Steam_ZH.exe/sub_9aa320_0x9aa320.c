// 函数: sub_9aa320
// 地址: 0x9aa320
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = *(arg2 + 0x504)

if (arg3 == 0)
    return 0

int32_t* esi = arg4

if (esi == 0)
    return 0

void* ecx
int32_t result = sub_99cca0(ecx, i_1 << 2)

if (i_1 s<= 0)
    return result

int32_t* ebx_1 = arg3 - esi
int32_t* edx_2 = result - esi
int32_t i

do
    int32_t eax_5 =
        ((*esi & 0x7fff) * arg5 + (*(ebx_1 + esi) & 0x7fff) * (0x10000 - arg5) + 0x8000) s>> 0x10
    *(edx_2 + esi) = eax_5
    
    if ((*(ebx_1 + esi) & 0x8000) != 0 && (*esi & 0x8000) != 0)
        *(edx_2 + esi) = eax_5 | 0x8000
    
    esi = &esi[1]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
