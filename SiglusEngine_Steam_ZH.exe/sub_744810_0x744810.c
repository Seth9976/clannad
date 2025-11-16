// 函数: sub_744810
// 地址: 0x744810
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0x16] != 1)
    return 0xffffff7d

bool cond:0 = arg1[1] == 0
arg1[0x16] = 2

if (cond:0)
    arg1[0x16] = 3
    return 0

int32_t* result = sub_7444f0(arg1)

if (result != 0)
    *arg1 = 0
    sub_7448e0(arg1)

return result
