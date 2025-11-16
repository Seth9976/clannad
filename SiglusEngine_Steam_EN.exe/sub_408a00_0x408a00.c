// 函数: sub_408a00
// 地址: 0x408a00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

sub_40a230(arg1 + 0x10)
void* esi = arg1 + 0x30
int32_t i_1 = 7
int32_t i

do
    _free(*esi)
    esi += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
_free(*(arg1 + 0x24))
_free(*(arg1 + 0x98))
_free(*(arg1 + 0xa0))
__builtin_memset(arg1, 0, 0xb4)
return 0
