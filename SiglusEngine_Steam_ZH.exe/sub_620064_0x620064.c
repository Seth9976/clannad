// 函数: sub_620064
// 地址: 0x620064
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* entry_ebx
*(entry_ebx + 0x2b14e8cf)
__int1()
*(entry_ebx + 0x7d8304c4) += 1
int32_t eflags
arg1.b = __in_al_dx(arg2.w, eflags)
*(arg2 + 0xb) |= arg2:1.b
j__free(arg4[-0xa])
arg4[-5] = 7
bool cond:0 = arg4[-0xb] u< 8
arg4[-6] = 0
arg4[-0xa].w = 0

if (not(cond:0))
    j__free(arg4[-0x10])

arg4[-0xb] = 7
bool cond:1 = arg4[-0x11] u< 8
arg4[-0xc] = 0
arg4[-0x10].w = 0

if (not(cond:1))
    j__free(arg4[-0x16])

TEB* fsbase
fsbase->NtTib.ExceptionList = arg4[-3]
sub_745f2b(arg4[-4] ^ arg4)
*arg4
return arg5
