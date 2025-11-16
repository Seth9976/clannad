// 函数: sub_4d2c65
// 地址: 0x4d2c65
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int16_t eax = (*arg4).w
int32_t eflags
char temp0
char temp1
temp0, temp1, eflags = __aad_immb(0x95, eax.b, eax:1.b)
eax.b = temp0
eax:1.b = temp1
void* var_8 = arg2
*(arg1 + 0x36ad1a04) ^= 0x5a
arg2.b = 0x5b

if (not(add_overflow(arg3, 0xffffffff)))
    bool c
    bool p
    bool a
    bool z
    bool s
    bool d
    bool o
    return sub_4d2c7b(0xc1545a, arg2, arg1, arg3 - 1, arg5, var_8, 
        (o ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa | (s ? 1 : 0) << 7 | (z ? 1 : 0) << 6
            | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (c ? 1 : 0)) __tailcall

int32_t eax_2 = 0xc1545a - *(arg3 - 1 + (arg2 << 2) - 0x3eab8d48)
void* entry_ebx
*(entry_ebx + 0x2c2d7475) += arg1.b
char temp1_1 = *arg5
bool p_1 = unimplemented  {scasd dword [edi]}
bool a_1 = unimplemented  {scasd dword [edi]}
eax_2:1.b = (eax_2 - temp1_1 s< 0 ? 1 : 0) << 7 | (eax_2 == temp1_1 ? 1 : 0) << 6
    | (a_1 ? 1 : 0) << 4 | (p_1 ? 1 : 0) << 2 | (eax_2 u< temp1_1 ? 1 : 0)
undefined
