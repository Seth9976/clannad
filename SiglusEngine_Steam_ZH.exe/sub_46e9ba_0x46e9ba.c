// 函数: sub_46e9ba
// 地址: 0x46e9ba
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
void* eax = *(arg1 + 8)
int32_t i = arg2

if (arg2 u< *(eax + 8))
    do
        void* ecx = *(*(eax + 0x14) + (i << 2))
        
        if (ecx != 0)
            sub_46e265(ecx, 1)
        
        *(*(*(arg1 + 8) + 0x14) + (i << 2)) = 0
        eax = *(arg1 + 8)
        i += 1
    while (i u< *(eax + 8))

*(*(arg1 + 8) + 8) = arg2
void* eax_5 = *(arg1 + 8)
int32_t i_1 = arg3

if (arg3 u< *(eax_5 + 0xc))
    do
        void* ecx_1 = *(*(eax_5 + 0x18) + (i_1 << 2))
        
        if (ecx_1 != 0)
            sub_46cb59(ecx_1, 1)
        
        *(*(*(arg1 + 8) + 0x18) + (i_1 << 2)) = 0
        eax_5 = *(arg1 + 8)
        i_1 += 1
    while (i_1 u< *(eax_5 + 0xc))

*(*(arg1 + 8) + 0xc) = arg3
int32_t ecx_3 = *(*(arg1 + 4) + 0x18) << 2
int32_t esi_1
int32_t edi_3
edi_3, esi_1 = __builtin_memcpy(*(arg1 + 0x18), arg4, ecx_3 u>> 2 << 2)
__builtin_memcpy(edi_3, esi_1, ecx_3 & 3)
return 0
