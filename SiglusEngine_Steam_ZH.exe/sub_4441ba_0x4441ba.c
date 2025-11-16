// 函数: sub_4441ba
// 地址: 0x4441ba
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx_1 = not.d(arg2)

if (*(edx_1 + 0x10) == 1)
    uint32_t eax_1 = zx.d(*(edx_1 + 0x14))
    
    if (eax_1 u< *(arg1 + 0xa0))
        void* ecx_1 = *(arg1 + 0xa4) + eax_1 * 0xb4
        uint32_t eax_3 = zx.d(*(edx_1 + 0x18))
        
        if (eax_3 u< *(ecx_1 + 0x34))
            return eax_3 * 0x38 + *(ecx_1 + 0x38)

return 0
