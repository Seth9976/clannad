// 函数: sub_40172a
// 地址: 0x40172a
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

*(arg1 + 1) += arg2.b
int32_t entry_ebx
int32_t ebp
int16_t ds
ebp, ds = __lds_gprz_memp(*(entry_ebx + (arg2 << 1) - 0x27f22638))
int32_t eflags
__sti(eflags)
int32_t ebx
int16_t es
ebx, es = __les_gprz_memp(*arg3)
int32_t eflags_2
char temp0
char temp1
temp0, temp1, eflags_2 = __aad_immb(0xbe, (arg1 + 1).b, (arg1 + 1):1.b)
char* eax
eax.b = temp0
eax:1.b = temp1
__out_dx_oeax(arg2.w + 1, adc.d(eax, 0x465ed020, *arg3 u< *(arg4 - ebx)), eflags_2)
undefined
