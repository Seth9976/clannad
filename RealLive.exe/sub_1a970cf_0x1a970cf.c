// 函数: sub_1a970cf
// 地址: 0x1a970cf
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

void* result = arg1 + ((arg2 - *(arg1 + 0x10)) s>> 0xc << 3) + 0x18
*result += zx.d(*arg3)
*arg3 = 0
bool cond:0 = *result != 0xf0
*(result + 4) = 0xf1

if (not(cond:0))
    data_1c0773c += 1
    
    if (data_1c0773c == 0x20)
        result = sub_1a96fb6(0x10)

return result
