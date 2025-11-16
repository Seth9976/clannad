// 函数: sub_4a41c9
// 地址: 0x4a41c9
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t eflags
uint16_t temp0
temp0, eflags = __arpl_gpr16_gpr16(arg1.w, arg2)
arg1.w = temp0
bool c = *__outsd(arg2, *arg4, arg4, eflags) u< *arg1
int32_t temp4 = *(arg3 + 0x2240d7d2)

if (adc.d(arg5, temp4, c) == 0 || adc.d(arg5, temp4, c) u< arg5
        || (c && adc.d(arg5, temp4, c) == arg5))
    undefined

return adc.d(arg5, temp4, c)
