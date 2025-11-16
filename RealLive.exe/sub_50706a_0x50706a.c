// 函数: sub_50706a
// 地址: 0x50706a
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

void arg_4b
*(&arg_4b + arg4) = fconvert.s(arg5)
int32_t eflags
int32_t eax = __in_oeax_immb(0xca, eflags)
int32_t entry_ebx
int32_t ebp = arg3 - entry_ebx
int32_t var_4 = eax
char temp1 = *(ebp + (eax << 2) - 0x658aac44)
*(ebp + (eax << 2) - 0x658aac44) += arg1:1.b
void* eax_1 = sbb.d(eax, 0xd40807d8, temp1 + arg1:1.b u< temp1)
bool c_1 = unimplemented  {sbb eax, 0xd40807d8}
int16_t ds
uint32_t var_8 = zx.d(ds)
arg1:1.b = 0xcb
int32_t eax_2
eax_2.b = *arg4
void* esi = &arg4[1]
char temp3 = arg2.b
char temp4 = *arg2
arg2.b = adc.b(temp3, temp4, c_1)

if (adc.b(temp3, temp4, c_1) u>= temp3 && (not(c_1) || adc.b(temp3, temp4, c_1) != temp3))
    *(arg1 - 0x43) += 1
    *(eax_1 - 0x36) = fconvert.d(arg5)
    return arg6 + fconvert.t(*(eax_1 + 0x721212ac))

int32_t eax_4 = __in_oeax_immb(0xca, eflags)
int32_t eflags_1
char temp0_2
char temp1_1
temp0_2, temp1_1, eflags_1 = __aad_immb(0xeb, eax_4.b, eax_4:1.b)
eax_4.b = temp0_2
eax_4:1.b = temp1_1
int32_t var_c = eax_4
*esi -= 0x35
*(entry_ebx + (arg2 << 1) - 0x27e2650d)

if (arg1 == 0)
    uint32_t var_10_1 = zx.d(ds)
else
    int32_t eflags_2
    char temp0_3
    char temp1_2
    temp0_3, temp1_2, eflags_2 = __aam_immb(0x1e, eax_4.b)
    eax_4.b = temp0_3
    eax_4:1.b = temp1_2

trap(0x9f)
