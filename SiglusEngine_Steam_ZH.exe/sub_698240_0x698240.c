// 函数: sub_698240
// 地址: 0x698240
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* edi = data_bac45c
int32_t eax_1 = *(*(edi + 0x10) + 0x20)

if (arg2 s>= eax_1)
    void* edx_2 = arg1 * 0x54 + *(edi + 0x54)
    int32_t eax_7 = *(edx_2 + 0x30)
    *(edi + 0x64) = arg1
    *(edi + 0x60) = *(edx_2 + 8) + *(eax_7 + ((arg2 - eax_1) << 2))
    int32_t eax_9
    eax_9.b = 1
    return eax_9

int32_t* edx = *(edi + 0x28) + (arg2 << 3)
int32_t eax_3 = *edx
*(edi + 0x64) = eax_3
*(edi + 0x60) = *(eax_3 * 0x54 + *(edi + 0x54) + 8) + edx[1]
int32_t eax_6
eax_6.b = 1
return eax_6
