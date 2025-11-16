// 函数: sub_54a480
// 地址: 0x54a480
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

*arg4 -= arg2.b
int32_t eflags
uint8_t* edi
uint8_t temp0
temp0, edi = __insb(arg5, arg2, eflags)
*edi = temp0
long double x87_r0 = fconvert.t(*(arg1 - 0x4be12f3d)) - arg6
edi[0x28cffbc5] <<= 1
int32_t entry_ebx
*(entry_ebx + (arg3 << 3) - 0x77) = fconvert.d(x87_r0)

if (edi != 0 && arg1 == 1)
    jump(0x54a4a4)

*(arg4 - 0x2fcb692c) s>>= 0x32
undefined
