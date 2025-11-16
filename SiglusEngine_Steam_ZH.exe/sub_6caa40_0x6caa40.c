// 函数: sub_6caa40
// 地址: 0x6caa40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0 || arg2 == 0)
    return arg1

int32_t edx_1 = *(arg1 + 0x258)

if (edx_1 == 0)
    return _free(arg2)

arg1 = arg1
jump(edx_1)
