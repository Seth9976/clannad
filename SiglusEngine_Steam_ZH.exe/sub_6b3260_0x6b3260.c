// 函数: sub_6b3260
// 地址: 0x6b3260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = **(arg1 + 0x1c)

if (esi == 0 || esi u<= **(arg1 + 0xc)
        || (arg2 != 0xffffffff && arg2.b != *(esi - 1) && (*(arg1 + 0x3c) & 2) != 0))
    return 0xffffffff

int32_t* eax_2 = *(arg1 + 0x2c)
*eax_2 += 1
int32_t* eax_3 = *(arg1 + 0x1c)
*eax_3 -= 1

if (arg2 == 0xffffffff)
    return 0

***(arg1 + 0x1c) = arg2.b
return arg2
