// 函数: sub_4ba521
// 地址: 0x4ba521
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0

if (*(arg1 + 8) u> 0)
    int32_t edi
    int32_t var_8_1 = edi
    
    do
        void* eax_2 = *(*(arg1 + 0x14) + (i << 2))
        int32_t edx_1 = *(eax_2 + 0x38)
        
        if (edx_1 != 0xffffffff)
            *(eax_2 + 0xc) = *((*(arg1 + 0x14))[edx_1] + 0xc)
            *(eax_2 + 0x10) = *((*(arg1 + 0x14))[edx_1] + 0x10)
        
        i += 1
    while (i u< *(arg1 + 8))

return 0
