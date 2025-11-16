// 函数: sub_5979b0
// 地址: 0x5979b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg1[1]
int32_t result = *arg1
int32_t ecx_1 = edx - result

if (ecx_1 u> arg2)
    result += arg2
    arg1[1] = result
else if (ecx_1 u< arg2)
    sub_597940(arg1, result - edx + arg2)
    char* ecx_3 = arg1[1]
    _memset(ecx_3, 0, *arg1 - ecx_3 + arg2)
    result = *arg1 + arg2
    arg1[1] = result

return result
