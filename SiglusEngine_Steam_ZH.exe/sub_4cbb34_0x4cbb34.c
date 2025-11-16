// 函数: sub_4cbb34
// 地址: 0x4cbb34
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
int32_t i = 0

if (*(arg1 + 8) u> 0)
    do
        int32_t eax_1 = *(arg1 + 0x14)
        void* ecx = *(eax_1 + (i << 2))
        int32_t esi_1 = *(ecx + 0x38)
        
        if (esi_1 != 0xffffffff)
            void* eax_2 = *(eax_1 + (esi_1 << 2))
            int32_t edx_1 = esi_1
            
            while (*(eax_2 + 0x38) != 0xffffffff)
                *(ecx + 0x3c) |= *(eax_2 + 0x3c)
                edx_1 = *(eax_2 + 0x38)
                eax_2 = *(*(arg1 + 0x14) + (edx_1 << 2))
            
            if (esi_1 != edx_1)
                *(ecx + 0x38) = edx_1
                sub_49f12c(ecx, eax_2)
        
        i += 1
    while (i u< *(arg1 + 8))

return 0
