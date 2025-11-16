// 函数: sub_4836d5
// 地址: 0x4836d5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 8)

if (arg3 u>= eax)
    return 0x88760394

int32_t ecx_1 = eax - arg3
int32_t eax_2 = arg4

if (eax_2 u> ecx_1)
    eax_2 = ecx_1

int32_t edi
int32_t var_c_1 = edi
int32_t esi_3
int32_t edi_2
edi_2, esi_3 = __builtin_memcpy(arg2, *(arg1 + 4) + arg3, eax_2 u>> 2 << 2)
__builtin_memcpy(edi_2, esi_3, eax_2 & 3)
*arg5 = eax_2
return 0
