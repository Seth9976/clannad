// 函数: sub_9a51e0
// 地址: 0x9a51e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 

int32_t eax_1 = *(arg1 + 8)

if (eax_1 != 0)
    _free(eax_1)

int32_t eax = *(arg1 + 0xc)

if (eax != 0)
    _free(eax)

__builtin_memset(arg1, 0, 0x14)
