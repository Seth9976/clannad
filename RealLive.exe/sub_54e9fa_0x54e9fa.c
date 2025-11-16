// 函数: sub_54e9fa
// 地址: 0x54e9fa
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

*(arg1 + (arg4 << 3))
arg1:1.b u>>= 1
int32_t entry_ebx
int32_t var_4 = entry_ebx
*(arg3 + (arg1 << 3) - 4) += 1
void arg_1a
*(&arg_1a + (arg1 << 2)) += arg2
int32_t eflags
__out_immb_oeax(0x41, arg1, eflags)
int32_t temp0 = *(arg2 - 0x2f9fff78)
*(arg2 - 0x2f9fff78) += entry_ebx
*(arg3 + 0x3995d554)
__out_dx_al(arg2.w, arg1.b, eflags)
int32_t eax = sbb.d(arg1, 0x320000be, temp0 + entry_ebx u< temp0)
int32_t ebx = *0xc5eb2bd8

if (eax s>= 0)
    int32_t eflags_1
    char temp0_1
    temp0_1, eflags_1 = __daa(eax.b, eflags)
    eax.b = temp0_1
    undefined

int32_t eax_1
eax_1.b = __in_al_dx(arg2.w, eflags)
*0xc5eb2bd8 = ebx
*(arg3 + (eax_1 << 3) - 4) += 1
*((eax_1 << 2) + 0xc5eb2bf6) += arg2
__out_immb_oeax(0x41, eax_1, eflags)
int32_t temp1 = *(arg2 - 0x2f9fff78)
*(arg2 - 0x2f9fff78) += ebx
*(arg3 + 0x3995d554)
__out_dx_al(arg2.w, eax_1.b, eflags)
int32_t eax_2 = sbb.d(eax_1, 0x320000be, temp1 + ebx u< temp1)
*0xc5eb2bd8

if (eax_2 s>= 0)
    return sub_54eac6(eax_2.b) __tailcall

__int1()
undefined
