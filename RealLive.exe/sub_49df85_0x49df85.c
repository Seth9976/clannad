// 函数: sub_49df85
// 地址: 0x49df85
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t eax
bool c
bool p
bool a
bool z
bool s
eax:1.b = (s ? 1 : 0) << 7 | (z ? 1 : 0) << 6 | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (c ? 1 : 0)
int32_t eflags
int32_t eflags_1
char temp0
temp0, eflags_1 = __das((eax | 0x3b1144d1).b, eflags)
int32_t* eax_1
eax_1.b = temp0
void* eax_3
eax_3.b = (*eax_1).b & 0x88
void* ebp = eax_1[1]
int32_t ebx
ebx.b = eax_1[2].b + arg1 - 2
eax_3:1.b = 0xca
bool p_1 = unimplemented  {cmp eax, 0xdf631c7d}
void* ecx_2 = *(eax_3 - 0x52) * 0xc6524dcf
eax_1[2] = ebp

if (not(p_1))
    *(eax_3 - 0x1365e6be)

*(ebp - 0x30) += ebp:1.b
int16_t ds
eax_1[1] = zx.d(ds)
int32_t eax_6 = *0xd05f82d9 - 0x3e1e8454
int32_t eflags_2
char temp0_2
char temp1
temp0_2, temp1, eflags_2 = __aaa(eax_6.b, eax_6:1.b, eflags_1)
eax_6.b = temp0_2
eax_6:1.b = temp1
*eax_6
*((&eax_1[1] u>> 1) - 4) = ebx
*(ecx_2 - 0xbdb77e4) = fconvert.s(arg2)
eax_6.b = ebx.b
void* edi
long double x87_r1
sub_4da82c(eax_6, ecx_2, ecx_2.w, 0xd05f8300, edi, x87_r1)
noreturn
