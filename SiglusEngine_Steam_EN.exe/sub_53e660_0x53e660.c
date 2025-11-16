// 函数: sub_53e660
// 地址: 0x53e660
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s< 0)
    arg1 = neg.d(arg1)

int32_t esi = 1

for (int32_t i = arg1 s/ 0xa; i s> 0; i s/= 0xa)
    esi += 1

if (arg2 s< esi)
    return esi

return arg2
