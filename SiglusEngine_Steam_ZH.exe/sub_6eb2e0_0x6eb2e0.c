// 函数: sub_6eb2e0
// 地址: 0x6eb2e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
char ecx

if (arg4 == 0 || (*(arg3 + 0x30) & 1) != 0)
    ecx = 0
else
    ecx = 1

int32_t result_1 = 0x10 s>> ecx
int32_t eax_2 = (arg2 * 3 + arg4) * 2
int32_t edx = *(arg3 + (eax_2 << 3) + 0x134)
int32_t ecx_1 = *(arg3 + (eax_2 << 3) + 0x138)
char* esi_3 = edx * arg5 + ecx_1
int32_t result = edx * arg6 + ecx_1
char* edi_3 = *(arg3 + (eax_2 << 3) + 0x12c) - 1 + esi_3
arg5 = result

if (esi_3 != result)
    result = result_1
    char* ebx_2 = esi_3 - result
    
    do
        _memset(ebx_2, *esi_3, result)
        _memset(&edi_3[1], *edi_3, result_1)
        esi_3 = &esi_3[edx]
        ebx_2 = &ebx_2[edx]
        edi_3 = &edi_3[edx]
        result = result_1
    while (esi_3 != arg5)

return result
