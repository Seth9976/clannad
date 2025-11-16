// 函数: sub_620061
// 地址: 0x620061
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1[-1].b = 2
int32_t eax
void** edx
sub_532b80(eax, edx, arg2, __return_addr)

if (arg1[-5] u>= 8)
    j__free(arg1[-0xa])

arg1[-5] = 7
bool cond:0 = arg1[-0xb] u< 8
arg1[-6] = 0
arg1[-0xa].w = 0

if (not(cond:0))
    j__free(arg1[-0x10])

arg1[-0xb] = 7
bool cond:1 = arg1[-0x11] u< 8
arg1[-0xc] = 0
arg1[-0x10].w = 0

if (not(cond:1))
    j__free(arg1[-0x16])

TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-3]
sub_745f2b(arg1[-4] ^ arg1)
*arg1
return arg2
