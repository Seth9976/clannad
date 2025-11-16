// 函数: sub_49c24e
// 地址: 0x49c24e
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

*(arg3 + 0x68) += (arg3 - 1).b
*arg5 = *arg4
int32_t eflags
__out_immb_al(0x76, arg1.b, eflags)
arg1.b -= 0x28
int32_t eax
eax.b = __in_al_dx(arg2, eflags)
trap(0x1e)
