// 函数: sub_5ffd60
// 地址: 0x5ffd60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

enum WAIT_EVENT result = *(arg1 + 0xd4)

if (result s>= WAIT_OBJECT_0)
    result = sub_605260(result * 0x15c + *(arg1 + 0xc8), arg2)

*(arg1 + 0xbc) = 0
*(arg1 + 0xc5) = 1
return result
