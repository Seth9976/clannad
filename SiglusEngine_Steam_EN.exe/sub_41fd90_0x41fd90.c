// 函数: sub_41fd90
// 地址: 0x41fd90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL eax = data_13701cc

if (eax == 0 || arg1 u> 0x3e7)
    return eax

int32_t eax_1 = eax + (arg1 << 3)
int32_t* edi_1 = eax_1 + 4

if (*(eax_1 + 4) != 0)
    sub_41fd40(arg1)

int32_t ecx = data_13701d4

if (ecx == 0 || arg2 s> 0xc00)
    return sub_4d6960(eax_1, edi_1, eax_1, arg2, "FSC_MSGBK_ONE")

int32_t eax_3 = arg1 * 0xc00 + ecx
*edi_1 = eax_3
return eax_3
