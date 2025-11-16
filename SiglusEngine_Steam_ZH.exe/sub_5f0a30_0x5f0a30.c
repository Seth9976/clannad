// 函数: sub_5f0a30
// 地址: 0x5f0a30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = *(arg1 + 0xdb8) u< 8
void** eax = arg1 + 0xda4
eax[4] = 0

if (not(cond:0))
    eax = *eax

*eax = nullptr
void** eax_1 = arg1 + 0xdbc
__builtin_memset(arg1 + 0x274, 0, 0x20)
eax_1[4] = 0

if (eax_1[5] u>= 8)
    eax_1 = *eax_1

*eax_1 = nullptr
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
void* result = arg1 + 0xe4c
*(result + 0x10) = 0

if (*(result + 0x14) u>= 8)
    result = *result

*result = 0
return result
