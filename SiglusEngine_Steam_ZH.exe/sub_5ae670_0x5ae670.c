// 函数: sub_5ae670
// 地址: 0x5ae670
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1
void* eax

if (arg2 == 0)
    eax = nullptr
else
    eax = arg2 + 4

sub_5aeab0(arg1 + 4, eax)
*(arg1 + 0xb8) = *(arg2 + 0xb8)
*(arg1 + 0xb9) = *(arg2 + 0xb9)
*(arg1 + 0xba) = *(arg2 + 0xba)
__builtin_memcpy(arg1 + 0xbc, arg2 + 0xbc, 0x80)
__builtin_memcpy(arg1 + 0x13c, arg2 + 0x13c, 0x80)
return arg1
