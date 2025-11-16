// 函数: sub_610e70
// 地址: 0x610e70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg1[1]
int32_t ecx = *arg1

if (edx != 0x80000000)
    *arg2 = ecx
    arg2[1] = edx - 1
    return arg2

arg2[1] = 0x7fffffff
*arg2 = ecx - 1
return arg2
