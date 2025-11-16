// 函数: __invoke_watson
// 地址: 0x74dba5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
    trap(0xd)

__call_reportfault(2, 0xc0000417, 1)
sub_74d4bb(0xc0000417)
noreturn
