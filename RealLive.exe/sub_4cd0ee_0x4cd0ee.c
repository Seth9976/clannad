// 函数: sub_4cd0ee
// 地址: 0x4cd0ee
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t eflags
char temp0
char temp1
temp0, temp1, eflags = __aad_immb(0x11, arg1.b, arg1:1.b)
arg1.b = temp0
arg1:1.b = temp1
*(arg1 - 0x6a) ^= arg4

if (arg3 != 0)
    int16_t es
    uint32_t var_4 = zx.d(es)
    breakpoint

int32_t* eax
int32_t ecx
char* edx
eax, edx, ecx = 0xac6244b0()
char temp1_1 = eax.b
eax.b -= 0xb
bool p = unimplemented  {sub al, 0xb}
bool a = unimplemented  {sub al, 0xb}
int32_t var_4_1 = ecx
char temp0_1 = *edx
*edx = ecx.b
ecx.b = temp0_1
bool d
int32_t var_8 = (add_overflow(temp1_1, 0xf5) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
    | (temp1_1 - 0xb s< 0 ? 1 : 0) << 7 | (temp1_1 == 0xb ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2 | (temp1_1 u< 0xb ? 1 : 0)
void* entry_ebx
*(edx + (entry_ebx << 2)) = fconvert.d(arg5)
*eax |= eax
*(entry_ebx - 0x281c7f68) += eax.b
jump(0xac57a93b)
