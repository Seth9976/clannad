// 函数: sub_6dc410
// 地址: 0x6dc410
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* eax_1 = arg2
void* edx_1 = *(arg1 + 4) + eax_1
char* edi = arg3
void* result_2 = nullptr
void* ebx = &eax_1[1]
uint32_t esi = zx.d(*edi)
void* edi_1 = &edi[1]
char ecx_1 = *eax_1 + esi.b
arg1 = esi
*eax_1 = ecx_1
void* result = edx_1 - ebx

if (ebx u> edx_1)
    result = nullptr

void* result_1 = result

if (result != 0)
    do
        uint32_t eax_3 = zx.d(*edi_1)
        uint32_t ecx_2 = zx.d(ecx_1)
        uint32_t edi_4 = eax_3 - esi
        uint32_t esi_2 = ecx_2 - arg1
        int32_t eax_5
        int32_t edx_2
        edx_2:eax_5 = sx.q(edi_4)
        int32_t eax_9
        int32_t edx_3
        edx_3:eax_9 = sx.q(esi_2)
        int32_t eax_11 = (eax_9 ^ edx_3) - edx_3
        esi = eax_3
        int32_t eax_13
        int32_t edx_4
        edx_4:eax_13 = sx.q(esi_2 + edi_4)
        int32_t eax_14 = (eax_5 ^ edx_2) - edx_2
        
        if (eax_11 s< eax_14)
            eax_14 = eax_11
            ecx_2 = esi
        
        edi_1 += 1
        
        if ((eax_13 ^ edx_4) - edx_4 s< eax_14)
            ecx_2 = arg1
        
        ecx_1 = ecx_2.b + *ebx
        arg1 = esi
        result = result_2 + 1
        *ebx = ecx_1
        ebx += 1
        result_2 = result
    while (result u< result_1)

return result
