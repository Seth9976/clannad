// 函数: sub_4caab2
// 地址: 0x4caab2
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t ecx
ecx.b = 0x9e
void* edx
edx.b = 0x89
int16_t es
uint32_t var_8 = zx.d(es)
int32_t eflags
char temp0
char temp1
temp0, temp1, eflags = __aam_immb(0x4f, (arg1 - 0x4da5af2c).b)
int32_t eax
eax.b = temp0
eax:1.b = temp1
__out_immb_al(0x47, eax.b, eflags)
void* entry_ebx
*(entry_ebx - 0x6f4a075c) += 1
eax.b &= 0x9b
void* ecx_1 = eax * 0x12a01002
char temp0_1 = *(ecx_1 + 0x315052b6)
*(ecx_1 + 0x315052b6) = edx:1.b
edx:1.b = temp0_1
edx:1.b ^= ecx_1.b
eax.b = sbb.b(eax.b, 0x85, false)
int32_t* eax_1 = eax | 0x56e5bf47
bool o = add_overflow(arg3, neg.d(*(arg2 - 0x20cf077d)))

if (o)
    *(edx - 0x416a373d)
    *(eax_1 + 0x3e)
    *arg2
    undefined

if (o)
    *(edx - 0x416a2f94)
    *(eax_1 + 0x6c)
    *(arg3 - *(arg2 - 0x20cf077d))
    undefined

eax_1.b ^= 0xdf
eax_1, edx, ecx_1 = 0xbee276a5(ecx_1, ecx)
int32_t ss
*(ss + eax_1 - 0x13)
ecx_1:1.b = 0xcf
bool c_1

if (not(add_overflow(var_8, 0xffffffff)))
    *(var_8 + 0x38f883bd) = rlc.b(*(var_8 + 0x38f883bd), 1, false)
    c_1 = unimplemented  {rcl byte [ebp+0x38f883be], 0x1}
else
    *(edx - 0x416a3000)
    c_1 = eax_1 u< 0x38

*(eax_1 - 1)
ecx_1:1.b = 0xcf

if (add_overflow(var_8 - 1, 0xffffffff))
    jump(0x4cab3e)

*eax_1
void* const* eax_3
eax_3.b = sbb.b(&__return_addr, 0x4e, c_1)
*0xdf32f883
undefined
