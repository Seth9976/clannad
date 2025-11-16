// 函数: sub_5e5060
// 地址: 0x5e5060
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 != 0)
    sub_5e5260(arg1, 0)

arg2.d = 0
*(arg1 + 0x1ac) = 0
__builtin_memset(arg1 + 0x1bc, 0, 0x14)
sub_5e54e0(arg1)
__builtin_memset(arg1 + 0x1f0, 0, 0x1c)
sub_5f6790(arg1)
void* eax = arg1 + 0xda4
*(arg1 + 0x264) = 0xffffffff
*(arg1 + 0x268) = 0x10100
*(arg1 + 0x15e8) = 0
__builtin_memset(arg1 + 0x26c, 0, 0x28)
bool cond:1 = *(eax + 0x14) u< 8
*(eax + 0x10) = 0

if (not(cond:1))
    eax = *eax

*eax = 0
void* eax_1 = arg1 + 0xdbc
*(eax_1 + 0x10) = 0

if (*(eax_1 + 0x14) u>= 8)
    eax_1 = *eax_1

*eax_1 = 0
void* eax_2 = arg1 + 0xdd4
*(eax_2 + 0x10) = 0

if (*(eax_2 + 0x14) u>= 8)
    eax_2 = *eax_2

*eax_2 = 0
void* eax_3 = arg1 + 0xdec
*(eax_3 + 0x10) = 0

if (*(eax_3 + 0x14) u>= 8)
    eax_3 = *eax_3

*eax_3 = 0
void* eax_4 = arg1 + 0xe04
*(eax_4 + 0x10) = 0

if (*(eax_4 + 0x14) u>= 8)
    eax_4 = *eax_4

*eax_4 = 0
void* eax_5 = arg1 + 0xe1c
*(eax_5 + 0x10) = 0

if (*(eax_5 + 0x14) u>= 8)
    eax_5 = *eax_5

*eax_5 = 0
void* eax_6 = arg1 + 0xe34
*(eax_6 + 0x10) = 0

if (*(eax_6 + 0x14) u>= 8)
    eax_6 = *eax_6

*eax_6 = 0
void* eax_7 = arg1 + 0xe4c
*(eax_7 + 0x10) = 0

if (*(eax_7 + 0x14) u>= 8)
    eax_7 = *eax_7

*eax_7 = 0
void* eax_8 = arg1 + 0xd74
*(arg1 + 0x294) = 0xffffffff
*(arg1 + 0x298) = 0
*(arg1 + 0x29c) = 0
*(arg1 + 0x2a0) = 0
bool cond:2 = *(eax_8 + 0x14) u< 8
*(eax_8 + 0x10) = 0

if (not(cond:2))
    eax_8 = *eax_8

*eax_8 = 0
bool cond:3 = *(arg1 + 0xda0) u< 8
*(arg1 + 0xd9c) = 0

if (cond:3)
    *(arg1 + 0xd8c) = 0
    return 0

int16_t* result = *(arg1 + 0xd8c)
*result = 0
return result
