// 函数: sub_49abca
// 地址: 0x49abca
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t edi
int32_t var_c = edi

if (*(arg1 + 0x38) != 0)
    if (*(*(arg1 + 0x18) + 0xa) u> 0)
        do
            int32_t edi_1 = *(*(arg1 + 0x38) + (i << 2))
            
            if (edi_1 != 0)
                sub_49abca()
                j__free(edi_1)
            
            i += 1
        while (i u< zx.d(*(*(arg1 + 0x18) + 0xa)))
    
    j__free(*(arg1 + 0x38))

int32_t i_1 = 0

if (*(arg1 + 0x3c) != 0)
    if (*(*(arg1 + 0x18) + 8) u> 0)
        do
            int32_t ebx = *(*(arg1 + 0x3c) + (i_1 << 2))
            
            if (ebx != 0)
                sub_49abca()
                j__free(ebx)
            
            i_1 += 1
        while (i_1 u< zx.d(*(*(arg1 + 0x18) + 8)))
    
    j__free(*(arg1 + 0x3c))

return j__free(*(arg1 + 0x40))
