// 函数: sub_4160f2
// 地址: 0x4160f2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = arg1
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t var_18 = 0
int32_t var_1c = arg1
int32_t var_24 = ebx
int32_t* var_28 = &var_24
int32_t* var_2c = &var_4
int32_t var_30 = esi
int32_t var_34 = edi
int32_t eax
int32_t ecx
int32_t edx
int32_t ebx_1
eax, ebx_1, ecx, edx = __cpuid(1, arg1)
int32_t eax_1
eax_1.b = (edx & 0x800000) != 0
var_2c[-1] = eax_1
*var_2c
return var_2c[-1]
