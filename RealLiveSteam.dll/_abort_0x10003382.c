// 函数: _abort
// 地址: 0x10003382
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

if (sub_10005ef5() != 0)
    sub_10005f1e(0x16)

if ((data_10017008 & 2) != 0)
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
        trap(0xd)
    
    __call_reportfault(3, 0x40000015, 1)

__exit(3)
noreturn
