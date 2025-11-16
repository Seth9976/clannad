// 函数: sub_501cf0
// 地址: 0x501cf0
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

arg1.b &= 0x8b
void* ecx
ecx.b = 0xb6
int32_t var_4 = 3
void* entry_ebx
char temp1 = *(entry_ebx - 0x58) ^ entry_ebx.b
*(entry_ebx - 0x58) = temp1

if (temp1 u<= 0)
    *(ecx + 0x51) = arg1:1.b
    
    if (not(test_bit(arg1:1.b, 2)))
        undefined
    
    jump(0x501d0a)

arg1.b += 0x36
void* var_8 = arg1
*(arg2 + 0x46404d5b) ^= arg2:1.b
ecx:1.b = 0x5a

if (arg1 - 0xf6f6fd2 s< 0xffffffff)
    *arg4 = (arg1 - 0xf6f6fd1).b
    return arg1 - 0xf6f6fd1

int32_t eflags
int32_t eflags_1
char temp0
char temp1_1
temp0, temp1_1, eflags_1 = __aas((arg1 - 0xf6f6fd1).b, (arg1 - 0xf6f6fd1):1.b, eflags)
void* eax_1
eax_1.b = temp0
eax_1:1.b = temp1_1
*(eax_1 + 0x19) = int.q(arg5)
char ecx_1
int16_t es
int16_t cs
ecx_1, es = __les_gprz_memp(*zx.d(cs))
arg6 f- float.t(*arg3)
jump(0x501c4e)
