// 函数: sub_448de6
// 地址: 0x448de6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_4 = (arg4 << 5) + *(*(arg2 * 0x64 + *(arg1 + 0x2c) + 4) + arg3 * 0x64 + 0x34)
*(*(eax_4 + 0x18) + 0x1c) = *(eax_4 + 0x1c)
*(*(eax_4 + 0x1c) + 0x18) = *(eax_4 + 0x18)
void* edx_6 = *(*(arg1 + 0xb0) + (*(*(eax_4 + 0xc) + 0x14) << 2))

if (eax_4 == *(edx_6 + 0x34))
    int32_t esi_5 = *(eax_4 + 0x1c)
    int32_t edi
    int32_t var_c_1 = edi
    void* edi_2 = esi_5 - eax_4
    int32_t edi_3 = neg.d(edi_2)
    *(edx_6 + 0x34) = sbb.d(edi_3, edi_3, edi_2 != 0) & esi_5

*(eax_4 + 0x18) = eax_4
*(eax_4 + 0x1c) = eax_4

if ((*(arg1 + 0x119) & 8) == 0 && *(arg1 + 0xb4) != 0)
    sub_4433cc(arg1)

return 0
