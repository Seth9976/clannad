// 函数: sub_5ea620
// 地址: 0x5ea620
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x1ac) != 1 || *(arg1 + 0x1bc) != arg3.d || *(arg1 + 0x1c0) != arg3:4.d
        || *(arg1 + 0x1c4) != arg3:8.d || *(arg1 + 0x1c8) != arg3:0xc.d
        || *(arg1 + 0x1ce) != (arg2 u>> 0x10).b || *(arg1 + 0x1cd) != (arg2 u>> 8).b
        || *(arg1 + 0x1cc) != arg2.b || *(arg1 + 0x1cf) != (arg2 u>> 0x18).b)
    sub_5e5060(arg1, 1)
    *(arg1 + 0x1ac) = 1
    *(arg1 + 0x1bc) = arg3
    *(arg1 + 0x1cc) = arg2

uint32_t result
result.b = 1
return result
