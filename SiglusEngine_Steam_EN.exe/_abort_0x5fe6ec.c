// 函数: _abort
// 地址: 0x5fe6ec
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (sub_5fc4be() != 0)
    sub_5fc4e7(0x16)

if ((data_63c870 & 2) != 0)
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
        trap(0xd)
    
    __call_reportfault(3, 0x40000015, 1)

__exit(3)
noreturn
