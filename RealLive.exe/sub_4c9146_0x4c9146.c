// 函数: sub_4c9146
// 地址: 0x4c9146
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

*arg4 - *arg5
void* edi = arg5 + 4
*(edi + 0x48) = 0x19
int16_t edx
int16_t es
edx, es = __les_gprz_memp(*(arg4 + 4 + (arg3 << 2)))
void* eax
eax.b = (arg1 & 0x4435c45a).b & 0x74
int32_t eflags
char temp0
char temp1
temp0, temp1, eflags = __aad_immb(0xf4, eax.b, eax:1.b)
eax.b = temp0
eax:1.b = temp1
*edi
void* var_4 = eax
edx:1.b ^= arg3.b
*(eax - 0x7e9bfca5) &= eax.b
undefined
