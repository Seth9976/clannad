// 函数: __invoke_watson
// 地址: 0x1000364a
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
    trap(0xd)

__call_reportfault(2, 0xc0000417, 1)
sub_10005e82(0xc0000417)
noreturn
