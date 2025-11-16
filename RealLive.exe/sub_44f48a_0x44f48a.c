// 函数: sub_44f48a
// 地址: 0x44f48a
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

arg4[0xba53a83f] += arg2
int32_t eflags
int32_t eflags_1
char temp0
char temp1
temp0, temp1, eflags_1 = __aas(arg1.b, arg1:1.b, eflags)
arg1.b = temp0
arg1:1.b = temp1
*arg4 = *arg3
void* esi = &arg3[1]
*esi = rrc.b(*esi, 0x8e, false)
void* entry_ebx
int16_t fs
*(entry_ebx + 0x2832cfeb) = fs
trap(0x54)
