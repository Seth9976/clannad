// 函数: sub_62f9b0
// 地址: 0x62f9b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = *arg2
__builtin_memcpy(&arg1[1], &arg2[1], 0x80)
arg1[0x21] = arg2[0x21]
void* eax_3

if (arg2 == 0xffffff78)
    eax_3 = nullptr
else
    eax_3 = &arg2[0x23]

sub_5b1750(&arg1[0x23], eax_3)
arg1[0x50].b = arg2[0x50].b
*(arg1 + 0x141) = *(arg2 + 0x141)
*(arg1 + 0x142) = *(arg2 + 0x142)
arg1[0x51] = arg2[0x51]
*(arg1 + 0x148) = *(arg2 + 0x148)
arg1[0x54] = arg2[0x54]
int32_t eax_8
eax_8.w = arg2[0x55].w
arg1[0x55].w = eax_8.w
return arg1
