// 函数: sub_4f2181
// 地址: 0x4f2181
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t eax
eax.b = *arg4
int32_t eflags
int32_t eflags_1
char temp0
temp0, eflags_1 = __das(eax.b, eflags)
eax.b = temp0
long double x87_r0 = arg7 * fconvert.t(*arg2)
bool c
*(arg3 + 0x4316da73) = sbb.b(*(arg3 + 0x4316da73), 0x58, c)
__paddsb_mmxq_memq(arg6, *(arg3 + 0x4a50ac13))
void* eax_2
eax_2.b = *arg1
char* esi_2 = &arg1[1]
eax_2.b = *esi_2
__ffreep_x87(x87_r0, arg5)
*(arg3 + 0x249ad941)
(&__return_addr)[&esi_2[1] * 2]
trap(0xd)
