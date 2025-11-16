// 函数: sub_67be10
// 地址: 0x67be10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *arg1

if (arg3 == ecx && arg4 == arg1[1])
    arg1[1] = ecx
else if (arg3 != arg4)
    _memcpy(arg3, arg4, (arg1[1] - arg4) s>> 2 << 2)
    arg1[1] = &arg3[(arg1[1] - arg4) s>> 2]
    *arg2 = arg3
    return arg2

*arg2 = arg3
return arg2
