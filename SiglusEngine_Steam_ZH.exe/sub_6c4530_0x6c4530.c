// 函数: sub_6c4530
// 地址: 0x6c4530
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1

if (arg2 == 0x200)
    if (sub_6c7a60(arg1 + 0x80) != 0)
        return 0
else if (arg2 == 0x201 && sub_6c7b10(arg1 + 0x80, *(arg1 + 4)) != 0)
    return 0

if (arg2 == 0x20)
    if (sub_6c4660(arg1) == 0)
        return 1
else if (arg2 == 2)
    *(arg1 + 0x68) = *(arg1 + 0x64)
else if (arg2 == 5 && sub_6c45e0(arg1, arg3, arg4) == 0)
    return 0

return sub_6c0020(arg1, arg2, arg3, arg4)
