// 函数: sub_4a699a
// 地址: 0x4a699a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x14)
int32_t* esi = *(eax + (arg2 << 2))
int32_t edi
int32_t var_c = edi
int32_t* edi_2 = *(eax + (arg3 << 2))
edi_2[0xc] = arg2
sub_4a68ef(arg1, esi, edi_2)
int32_t ecx = *esi
int32_t edx_2 = ecx & 0xe000000
int32_t eax_2 = *edi_2 & 0xe000000
int32_t ecx_1 = ecx & 0xf1ffffff
*esi = ecx_1

if (edx_2 u> eax_2)
    eax_2 = edx_2

bool cond:1_1 = esi[0x18] != 0
*esi = ecx_1 | eax_2

if (not(cond:1_1))
    esi[0x18] = edi_2[0x18]
    esi[0x19] = edi_2[0x19]

return 0
