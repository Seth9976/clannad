// 函数: sub_4b8c48
// 地址: 0x4b8c48
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t i = 0

if (*(arg1 + 0x2c0) u> 0)
    int32_t edi
    int32_t var_14_1 = edi
    
    do
        int32_t edx_2 = i << 2
        void* esi_1 = *(edx_2 + *(arg1 + 0x2b4))
        int32_t ecx_2 = *(esi_1 + 4) << 2
        int32_t esi_3
        int32_t edi_4
        edi_4, esi_3 = __builtin_memcpy(*((*(arg1 + 0x18))[i] + 8), *(esi_1 + 8), ecx_2 u>> 2 << 2)
        __builtin_memcpy(edi_4, esi_3, ecx_2 & 3)
        void* esi_4 = *(edx_2 + *(arg1 + 0x2b4))
        int32_t ecx_8 = *(esi_4 + 0xc) << 2
        int32_t esi_6
        int32_t edi_7
        edi_7, esi_6 =
            __builtin_memcpy(*((*(arg1 + 0x18))[i] + 0x10), *(esi_4 + 0x10), ecx_8 u>> 2 << 2)
        i += 1
        __builtin_memcpy(edi_7, esi_6, ecx_8 & 3)
    while (i u< *(arg1 + 0x2c0))

int32_t i_1 = 0

if (*(arg1 + 0x2bc) u> 0)
    do
        void* esi_8 = *(*(arg1 + 0x14) + (i_1 << 2))
        int32_t edx_7 = *(*(*(arg1 + 0x2b8) + (i_1 << 2)) + 0x38)
        i_1 += 1
        *(esi_8 + 0x38) = edx_7
    while (i_1 u< *(arg1 + 0x2bc))

return 0
