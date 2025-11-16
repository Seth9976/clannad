// 函数: sub_416a01
// 地址: 0x416a01
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t* ebp
ebp.w = __return_addr.w
int32_t var_2 = arg3
int32_t eflags
int32_t esi = __outsb(arg2.w, *arg4, arg4, eflags)
*(arg2 + 0xb4270a9) &= esi
void* entry_ebx
*(entry_ebx - 0x6acab5c5)
void* edx = arg2 & *(entry_ebx - 0x6acab5c5)
bool p = unimplemented  {and edx, dword [ebx-0x6acab5c5]}
void arg_1a01d82d
*(&arg_1a01d82d + (arg1 << 2)) = arg5
int16_t top = 1

while (not(p))
    *(&arg_1a01d82d + (arg1 << 2)) = unimplemented  {fstp tword [esp+eax*4+0x1a01d82f], st0}
    unimplemented  {fstp tword [esp+eax*4+0x1a01d82f], st0}
    top += 1

void* ebp_1 = *ebp
arg1.b ^= 0x5a
char temp2 = *(entry_ebx - 0x5f)
*(entry_ebx - 0x5f) += 1

if (temp2 != 0xff && arg3 == 0)
    undefined

*(ebp_1 - 0x7f) ^= 0x15
unimplemented  {fsubr st0, qword [edx]}
*ebp = ebp_1
*(edx + (ebp << 1) - 0x80) ^= 0x15
unimplemented  {fsubr st0, qword [edx]}
*(ebp - 4) = 0x354ae34a
void* eax
eax.b = (arg1 | 0x8b1fce89).b | 0x89
int32_t eflags_1
int32_t eip
eip, eflags_1 = __into(eflags)
*(ebp - 4)
*0x6a95c682
*(arg3 - 0x7f) += 0x15
unimplemented  {fsubr st0, qword [edx]}
*(ebp - 6) = 0x354ae34a

if ((arg3 | *(arg3 - 0x4274e032)) != 0)
    jump(0x416ab1)

*(eax - 0x7f) += 0x15
unimplemented  {fsubr st0, qword [edx]}
*(ebp - 0xa) = 0x354ae34a
undefined
