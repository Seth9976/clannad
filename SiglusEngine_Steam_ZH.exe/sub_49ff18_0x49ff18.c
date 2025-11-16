// 函数: sub_49ff18
// 地址: 0x49ff18
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t i = 0
int32_t ebx = 0

if (*(arg1 + 0xc) u> 0)
    do
        int32_t eax_1 = *(arg1 + 0x18)
        void* ecx = *(eax_1 + (i << 2))
        
        if ((*(ecx + 2) & 0xfff0) != 0)
            *(eax_1 + (ebx << 2)) = ecx
            ebx += 1
        else
            sub_46cb59(ecx, 1)
        
        i += 1
    while (i u< *(arg1 + 0xc))

int32_t ecx_1 = *(arg1 + 0xc)

if (ebx == ecx_1)
    return 1

int32_t ecx_3 = (ecx_1 - ebx) << 2
__builtin_memset(__builtin_memset(*(arg1 + 0x18) + (ebx << 2), 0, ecx_3 u>> 2 << 2), 0, ecx_3 & 3)
*(arg1 + 0xc) = ebx
return 0
