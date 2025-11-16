// 函数: sub_6ed9a0
// 地址: 0x6ed9a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = sx.d(arg2[1])
int16_t ebx_1 = ((sx.d(*arg2) * 0xb505) s>> 0x10).w
int32_t esi_1 = (eax_1 * 0x31f1) s>> 0x10
int32_t edi_1 = (eax_1 * 0xfb15) s>> 0x10
int16_t eax_3 = ((esi_1 * 0xb505) s>> 0x10).w
int16_t edx_1 = ((edi_1 * 0xb505) s>> 0x10).w
int16_t ecx = edx_1 + eax_3
int16_t edx_2 = edx_1 - eax_3
*arg1 = edi_1.w + ebx_1
arg1[8] = ecx + ebx_1
arg1[0x10] = edx_2 + ebx_1
arg1[0x18] = esi_1.w + ebx_1
arg1[0x20] = ebx_1 - esi_1.w
arg1[0x28] = ebx_1 - edx_2
int16_t result = ebx_1 - ecx
arg1[0x38] = ebx_1 - edi_1.w
arg1[0x30] = result
return result
