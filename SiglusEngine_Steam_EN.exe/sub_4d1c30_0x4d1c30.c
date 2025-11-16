// 函数: sub_4d1c30
// 地址: 0x4d1c30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg2
int32_t edi = arg3
uint32_t ecx_1 = arg4 u>> 2

if (ecx_1 != 0)
    edi, esi = __builtin_memcpy(edi, esi, ecx_1 << 2)

int32_t count = arg4 & 3

if (count != 0)
    __builtin_memcpy(edi, esi, count)
