// 函数: sub_4c936e
// 地址: 0x4c936e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t* eax = *(arg1 + 0x100)
int32_t edx = *(arg1 + 0x14)
int32_t esi_1 = *eax & 0xfffff

if ((*(*(*(arg1 + 0x10) + (*(*(edx + (*(*(edx + (*eax[2] << 2)) + 0x30) << 2)) + 4) << 2)) + 4)
        & 0x80) == 0)
    return 1

int32_t var_8_1 = 0

if (esi_1 u> 0)
    int32_t edi
    int32_t var_14_1 = edi
    
    do
        void* eax_9 = *(arg1 + 0x100)
        int32_t edx_2 = *(arg1 + 0x14)
        int32_t edi_2 = var_8_1 << 2
        var_8_1 += 1
        *(*(edx_2 + (*(edi_2 + *(eax_9 + 0x10)) << 2)) + 0x30) =
            *(*(edx_2 + (*(edi_2 + *(eax_9 + 8)) << 2)) + 0x30)
    while (var_8_1 u< esi_1)

**(arg1 + 0x100) = 0
return 0
