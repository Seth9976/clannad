// 函数: sub_6eec30
// 地址: 0x6eec30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result
int32_t ecx
int32_t edx
int32_t ebx
result, ebx, ecx, edx = __cpuid(arg2, arg1)
*arg1 = result
arg1[1] = ebx
arg1[2] = ecx
arg1[3] = edx
return result
