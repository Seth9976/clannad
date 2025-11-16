// 函数: sub_4f26f9
// 地址: 0x4f26f9
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

if (arg1 s>= 0xffffffff)
    jump(0x4f26fc)

int32_t ebx
ebx:1.b = 9
*(arg3 - 0x27) |= arg4
int32_t eflags
__in_oeax_immb(0x5a, eflags)
*arg5 - *arg6
int32_t esi = arg5 + 1
int32_t edi = arg6 + 1
*(arg3 + (arg2 << 3) - 0x80) = 0x5d
*(arg3 - 0x27) |= arg4
__in_oeax_immb(0x5a, eflags)
*esi - *edi
int32_t edi_1 = edi + 1
*(arg3 + (edi << 3) - 0x80) = 0x5d
*(arg3 - 0x27) |= arg4
__in_oeax_immb(0x5a, eflags)
*(esi + 1) - *edi_1
*(arg3 + (edi_1 << 3) - 0x80) = 0x5d
undefined
