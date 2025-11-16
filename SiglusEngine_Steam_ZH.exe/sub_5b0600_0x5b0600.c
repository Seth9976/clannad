// 函数: sub_5b0600
// 地址: 0x5b0600
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
arg1[3] += 4
int32_t edx = arg1[3]
int32_t ebx = *arg1
int32_t eax = ebx
int32_t esi = arg1[1]
int16_t* var_18 = arg2
int32_t var_8_1 = 0

if (ebx == esi)
    eax = 0

int32_t eax_1 = ebx
int32_t edi_1 = *(edx + eax - 4) * 2
int32_t edx_1 = edx + edi_1
arg1[3] = edx_1

if (ebx == esi)
    eax_1 = 0

if (ebx == esi)
    ebx = 0

*(arg2 + 0x10) = 0
*(arg2 + 0x14) = 7
*arg2 = 0
sub_5b2590(arg2, edx_1 - edi_1 + ebx, eax_1 + edx_1)
return arg2
