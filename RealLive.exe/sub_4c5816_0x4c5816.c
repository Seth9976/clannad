// 函数: sub_4c5816
// 地址: 0x4c5816
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

*(arg3 - 0x78)
*(arg3 - 0x78) |= arg2.b
int32_t eflags
void* const* eax
eax.b = __in_al_dx(arg2.w, eflags)
*0x944a373 = eax
*0x944a36f = arg3
int32_t entry_ebx
arg3:1.b = entry_ebx:1.b
int32_t ebp_1
int16_t ds_1
ebp_1, ds_1 = __lds_gprz_memp(*(eax + (arg2 << 1) + 0x4ac8894c))
int32_t eflags_1
char temp0_2
char temp1
temp0_2, temp1, eflags_1 = __aam_immb(0x82, eax.b)
eax.b = temp0_2
eax:1.b = temp1
int16_t ss
*0x944a36b = zx.d(ss)
*0x944a367 = eax
__pmulhuw_mmxq_memq(arg7, *(arg5 - 0x10))
*0x944a363 = entry_ebx
bool c = eax u< *sbb.d(arg6, 0xa0b13ac8, false)
int32_t ecx
ecx:1.b = 0x89
char temp0_4 = eax.b
eax.b = arg2.b
arg2.b = temp0_4
eax.b = sbb.b(eax.b, 0xb5, c)
undefined
