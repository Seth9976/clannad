// 函数: __invoke_watson
// 地址: 0x5f3623
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
    trap(0xd)

__call_reportfault(2, 0xc0000417, 1)
sub_5f3a27(0xc0000417)
noreturn
