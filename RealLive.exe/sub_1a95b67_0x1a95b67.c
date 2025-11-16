// 函数: sub_1a95b67
// 地址: 0x1a95b67
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

*arg1 = 0
HMODULE result = GetModuleHandleA(nullptr)

if (result->unused.w == 0x5a4d)
    int32_t result_1 = result
    
    if (result_1 != 0)
        result += result_1
        result_1.b = result->__offset(0x1a).b
        *arg1 = result_1.b
        result.b = result->__offset(0x1b).b
        *(arg1 + 1) = result.b

return result
