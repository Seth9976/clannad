// 函数: sub_4e7900
// 地址: 0x4e7900
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx
edx.w = **(arg2 + 0x50)
int32_t ecx_1
ecx_1.w = *arg3
int32_t result = *arg4
int32_t ecx_2
ecx_2.b = *(((edx * ecx_1 + 4) s>> 3 & 0x3ff) + *(arg1 + 0x148) + 0x80)
arg5[result] = ecx_2.b
return result
