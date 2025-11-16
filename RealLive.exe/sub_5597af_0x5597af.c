// 函数: sub_5597af
// 地址: 0x5597af
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

long double result = *arg2
int32_t eflags
int32_t eax
eax.b = __in_al_immb(0x65, eflags)
*(eax + (arg2 << 2) + 0x1e8a65a6) ^= 0xffffffc1
int32_t var_4 = eax
int16_t cs
uint32_t var_8 = zx.d(cs)
int32_t eflags_1
int32_t eip
eip, eflags_1 = __into(eflags)
bool c = eax.b u< *arg4
void* edi = &arg4[1]
eax.b = __in_al_immb(0x95, eflags_1)
*(arg2 + 0x56) = sbb.d(*(arg2 + 0x56), arg3, c)
char* entry_ebx
char temp0_2 = *entry_ebx
*entry_ebx = eax
void* ebp = arg3 + entry_ebx
*(ebp - 0x15)
*(ebp - 0x15) |= arg1.b
int80_t* var_c = arg2
int32_t var_11 = arg1
int32_t eax_3
eax_3.b = sbb.b(ebp.b, 0xb6, false)
eax_3.b = entry_ebx[eax_3]
int32_t temp3 = *(entry_ebx - 0x2d)
int32_t var_d
*(entry_ebx - 0x2d) += var_d + 4
*(temp0_2 + 0x3bf0857)
bool p = unimplemented  {dec edi}
bool a = unimplemented  {dec edi}
*(entry_ebx - 0x21) = int.d(result)
eax_3:1.b = (edi - 2 s< 0 ? 1 : 0) << 7 | (edi == 2 ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2 | (temp3 + var_d + 4 u< temp3 ? 1 : 0)
return result
