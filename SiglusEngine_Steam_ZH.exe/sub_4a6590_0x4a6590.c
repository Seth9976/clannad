// 函数: sub_4a6590
// 地址: 0x4a6590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t ebx = 0
int32_t edi
int32_t var_14 = edi
int32_t var_8_1 = 0
sub_4a39e3(arg1)
int32_t i = 0

if (*(arg1 + 4) u> 0)
    do
        void* ecx = *(*(arg1 + 0x10) + (i << 2))
        int32_t eax_2 = *(ecx + 4)
        
        if ((eax_2:1.b & 4) != 0 && *(ecx + 0x28) == 0xffffffff)
            *(ecx + 4) = eax_2 & 0xfffffbff
            var_8_1 = 1
        
        i += 1
    while (i u< *(arg1 + 4))

int32_t edi_1 = 0
int32_t i_1 = 0

if (*(arg1 + 8) u> 0)
    do
        void* eax_5 = *(*(arg1 + 0x14) + (i_1 << 2))
        int16_t ecx_3 = (*(*(*(arg1 + 0x10) + (*(eax_5 + 4) << 2)) + 4)).w
        
        if ((ecx_3:1.b & 1) != 0 && (ecx_3:1.b & 8) != 0)
            *(eax_5 + 0x54) = 1
        
        if (*(eax_5 + 0x54) != 0xffffffff || *(eax_5 + 0x48) != 0xffffffff)
            *(eax_5 + 0x30) = edi_1
            edi_1 += 1
        else
            *(eax_5 + 0x30) = 0xffffffff
        
        i_1 += 1
    while (i_1 u< *(arg1 + 8))
    
    ebx = 0

if (edi_1 == *(arg1 + 8))
    int32_t result
    result.b = var_8_1 == 0
    return result

sub_4a3f8e(arg1)
int32_t i_2 = 0

if (*(arg1 + 8) u> 0)
    do
        int32_t eax_6 = *(arg1 + 0x14)
        void* ecx_5 = *(eax_6 + (i_2 << 2))
        
        if (*(ecx_5 + 0x54) != 0xffffffff || *(ecx_5 + 0x48) != 0xffffffff)
            *(eax_6 + (ebx << 2)) = ecx_5
            ebx += 1
        else
            sub_46e265(ecx_5, 1)
        
        i_2 += 1
    while (i_2 u< *(arg1 + 8))

int32_t ecx_8 = (*(arg1 + 8) - ebx) << 2
__builtin_memset(__builtin_memset(*(arg1 + 0x14) + (ebx << 2), 0, ecx_8 u>> 2 << 2), 0, ecx_8 & 3)
*(arg1 + 8) = ebx
return 0
