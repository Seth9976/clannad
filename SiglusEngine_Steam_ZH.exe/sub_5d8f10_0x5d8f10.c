// 函数: sub_5d8f10
// 地址: 0x5d8f10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
void* ecx = data_bac510
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
void* eax = *(arg1 + 0xa0) * 0xfc
void* edi = arg1 + 0x228
int32_t esi_1 = *(arg1 + 0x1e0) + 1
*(arg1 + 0x1e0) = esi_1
void* eax_1 = eax + ecx + 0xa2ebc4

if (esi_1 s>= (*(edi + 4) - *edi) s/ 0x1c0)
    int32_t var_20_1 = esi_1 + 1
    sub_5da590(edi)
    void var_9c
    __builtin_memcpy(&var_9c, arg1 + 0xa4, 0x80)
    edi = arg1 + 0x228
    sub_5dbdc0(*(arg1 + 0x1e0) * 0x1c0 + *edi, arg1)
    sub_5dbe60(*(arg1 + 0x1e0) * 0x1c0 + *edi, *(eax_1 + 0x38), *(ecx + 0xa2ebc0), 
        *(ecx + 0xa2ebb8), *(ecx + 0xa2ebbc), *(eax_1 + 0x50), *(eax_1 + 0x54), *(eax_1 + 0xa8), 
        *(eax_1 + 0x68), *(eax_1 + 0x6c), *(eax_1 + 0x30), *(eax_1 + 0x34), *(eax_1 + 0x3c), 
        *(eax_1 + 0x40), *(eax_1 + 0xd0))

void* edx_4 = *(arg1 + 0x1e0) * 0x1c0 + *edi
int32_t result = *(edx_4 - 0xe0)
int32_t ecx_10 = *(edx_4 - 0xdc)
*(edx_4 + 0xe0) = result
*(edx_4 + 0xe4) = ecx_10
return result
