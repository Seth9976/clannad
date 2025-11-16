// 函数: sub_4d54a9
// 地址: 0x4d54a9
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

char temp1 = arg1:1.b
arg1:1.b u>>= 1
*(arg4 - 0x63) = rlc.b(*(arg4 - 0x63), 1, (temp1 & 1) != 0)
int32_t eflags
uint8_t* edi
uint8_t temp0
temp0, edi = __insb(arg4, arg2 + 1, eflags)
*edi = temp0
*(__return_addr - 4) = arg3
*arg3
arg1.b ^= (arg2 + 1):1.b
int32_t ecx
ecx.b = 0x84
return arg1
