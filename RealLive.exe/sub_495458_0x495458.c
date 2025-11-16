// 函数: sub_495458
// 地址: 0x495458
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
temp0, eflags_1 = __das(eax.b, eflags)
eax.b = temp0
eax.b += 0x22
uint16_t* var_4 = arg3
*(arg2 - 0x7b6ff77a) ^= arg2:1.b
arg1:1.b = 0xca
uint16_t* var_6 = arg3
uint16_t* var_a = arg3
char temp0_1 = eax.b
eax.b -= 0x3c
bool p_1 = unimplemented  {add al, 0xc4}
bool a_1 = unimplemented  {add al, 0xc4}
eax:1.b = (temp0_1 - 0x3c s< 0 ? 1 : 0) << 7 | (temp0_1 == 0x3c ? 1 : 0) << 6 | (a_1 ? 1 : 0) << 4
    | (p_1 ? 1 : 0) << 2 | (temp0_1 u>= 0x3c ? 1 : 0)
int32_t eflags_2
char temp0_2
temp0_2, eflags_2 = __das(eax.b, eflags_1)
eax.b = temp0_2
eax.b += 0xc
uint16_t* var_e = arg3
*(arg2 - 0x7b6ff77a) ^= arg2:1.b
arg1:1.b = 0xca
uint16_t* var_10 = arg3
uint16_t* var_14 = arg3
char temp1 = arg2:1.b
char temp2 = arg2.b
arg2:1.b += arg2.b
bool p_2 = unimplemented  {add dh, dl}
bool a_2 = unimplemented  {add dh, dl}
eax:1.b = (temp1 + temp2 s< 0 ? 1 : 0) << 7 | (temp1 == neg.b(temp2) ? 1 : 0) << 6
    | (a_2 ? 1 : 0) << 4 | (p_2 ? 1 : 0) << 2 | (temp1 + temp2 u< temp1 ? 1 : 0)
int32_t eflags_3
char temp0_3
temp0_3, eflags_3 = __das(eax.b, eflags_2)
eax.b = temp0_3
eax.b += 0x1e
int16_t var_18 = arg3.w
*(arg2 - 0x7b6ff77a) ^= arg2:1.b
arg1:1.b = 0xca
uint16_t* var_1a = arg3
__outsd(arg2.w, *arg3, arg3, eflags_3)
*arg4 = eax
uint16_t** var_1e = &var_1a
*0xca1d407c
uint16_t** var_1e_1 = var_1e
char var_26 = arg2.b
void* var_2a = 0x2f9fff4c
int32_t* var_2e = &var_2a
void* var_3a = &arg4[1]
int32_t eflags_4
char temp0_4
temp0_4, eflags_4 = __das(var_1e.b, eflags_3)
uint16_t** eax_1
eax_1.b = temp0_4
unimplemented  {enter 0xfbde, 0x97}
void* ebx = var_2a
int32_t ecx_1
ecx_1.b = (arg1 - 1).b & *(ebx + 0x3effff47)
*((&var_1a ^ (arg1 - 1)) - 4) = ecx_1
*(ebx - 0x52) -= var_26 - 1
undefined
