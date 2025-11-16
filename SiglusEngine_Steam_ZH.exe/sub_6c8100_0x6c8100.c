// 函数: sub_6c8100
// 地址: 0x6c8100
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x48) != 0)
    GdiFlush()
    DeleteObject(*(arg1 + 0x48))

int32_t result = *(arg1 + 0x38)
*(arg1 + 0x3c) = result
__builtin_memset(arg1 + 0x44, 0, 0x28)
return result
