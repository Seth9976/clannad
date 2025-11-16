// 函数: sub_6ce090
// 地址: 0x6ce090
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0 || arg2 == 0)
    return 

uint32_t eax = zx.d(*(arg2 + 0x14))

if (eax.w == 0 || eax.w u> 0x100)
    return sub_6d4470(arg3, "Invalid palette size, hIST allocation skipped") __tailcall

sub_6cafa0(eax, arg2, arg3, 8, 0)
int32_t ebx_1 = sub_6d8360(arg3, 0x200)
*(arg2 + 0xcc) = ebx_1

if (ebx_1 == 0)
    return sub_6d4470(arg3, "Insufficient memory for hIST chunk data") __tailcall

uint32_t edx_1 = zx.d(*(arg2 + 0x14))
int32_t ecx_4 = 0
*(arg2 + 0xe8) |= 8

if (edx_1 s> 0)
    do
        arg1.w = *(arg4 + (ecx_4 << 1))
        *(ebx_1 + (ecx_4 << 1)) = arg1.w
        ecx_4 += 1
    while (ecx_4 s< edx_1)

*(arg2 + 8) |= 0x40
