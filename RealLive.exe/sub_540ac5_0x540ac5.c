// 函数: sub_540ac5
// 地址: 0x540ac5
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t eflags
__out_immb_al(0xca, arg1.b & 0xda, eflags)
int32_t eax
int32_t ecx
int16_t edx
eax, edx, ecx = 0x7a545e13()
int32_t entry_ebx
int32_t var_4 = entry_ebx
int32_t eflags_1
uint16_t temp0
temp0, eflags_1 = __arpl_gpr16_gpr16(arg4.w, ecx.w)
arg4.w = temp0
bool c = unimplemented  {sbb eax, ebx}
void* eax_1
eax_1.b = *arg3
*arg4 = eax_1.b
eax_1.b = *(entry_ebx + eax_1)
int16_t ds
uint32_t var_8 = zx.d(ds)
int32_t var_c = *(arg3 + 1 + (eax_1 << 3))
int16_t gs
*(arg2 - 0x277e3004) = gs
*(arg4 + 1 + (arg2 << 3) - 0x20) = fconvert.d(arg5)
__out_immb_al(0xca, eax_1.b, eflags_1)
int32_t eax_2 = adc.d(eax_1, *(eax_1 + 0x53), c)
char temp2 = ecx.b
ecx.b += edx:1.b
long double x87_r0 = arg5 + fconvert.t(*(arg2 + 0x54))
char temp3 = *0xd033fe55
*0xd033fe55 = rrc.b(temp3, 1, temp2 + edx:1.b u< temp2)
edx:1.b = adc.b(edx:1.b, *(0xd033fe55 + (eax_2 << 3)), (temp3 & 1) != 0)
*(arg2 + 0x26b7cffc)
x87_r0 - float.t(*(eax_2 + (ecx << 1) + 0x1e))

if (arg2 == neg.d(*(arg2 + 0x26b7cffc)) || ecx != 1)
    undefined

jump(0x540b14)
