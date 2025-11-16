// 函数: sub_532a20
// 地址: 0x532a20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
*arg1 = 0

if (arg2[5] u>= 8)
    *arg1 = *arg2
    *arg2 = 0
else
    void* eax = arg2[4]
    
    if (eax != 0xffffffff)
        _memcpy(arg1, arg2, (eax + 1) * 2)

*(arg1 + 0x10) = arg2[4]
*(arg1 + 0x14) = arg2[5]
arg2[5] = 7
arg2[4] = 0
*arg2 = 0
return arg1
