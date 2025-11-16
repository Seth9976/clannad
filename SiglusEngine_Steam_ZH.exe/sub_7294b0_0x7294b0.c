// 函数: sub_7294b0
// 地址: 0x7294b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = (**(arg1 + 4))(arg1, 1, 0x580) + 0x100
*(arg1 + 0x12c) = esi
_memset(esi - 0x100, 0, 0x100)

for (char* i = nullptr; i s<= 0xff; i = &i[1])
    *(i + esi) = i.b

__builtin_memset(esi + 0x100, 0xffffffff, 0x180)
char* result = _memset(esi + 0x280, 0, 0x180)
__builtin_memcpy(esi + 0x400, *(arg1 + 0x12c), 0x80)
return result
